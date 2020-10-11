#include <iostream>
using namespace std;

void decimalToBinary (int dec       ) ;
void decimalToHex    (int dec       ) ;
void decimalToOctal  (int dec       ) ;

int  binaryToDecimal (char binary[] ) ; 
int  hexToDecimal    (char hex[]    ) ;
int  octalToDecimal  (char octal[]  ) ;


void binaryToHex     (char binary[] ) ; 
void binaryToOctal   (char binary[] ) ; 

void hexToBinary     (char hex[]    ) ;
void hexToOctal      (char hex[]    ) ;

void octalToHex      (char octal[]  ) ;
void octalToBinary   (char octal[]  ) ;

int power (int x , int y);
int menu  (void);

int main ()
{
    bool state = true ;
    
    while (state )
    {
          switch (menu() )
          {
                 case 1 :
                          int dec ;
                          cout << "Enter The Decimal Number : " ; 
                          cin >> dec ;
                          
                          cout << "\n\n";
                          cout << dec << " in Other Format : \n";
                          
                          cout << "\n\t In Binary : " ;
                          decimalToBinary(dec);
                          
                          cout << "\n\t In Hex : " ;
                          decimalToHex(dec);
                          
                          cout << "\n\t In Octal : " ;
                          decimalToOctal(dec);
                          break;
                          
                          
                 case 2:
                          char bin[32] ;
                          cout << "Enter The Binary   Number : " ; 
                          cin >> bin ;
                          
                          cout << "\n\n";
                          cout << bin << " in Other Format : \n";
                          
                          cout << "\n\t In Decimal  :  " ;
                          cout << binaryToDecimal(bin);
                          
                          cout << "\n\t In Hex      :  " ;
                          binaryToHex(bin);
                          
                          cout << "\n\t In Octal    :  " ;
                          binaryToOctal(bin);
                        
                          break;
                          
                 case 3:
                          char hex[32] ;
                          cout << "Enter The  hex   Number : " ; 
                          cin >> hex ;
                          
                          cout << "\n\n";
                          cout << hex << " in Other Format : \n";
                          
                          cout << "\n\t In Decimal  :  " ;
                          cout << hexToDecimal(hex);
                          
                          cout << "\n\t In Binary   :  " ;
                          hexToBinary(hex);
                          
                          cout << "\n\t In Octal    :  " ;
                          hexToOctal(hex);
                          
                          break;
                          
                 case 4:
                          char octal[32] ;
                          cout << "Enter The  octal  Number : " ; 
                          cin >> octal ;
                          
                          cout << "\n\n";
                          cout << octal << " in Other Format : \n";
                          
                          cout << "\n\t In Decimal :  " ;
                          cout << octalToDecimal(octal);
                          
                          cout << "\n\t In Binary  :  " ;
                          octalToBinary(octal);
                          
                          cout << "\n\t In Hex     :  " ;
                          octalToHex(octal);
                          
                          break;
                          
                 case 5:
                        state = !state ;
                        break;
          }  
          
          cout << "\n\n";
          system("pause");
          system("cls");
          
          
    }
    
    cout << "\n";
    cout << "Wajdy Essam , C++ Programmer , Java Developer"
    " He Now Interested in Computer\nScince Topic , Such as Artifical"
    " Intelligance and Cryptography and Algorihms\nand Data Structure"
    " i hope my small program benfit you , \nGood Luck :)\n\n";
    system("pause");
    return 0;
}

int menu ()
{
    cout << "Decimal To other Format  ......... [1]" << endl
         << "Binary  To other Format  ......... [2]" << endl
         << "Hex     To other Format  ......... [3]" << endl
         << "Octal   To other Format  ......... [4]" << endl 
         << "Exit From Program        ......... [5]" << endl << endl
         << "\t\t >> " ;
         
    int choice ;
    cin >> choice ;
    
    return choice ;
}

void decimalToBinary (int dec )
{
     if ( dec > 1)
        decimalToBinary(dec/2);
        
     cout << dec%2 ;
}

void decimalToHex    (int dec ) 
{
     char hexChar[] = {'0','1','2','3','4','5','6','7','8','9',
                       'A','B','C','D','E','F'}; 
     if ( dec > 15 )
        decimalToHex(dec/16);
        
     cout << hexChar[dec%16] ;
}

void decimalToOctal (int dec )
{
     char octalChar[] = {'0','1','2','3','4','5','6','7'} ;
     
     if ( dec > 7 )
        decimalToOctal(dec/8);
        
     cout << octalChar[dec%8] ;
}

int binaryToDecimal (char bin[] ) 
{
     int tmp = 0 ;
     int sum = 0 ;
     
     for (int i=0 , j=strlen(bin)-1 ; i<strlen(bin) ; i++ )
     {
         tmp = ( bin[i]=='1' ) ? 1 : 0 ;
         tmp = tmp * power(2,j--);
         sum += tmp ;
     }
     
     return sum ;
}

int hexToDecimal    (char hex[]    ) 
{
     int tmp = 0 ;
     int sum = 0 ;
     int  hexNum[]  = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
     char hexChar[] = {'0','1','2','3','4','5','6','7','8','9',
                       'A','B','C','D','E','F'};
     
     for (int i=0 , j=strlen(hex)-1 ; i<strlen(hex) ; i++ )
     {
         for (int k=0 ; k<16 ; k++)
         {
             if (hex[i] == hexChar[k])
             {
                tmp = hexNum[k] ;
                break;
             }
         }
         
         tmp = tmp * power(16,j--);
         sum += tmp ;
     }
     

     return sum ;
}

int octalToDecimal    (char octal[]    ) 
{
     int tmp = 0 ;
     int sum = 0 ;
     int  octalNum[]  = {0,1,2,3,4,5,6,7};
     char octalChar[] = {'0','1','2','3','4','5','6','7'};
     
     for (int i=0 , j=strlen(octal)-1 ; i<strlen(octal) ; i++ )
     {
         for (int k=0 ; k<16 ; k++)
         {
             if (octal[i] == octalChar[k])
             {
                tmp = octalNum[k] ;
                break;
             }
         }
         
         tmp = tmp * power(8,j--);
         sum += tmp ;
     }
     
     return sum ;
}
     
int power (int x , int y)
{
    int p=1 ;
    
    for (int i=0 ; i<y ; i++)
        p *= x ;
      
     return p;
}
    
    
void binaryToHex (char binary[] )
{
     int dec = binaryToDecimal(binary);
     decimalToHex(dec);
}

void binaryToOctal (char binary[] )
{
     int dec = binaryToDecimal(binary);
     decimalToOctal(dec);
}

void hexToBinary (char hex[] )
{
     int dec = hexToDecimal(hex);
     decimalToBinary(dec);
}

void hexToOctal (char hex[] )
{
     int dec = hexToDecimal(hex);
     decimalToOctal(dec);
}

void octalToHex (char o[] )
{
     int dec = octalToDecimal(o);
     decimalToHex(dec);
}

void octalToBinary (char o[] )
{
     int dec = octalToDecimal(o);
     decimalToBinary(dec);
}

