
/*
Author: Xuan Thanh Dang, Budi Mulyawan, Nirupama Bulusu, Sanjay Jha, Pubudu N Pathirana

Contact: xuan.t.dang@uts.edu.au
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

import java.io.*;

public class Test
{
	public static void main(String args[])
	{
		Data data = new Data("output.txt");
		for(int i = 0;  i < data.getSize() - 1; i++)
		{
			data.getRSSI(i).print(2, 1);
		}
	}
}
