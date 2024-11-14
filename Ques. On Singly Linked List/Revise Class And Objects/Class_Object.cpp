// 1st vedio of the ll esme starting ka 1 hour ka content h
// revision hua h esme 

// #include<iostream>
// using namespace std;
// class Student 
// {
//     public:
//     string name;
//     int rno;
//     float marks;
// };
// int main()
// {
//     Student s;
//     // s.name="Shivam";
//     s.rno=45;
//     s.marks=98.8;
//     cout<<s.rno; // 45
//     cout<<s.name; // nothing print anything becoz we can't 
//     // initilize name 

//     // but here we use three lines s.rno, s.name, s.marks but we can't use 
//     //  three lines we use constructor 
// }


// constructor -> use agar ek particular user defind data type(means ek particular class
// ke multiple attribute h and hme en sbko ek sath initilize karna h to hm use constru. karte h 
// taki hm bar bar dot name, dot rno na karen dot(.) operaor ka use karene se bache 



// #include<iostream>
// using namespace std;
// class Student
// {
//     public:
//     string name;
//     int rno;
//     float marks;
//     // constructor
//     Student(string n, int r, float m)
//     {
//         name=n;
//         rno=r;
//         marks=m;
//     }

// };
// int main()
// {
//     Student s("Shivam", 45, 98.8);
//     // declarartion with initialization ho gya sath me
//     cout<<s.name; // Shivam 

// }




// #include<iostream>
// using namespace std;
// class Student 
// {
//     public:
//     string name;
//     int rno;
//     float marks;

//     Student(string name, int rno, float marks)
//     {
//         this-> name= name;
//         this->rno=rno;
//         this->marks=marks;
//     }
// };
// int main()
// {
//     Student s("Shivam", 89, 98.8);
//     cout<<s.name; // Shivam
// }





// #include<iostream>
// using namespace std;
// class Student 
// {
//     public:
//     string name;
//     int rno;
//     float marks;

//     Student(string name, int rno, float marks)
//     {
//         this-> name= name;
//         this->rno=rno;
//         this->marks=marks;
//     }
// };

// void change(Student s) // change except kar rha h Student data type ko 
// {
//     s.name="sita";
// }
// int main()
// {
//     Student s("Shivam", 89, 98.8);
//     cout<<s.name<<endl; // Shivam
//     // name is changed in main function itself 
//    // // s.name="ram";
//    // // cout<<s.name;

//     // but we want to change our name by making a function 

//     change(s); // change me hm apna student pass kar rhe hu 
//     // like or jaise hm int pass karte h 

//     cout<<s.name;
//     // not change name means it is pass by value.  
// //   R-> Shivam
// //       Shivam

// // change solution -> pass by reference (&)

// }



// method - 1
// change solution -> pass by reference (&)

// #include<iostream>
// using namespace std;
// class Student 
// {
//     public:
//     string name;
//     int rno;
//     float marks;

//     Student(string name, int rno, float marks)
//     { 
//         // (*this). == this->     both are the same 

//     //   ******  // this is basically a pointer not this is a this or variable  
//         // this->name=name;
//               // or 
//         (*this).name=name;
//         this->rno=rno;
//         this->marks=marks;
//     }
// };
// void change(Student &s) // bu using & (reference)
// {
//     s.name="sita";
// }
// int main()
// {



// // // //   by using pointers in integers how pointers works 

// // //      int x=6;
// // // //   integer ka pointer 
// // //      int *ptr=&x;

// // //      cout<<ptr<<endl;  // 0x61ff08
// // //      cout<<*ptr<<endl; // 6

// // // //   change 
// // //      *ptr=10;
// // //      cout<<*ptr; // 10

// // // //   by using dereference(*) opertor we an change the value pointers ke through hm variable ki value ko bhi change kar skte h 







// // // Method -> 1 to change the name 
//     // Student s("Shivam", 89, 98.8);
//     // cout<<s.name<<endl; 
//     // change(s);
//     // cout<<s.name;







// // Method -> 2
// // pointers used in student data type 
// // we want to change student name in the main fun by using pointers 

// //  Student s("Shivam", 89, 98.8);
// //  // we make student pointers 
// //  Student* ptr = &s;

// //  cout<<s.name<<endl;
// //  (*ptr).name="Shiv";
// //  cout<<s.name<<endl;

// //  // rno change using pointers 
// //  cout<<s.rno<<endl;
// //  (*ptr).rno=67;
// //  cout<<s.rno<<endl;

// // name change successfully by using pointers 








// // Method -> 3 is same as method 2 but it is a technique to write (*ptr). we write ptr-> 
// // // (*ptr). == ptr-> 

//  Student s("Shivam", 89, 98.8);
//  // we make student pointers 
//  Student* ptr = &s;
//  cout<<s.name<<endl;
//  // change name than we use pointers (*) in place of dereference operator (*) we use this keyword 
//  // this and arrow (->) => this-> 
//  ptr->name="aman";
//  cout<<s.name<<endl;

// // change 
// // Shivam
// // aman


// // (*ptr). == ptr->     both are same.


// (*ptr).rno=50;
// cout<<s.rno<<endl;
// ptr->rno=60;
// cout<<s.rno<<endl;

// // change 
// // 50
// // 60
  
// }

// // change ho gya by pass by reference se main function ke ander change hua 
// // Shivam
// // sita




// Summary 
// // method - 2 -> by using pointers (*)

// // like if we want to swap anything -> M.1-> by using pointers (*)
// // M.2-> using reference (&)

//                   // class me by reference (&) ka use bahut kam karenge 
//                   // hm jadatar pointers ka use karenge (*) and ll me to pointers ka hi use hota h 




// finally our code looks like 
// #include<iostream>
// using namespace std;
// class Student 
// {
//     public: // acces modifier
//     string name;
//     int rno;
//     float marks;

//     Student(string name, int erno, float marks)
//     {
//         this->name=name;
//         this->rno=rno;
//         this->marks=marks;
//     }
// };

// void change(Student* s) // change fun ek pointer ko receive karega ->>  to student pointer [Student* ] s ka address store karega 
// {
//     s->name="ram";
// }
// int main()
// {
//     Student s("Shiva",89,98.8);
//     cout<<s.name<<endl;
//     change(&s); // Student s ka address pass ho rha h
//     cout<<s.name;
// }

// Shiva
// ram


// pointers(*) ke sath hm this-> keyword ka use karte h c++ me.








// dynamically bhi allocate kar sakte h new method hota h 

#include<iostream>
using namespace std;
class Student 
{
    public:
    string name;
    int rno;
    float marks;

    Student(string name, int erno, float marks)
    {
        this->name=name;
        this->rno=rno;
        this->marks=marks;
    }
};

void change(Student* s) 
{
    s->name="ram";
}
int main()
{
    // hm student ka variable declare nhi karenge hm starting se hi 
    // Student ka pointer declare kar sakte hu

    Student* s = new Student("Shiva",89,98.8); // dynamically allcate ho rha h 
    
    // s dabba pointer ka dabba h eske ander ek dabba h jisme name, rno etc store ho rhi h 
    cout<<s->name<<endl;
    change(s);  // hm yha per ab address(&) nhi pass karenge direct s ko hi pass karenge kyuki yh ek pointer(*) h 
    
    // direct hm pointer ko hi pass kar sakte h 
    cout<<s->name;

}

// Shiva
// ram

// Done -> 22-02-2024, 03:00 PM 