

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

module SendM
{
   provides
   {
      interface StdControl;
   }

   uses
   {
      interface Timer;
      interface Leds;
      interface SendMsg as Send;
   }
}

implementation
{
   bool pending;
   struct TOS_Msg data;

   command result_t StdControl.init()
   {
      pending = FALSE;
      return call Leds.init();
   }

   command result_t StdControl.start()
   {
      return call Timer.start(TIMER_REPEAT, 1);
   }

   command result_t StdControl.stop()
   {
      return call Timer.stop();
   }

   event result_t Timer.fired()
   {
      IntMsg *message = (IntMsg *)data.data;

      if (!pending)
      {
         pending = TRUE;

         atomic
         {
            message->src = TOS_LOCAL_ADDRESS;
         }

         if (call Send.send(TOS_BCAST_ADDR, sizeof(IntMsg), &data))
         {
            call Leds.yellowToggle();  // Give visual indication
            return SUCCESS;
         }

         pending = FALSE;
      }
      return FALSE;
   }

   event result_t Send.sendDone(TOS_MsgPtr msg, result_t success)
   {
      if (pending && msg == &data)
         pending = FALSE;

      return SUCCESS;
   }
} 
