#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// class swaap{
//     int a,b;
//     public:
//         void getdat(int x, int y){
//             a=x;
//             b=y;
//         }
//         void swapp(){
//             a=a+b;
//             b=a-b;
//             a=a-b;
//             cout<<a<<"\n"<<b<<endl;
//         }
// };
// int main(){
//     swaap a;
//     a.getdat(10,20);
//     a.swapp();
//     return 0;
// }





// int main(){
//     cout<<"hello world"<<var<<endl;
//     int value=7/0;
//     cout<<value;
//     return 0;
// }
/*  error: 'var' was not declared in this scope
   28 |     cout<<"hello world"<<var<<endl;
      |                          ^~~
day2.cpp:29:16: warning: division by zero [-Wdiv-by-zero]
   29 |     int value=7/0; */ 


   // cout- character output stream-- to display the output






//    int main(){
//     int num1, num2;
//     cout<<"Enter number 1"<<endl;
//     cin>>num1;
//     cout<<"Enter number2"<<endl;
//     cin>>num2;
//     cout<<"The sum of number is: "<<num1+num2<<endl;
//     return 0;
//    }




// int main(){
//     int number1= 15; //decimal
//     int number2= 017; //octal
//     int number3= 0x0F; //hexa deccimal
//     int number4 = 0b00001111; //binary 

//     cout<<number1<<endl;
//     cout<<number2<<endl;
//     cout<<number3<<endl;
//     cout<<number4<<endl;
//     return 0;
// }



// int main(){
//     //braced initializors
//     //variable may contain random garbage value. Warning
//     int elephant_count;
//     int lion_count{};
//     int  dog_count{10};
//     int cat_count{15};
//     //can use expression as initializer
//     int domesticated_animals { dog_count + cat_count };

//     //int new_number{doesnt_exist};
//     //int narrowing_conversion(2,9); // compiler error
//     cout<<"ELephant count :"<<elephant_count<<endl;
//     cout<<"Lion count :"<<lion_count<<endl;
//     cout<<"Dog count :"<<dog_count<<endl;
//     cout<<"Cat count :"<<cat_count<<endl;

//     cout<<"Domesticated animal count  :"<<domesticated_animals;

    
//     return 0;
// }

// int main(){
//     int bike_count=2;
//     int truck_count=7;
//     int  vehicle_count=bike_count+truck_count;
//     int narrowing_conversion_assignment=2.9; 
    
//     cout<<"Bike count :"<<bike_count<<endl;
//     cout<<"Truck count :"<<truck_count<<endl;
//     cout<<"Vehicle count :"<<vehicle_count<<endl;
//     cout<<"Narrowing conversion : :"<<narrowing_conversion_assignment<<endl;

//     cout<<"Size of int : "<<sizeof(int)<<endl;
//     cout<<"sizeof truck_count "<<sizeof(truck_count)<<endl;
//     return 0;

// }

// int main(){
//     int apple_count{5};
//     int orange_count{10};
//     int  fruit_count=apple_count+orange_count;

//     //int bad_initialization (doesnt_exist3 + doesnt_exist4)

//     //Information loss, less safe than braced initializers
//     int narrowing_conversion_assignment(2.9); 
    
//     cout<<"Bike count :"<<apple_count<<endl;
//     cout<<"Orange count :"<<orange_count<<endl;
//     cout<<"Fruit count :"<<fruit_count<<endl;
//     cout<<"Narrowing conversion : :"<<narrowing_conversion_assignment<<endl;//will lose info

   
//     return 0;

// }


// int main(){
//     int apple_count{5};
//     int orange_count{10};
//     int  fruite_count=apple_count+orange_count;
//      //int bad_initialization (doesnt_exist3 + doesnt_exist4)
//      //Information loss, less safe than braced initializers
//     int narrowing_conversion_assignment(2.9); 
    
//     cout<<"apple count :"<<apple_count<<endl;
//     cout<<"orange count :"<<orange_count<<endl;
//     cout<<"fruit count :"<<fruite_count<<endl;
//     cout<<"Narrowing conversion : :"<<narrowing_conversion_assignment<<endl;


//     cout<<"Narrowing conversion : :"<<narrowing_conversion_assignment<<endl;//will lose info
//     return 0;

// }


// int main(){
//    long double value;
//    cout<<"ENter the value in rupees : "<<endl;
//    cin>>value;
//    value=value*106.9030;
//    cout<<"Value in pounds = "<<value<<endl;

//    long double value2;
//    cout<<"ENter the value in pounds : "<<endl;
//    cin>>value2;
//    value2=value2/106.9030;
//    cout<<"Value in rupees = "<<value2<<endl;
//    return 0;
// }


int main(){
   bool red_light{false};
   bool green_light{true};
   if(red_light==true){
      cout<<"Stop!!"<<endl;
   }
   else{
      cout<<"Go!!"<<endl;
   }
   if(green_light==true){
      cout<<"The light is green "<<endl;
   }
   else{
      cout<<"The light is not green "<<endl;
   }
   cout<<sizeof(bool)<<endl;


   //printing out a bool
   //1 -->> true
   //0 -->> false
   cout << endl;
   cout<<"red light : "<<red_light<<endl;
   cout<<"green light : "<<green_light<<endl;
   cout<<boolalpha;
   cout<<"red_light : "<<red_light<<endl;
   cout<<"green_light : "<<green_light<<endl;



   return 0;
}