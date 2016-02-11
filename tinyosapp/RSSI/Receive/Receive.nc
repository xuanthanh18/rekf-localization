
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

configuration Receive
{}
  
implementation
{
   components Main, ReceiveM, LedsC, GenericComm as Comm;
   
   Main.StdControl -> ReceiveM;
   Main.StdControl -> Comm;

   ReceiveM.Leds -> LedsC;
   ReceiveM.Receive -> Comm.ReceiveMsg[AM_INTMSG];
   ReceiveM.Send -> Comm.SendMsg[AM_INTMSG];
}
