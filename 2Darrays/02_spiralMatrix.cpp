// spiral matrix
// In this we will traverse in spiral way and print array elements

/*Approach
In matrix be  traverse as this manner
top-> right -> bottom -> left
inner(top-> right -> bottom -> left ) .... till we reach center
  We wil use 4 variables
  srow=0-> starting row
  scol=0-> starting column
  eroq=n-1-> ending row
  ecol=m-1 -> ending column

  Logic ->
   for external loop-> srow <= erow , scol <= ecol
   inner loop
   Top -> for(scol to ecol){
        mat[srow][j]
      }
    right -> for(srow+1 to erow){
        mat[i][ecol]
     }
    bottom -> for(ecol-1 to scol){
       mat[erow][j]
    }
    left -> for(erow-1 to srow+1){
       mat[i][scol]
    }

     in next iteration our variable changed for our variables
     srow++ ,scol++ ,erow--, ecol--

     edge case for odd matrix as [3][5]-> Middle value will be duplicated so we add 
     if statement to bottom and left 
     as 
     if(srow ==erow){
                break;
             } // for bottum
    f(scol ==ecol){
                break;
             }//for left
    
*/
#include <iostream>
using namespace std;
void spiralMatrix(int arr[][3], int n, int m)
{ // on passing on matrix we need to pas like this , and we always have to pass column is compulsory
    int srow = 0 ,scol = 0;
    int erow = n - 1, ecol = m - 1;
    while (srow<=erow && scol<=ecol)
    {
        // top
        for (int j = scol; j <= ecol; j++)
        {
            cout << arr[srow][j] << " ";
        }
        // right
        for (int i = srow + 1; i <= erow; i++)
        {
            cout << arr[i][ecol] << " ";
        }
        // bottom
        for (int j = ecol - 1; j >= scol; j--)
        {
             if(srow ==erow){
                break;
             }
            cout << arr[erow][j] << " ";
        }
        // left
        for (int i = erow - 1; i >= srow + 1; i--)
        {
             if(scol ==ecol){
                break;
             }
            cout << arr[i][scol] << " ";
        }
        srow++;
        scol++;
        erow--;
        ecol--;
    }
    cout<< endl;
}
int main()
{
    int arr[3][3] = {{100, 100, 100},
                     {87, 86, 99},
                     {79, 98, 99}};
    spiralMatrix(arr, 3, 3);
    return 0;
}