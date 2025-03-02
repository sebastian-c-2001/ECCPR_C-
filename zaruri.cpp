#include <iostream>

using namespace std;

int main()
{   unsigned int n,i, vec[5],sum=0,sum1,j;

    cin>>n;

    for (i=0;i<n;i++)
        {sum1=0;
        if (i==0)
            {for (j=0;j<5;j++)
                {cin>>vec[j];
                 sum1=vec[j]+sum1;
                }
             sum=sum+21-sum1;
             }
        else
        {for (j=0;j<4;j++)
                {cin>>vec[j];
                 sum1=vec[j]+sum1;
                }
            sum=sum+21-sum1;
        }
        }
    cout<<sum;

    return 0;
}
//
