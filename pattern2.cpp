/*             **********        **********               *
 **            *********          *********              **
 ***           ********            ********             ***
 ****          *******              *******            ****
 *****         ******                ******           *****
 ******        *****                  *****          ******
 *******       ****                    ****         *******
 ********      ***                      ***        ********
 *********     **                        **       ********* 
 **********    *                          *      **********
*/
#include <iostream>
using namespace std;
int main()
{
	int row,col;
	cout<<"Enter numbers of rows"<<endl;
	cin>>row;
    for(int i=row;i>=1;i--){//4-3-2-1
    	for(int j=i;j>=1;j--){//4-3-2-1-0|3-2-1-0|2-1-0|
    		cout<<" * ";// *  *  *  * 
		}               // *  *  * 
		cout<<endl;     // *  * 
	}                  //  * 
}
