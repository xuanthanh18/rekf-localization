
/*
Author:Wilson,  Nirupama Bulusu, Sanjay Jha, Pubudu N Pathirana

Contact:
Version: 1.0

Copyright (c) National ICT Australia Limited, 2004.
License is granted to copy, use, and to make and to use derivative works for
research and evaluation purposes,provided that the National ICT Australia
Limited is acknowledged in all documentation pertaining to any such copy or derivative work.
The National ICT Australia Limited grants no other licenses expressed or implied.

NATIONAL ICT AUSTRALIA LIMITED MAKES NO REPRESENTATIONS CONCERNING EITHER THE
MERCHANTABILITY OF THIS SOFTWARE OR THE SUITABILITY OF THIS SOFTWARE FOR ANY PARTICULAR PURPOSE.

The software is provided "as is" without express or implied warranty of any kind.

Contact: Nirupama Bulusu (nbulusu@cse.unsw.edu.au)

*/

includes IntMsg;
includes AM; 
module ReceiveM
{
   provides
   {
      interface StdControl;
   }

   uses
   {
      interface Leds;
      interface SendMsg as Send;
      interface ReceiveMsg as Receive;
   }
}

implementation
{
   bool pending;
   struct TOS_Msg data;
   uint16_t NUM_SENSOR = 3;
   uint16_t index;

   command result_t StdControl.init()
   {
      pending = FALSE;
      return call Leds.init();
   }

   command result_t StdControl.start()
   {
      index = 1;
      return SUCCESS;
   }

   command result_t StdControl.stop()
   {
      return SUCCESS;
   }

   event TOS_MsgPtr Receive.receive(TOS_MsgPtr packet)
   {
      uint16_t src_id;
      IntMsg *message = (IntMsg *)packet->data;

//      call Leds.greenToggle();
      
      src_id = message->src;
      if(src_id == index)
      { 
	      index++;
      message = (IntMsg *)data.data;
      message->src = src_id;
      message->strength = packet->strength;

      if (!pending)
      {
         pending = TRUE;

         if (!(call Send.send(TOS_UART_ADDR, sizeof(IntMsg), &data)))
         {
            pending = FALSE;
           // call Leds.redToggle();  // Red LED toggled when packet can't be sent
         }
      
/*
   }  else
            call Leds.yellowToggle();*/
      }
   }
   if(index == NUM_SENSOR +1)
	   index = index - NUM_SENSOR;
   
      return packet;
   }

   event result_t Send.sendDone(TOS_MsgPtr msg, result_t success)
   {
       if (pending && msg == &data)
          pending = FALSE;

       return SUCCESS;
   }
}

