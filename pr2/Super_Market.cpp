#include "class.cpp"

int main()
{
    int n,product_id;

     
    
    cout << "Enter no. of products : ";
    cin >> n;

    SuperMarket s[n];
    SuperMarket S;

    int pro_id[n];


    for(int i=0; i<n; i++)
    {
        cout << "product no . [" << i+1 <<"] --- "  ; 
        s[i].setdata();
        
    }

    cout << endl << endl <<"Enter id and password to see product history : --" << endl ;

    int fid = S.setid();
    string fpassword = S.setpass();

   
   cout << "Enter Product I'D : ---" << endl ;

   for(int i=0; i<n; i++)
   {
      pro_id[i] = s[i].getnumber();   
   }


    for (int i=0; i<n; i++)
    {
       
       if (fid == S.id2() && fpassword == S.password2() ) {

         cout << endl << "Enter product id : ";
         cin >> product_id;

         cout << endl;


        
             if(pro_id[i] == product_id)
            {
               cout << endl ;
               s[i].getnumber();
               s[i].getname();
               s[i].getprice();
               s[i].getquantity();
               s[i].getdiscount();
            }

            else{
                cout << "invalid product id : ";
            }
       }

        else
        {
            cout << "Invalid input : ";
        }
       
    }
    return 0; 
}