#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
class conversion{
	protected: 
		int select1;
	public:
		void calculate1()
		{
			system("CLS");
			cout<<"________________________________________________________________________________________________________\n"<<endl;
			cout<<"|                                                                                                      |"<<endl;
			cout<<"|                                         CONVERSION                                                   |"<<endl;
			cout<<"|                                                                                                      |"<<endl;
			cout<<"________________________________________________________________________________________________________"<<endl;
			cout<<" 1.FROM DECIMAL \n 2.FROM BINARY \n 3.FROM HEXA-DECIMAL \n 4.FROM OCTAL \n 5.DECIMAL TO EXCESS-3 CODE\n 6.BINARY TO GRAY CODE\n 7.DECIMAL TO BCD"<<endl;
			cin>>select1;
			system("CLS");
		
		switch(select1){
			case 1:
				  {
				
				int sel;
				
				  cout<<"________________________________________________________________________________________________________\n"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"|                                         FROM DECIMAL                                                 |"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"________________________________________________________________________________________________________"<<endl;
				
				
				cout <<"\n1.BINARY \n2.OCTAL \n3.HEXADECIMAL "<<endl;
				
				cin>>sel;
				
				system("CLS");
				
				 switch(sel)
				 {
				 case 1:
				    { system("CLS");
				  cout<<"________________________________________________________________________________________________________\n"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"|                                       DECIMAL TO BINARY                                              |"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"________________________________________________________________________________________________________"<<endl;
					
				int b[10], d, di ,i;     
				cout<<"\nENTER THE DECIMAL NUMBER "<<endl;    
				cin>>d;
				di=d;   
				system("CLS"); 
				for(i=0; d>0; i++)    
				{    
				b[i]=d%2;    
				d= d/2;  
				}  
				    cout<<"________________________________________________________________________________________________________\n"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"|                                       DECIMAL TO BINARY                                              |"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"________________________________________________________________________________________________________\n\n\n\n\n"<<endl;  
				cout<<"\t\t\t\t\t"<<di<<" = ";    
				for(i=i-1 ;i>=0 ;i--)    
				{    
				cout<<b[i];    
				} 
				cout<<"\n\n\n\n\n";
				  
				}  
				    break;
				
				
				 case 2:
				    {  system("CLS");
				  cout<<"________________________________________________________________________________________________________\n"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"|                                       DECIMAL TO OCTAL                                               |"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"________________________________________________________________________________________________________"<<endl;
					
				int o[10], d,di, i;     
				cout<<"\nENTER THE DECIMAL NUMBER "<<endl;    
				cin>>d;    
				system("CLS");
				di=d;
				for(i=0; d>0; i++)    
				{    
				o[i]=d%8;    
				d= d/8;  
				} 
				  cout<<"________________________________________________________________________________________________________\n"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"|                                       DECIMAL TO OCTAL                                               |"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"________________________________________________________________________________________________________\n\n\n\n\n"<<endl;   
				cout<<"\t\t\t\t\t"<<di<<" = ";      
				for(i=i-1 ;i>=0 ;i--)    
				{
					cout<<o[i]; 
				}
				  cout<<"\n\n\n\n\n";
				}  
				    break;
				
				
				 case 3:
				   { system("CLS");
				    cout<<"________________________________________________________________________________________________________\n"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"|                                      DECIMAL TO HEXADECIMAL                                          |"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"________________________________________________________________________________________________________"<<endl;
				    
				int h[10], d,di ,i;     
				cout<<"\nENTER THE DECIMAL NUMBER "<<endl;    
				cin>>d; 
				di=d;
				system("CLS");  
				for(i=0; d>0; i++)    
				{    
				h[i]=d%16;    
				d= d/16;  
				}    
				  cout<<"________________________________________________________________________________________________________\n"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"|                                      DECIMAL TO HEXADECIMAL                                          |"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"________________________________________________________________________________________________________\n\n\n\n\n"<<endl;
				cout<<"\t\t\t\t\t"<<di<<" = ";     
				for(i=i-1 ;i>=0 ;i--)    
				{
				switch(h[i])
				        {
				            case 10:
				                cout<<"A";
				                break;
				            
							case 11:
				                cout<<"B";
				                break;    
				            
				      case 12:
				                cout<<"C";
				                break;
				            
							case 13:
				                cout<<"D";
				                break;
								
							case 14:
				                cout<<"E";
				                break;
							
							case 15:
				                cout<<"F";
				                break;
										    
				            default:                 
				                cout<<h[i];    
				}
				}
				cout<<"\n\n\n\n\n";
				}  
				    break;
				        default:
				                cout<<"\n--Invalid Input--";
				}
				break;
				    default:
				                cout<<"\n--Invalid Input--";
				}
				break;
			case 2:
				{
				
				int selt;
				
				    cout<<"________________________________________________________________________________________________________\n"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"|                                          FROM BINARY                                                 |"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"________________________________________________________________________________________________________"<<endl;
				
				
				cout <<" \n 1.DECIMAL \n 2.OCTAL \n 3.HEXADECIMAL "<<endl;
				
				cin>>selt;
				
				system("CLS");
				
				 switch(selt)
				 {
				 case 1:
				    { 
				    cout<<"________________________________________________________________________________________________________\n"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"|                                       BINARY TO DECIMAL                                              |"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"________________________________________________________________________________________________________"<<endl;
					
				int i,bit,bn,n,d=0,r,b;
				 	cout<<"\nENTER BINARY NUMBER"<<endl;
				 	cin>>bn;
				 	cout<<"\nENTER NUMBER OF BITS"<<endl;
				 	cin>>bit;
				 	n=bn;
				 	b=bit;
				 	system("CLS");
				 	for (i=0;i<bit;i++)
				 	{
				 		d=d+(n%10*pow(2,i));
				 		n=n/10;
					 }
					cout<<"________________________________________________________________________________________________________\n"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"|                                       BINARY TO DECIMAL                                              |"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"________________________________________________________________________________________________________\n\n\n\n"<<endl;
				 cout<<"\t\t\t\t\t"<<bn<<"="<<d;
				 cout<<"\n\n\n\n\n";
				 	
				 }
				    break;
				
				
				 case 2:
				   {
					   	cout<<"________________________________________________________________________________________________________\n"<<endl;
						cout<<"|                                                                                                      |"<<endl;
						cout<<"|                                       BINARY  TO OCTAL                                               |"<<endl;
						cout<<"|                                                                                                      |"<<endl;
						cout<<"________________________________________________________________________________________________________"<<endl; 
					int i, bit,bn,n,d=0,r,b;
					
					cout<<"ENTER BINARY NUMBER"<<endl;
					cin>>bn;
					cout<<"ENTER NUMBER OF BITS"<<endl;
					cin>>bit;
					n=bn;
					b=bit;
					system("CLS");
				for(i=0;i<bit;i++)
				{
					
					
				d=d+(n%10*pow(2,i));
					n=n/10;
				}
				cout<<d;
				
				int di=d;
				int o[100];
								for(i=0; d>0; i++)    
								{    
								o[i]=d%8;    
								d= d/8;  
								} 
								    cout<<"________________________________________________________________________________________________________\n"<<endl;
									cout<<"|                                                                                                      |"<<endl;
									cout<<"|                                       BINARY  TO OCTAL                                               |"<<endl;
									cout<<"|                                                                                                      |"<<endl;
									cout<<"________________________________________________________________________________________________________\n\n\n\n\n"<<endl;   
								cout<<"\t\t\t\t\t"<<bn<<" = ";      
								for(i=i-1 ;i>=0 ;i--)    
								{
									cout<<o[i]; 
								}
								  cout<<"\n\n\n\n\n";
					
					}   
				    break;
				
				
				 case 3:
				   {
				// case 1:
				    { 
				    cout<<"________________________________________________________________________________________________________\n"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"|                                    BINARY TO HEXADECIMAL                                             |"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"________________________________________________________________________________________________________"<<endl;
					
				  int i=0;
				    int bin, b, rem, j;
				    char hex[10];
				    cout<<"\nENTER THE BINARY NUMBER "<<endl;
				    cin>>bin;
				    b=bin;
				    system("CLS");
			
				    while (bin > 0) {
        rem = bin % 10000;
        
        switch (rem) {
        case 0:
            hex[i]= '0';
            break;
        case 1:
             hex[i]= '1';
            break;
        case 10:
             hex[i]= '2';
            break;
        case 11:
             hex[i]= '3';
            break;
        case 100:
             hex[i]= '4';
            break;
        case 101:
             hex[i]= '5';
            break;
        case 110:
             hex[i]= '6';
            break;
        case 111:
             hex[i]= '7';
            break;
        case 1000:
             hex[i]= '8';
            break;
        case 1001:
             hex[i]= '9';
            break;
        case 1010:
             hex[i]= 'A';
            break;
        case 1011:
             hex[i]= 'B';
            break;
        case 1100:
             hex[i]= 'C';
            break;
        case 1101:
             hex[i]= 'D';
            break;
            case 1110:
             hex[i]= 'E';
            break;
        case 1111:
             hex[i]= 'F';
            break;
				            default:
				                cout<<"--Invalid Input--";
				        }
				        bin=bin/10000;
				        i++;
				    }
				    cout<<"________________________________________________________________________________________________________\n"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"|                                    BINARY TO HEXADECIMAL                                             |"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"________________________________________________________________________________________________________\n\n\n\n\n"<<endl;
				    cout<<"\t\t\t\t\t\t"<<b<<" = ";
				    for(j=i;i>=0 ;i--)    
				{
					cout<<hex[i]; 
				}
				    cout<<"\n\n\n\n\n";
				    
				}
				    //break;
				}  
				    break;
				        default:
				                cout<<"\n--Invalid Input--";
				}
				break;
				    
				}
				
				break;
			case 3:
				 {
				
				int select1;
				
				    cout<<"________________________________________________________________________________________________________\n"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"|                                          FROM HEXADECIMAL                                            |"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"________________________________________________________________________________________________________"<<endl;
				
				
				cout <<" \n 1.BINARY \n 2.DECIMAL \n 3.OCTAL "<<endl;
				
				cin>>select1;
				
				system("CLS");
				
				 switch(select1)
				 {
				 case 1:
				    { 
				    cout<<"________________________________________________________________________________________________________\n"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"|                                    HEXADECIMAL TO BINARY                                             |"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"________________________________________________________________________________________________________"<<endl;
					
				  int i=0;
				    char hexDecNum[10];
				    cout<<"\nENTER THE HEXADECIMAL NUMBER "<<endl;
				    cin>>hexDecNum;
				    system("CLS");
				    cout<<"________________________________________________________________________________________________________\n"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"|                                    HEXADECIMAL TO BINARY                                             |"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"________________________________________________________________________________________________________\n\n\n\n\n"<<endl;
				    cout<<"\t\t\t\t\t\t"<<hexDecNum<<" = ";
				    while(hexDecNum[i])
				    {
				        switch(hexDecNum[i])
				        {
				            case '0':
				                cout<<"0000 ";
				                break;
				            case '1':
				                cout<<"0001 ";
				                break;
				            case '2':
				                cout<<"0010 ";
				                break;
				            case '3':
				                cout<<"0011 ";
				                break;
				            case '4':
				                cout<<"0100 ";
				                break;
				            case '5':
				                cout<<"0101 ";
				                break;
				            case '6':
				                cout<<"0110 ";
				                break;
				            case '7':
				                cout<<"0111 ";
				                break;
				            case '8':
				                cout<<"1000 ";
				                break;
				            case '9':
				                cout<<"1001 ";
				                break;
				            case 'A':
				            case 'a':
				                cout<<"1010 ";
				                break;
				            case 'B':
				            case 'b':
				                cout<<"1011 ";
				                break;
				            case 'C':
				            case 'c':
				                cout<<"1100 ";
				                break;
				            case 'D':
				            case 'd':
				                cout<<"1101 ";
				                break;
				            case 'E':
				            case 'e':
				                cout<<"1110 ";
				                break;
				            case 'F':
				            case 'f':
				                cout<<"1111 ";
				                break;
				            default:
				                cout<<"--Invalid Hex Digit ("<<hexDecNum[i]<<")--";
				        }
				        i++;
				    }
				    cout<<"\n\n\n\n\n";
				    
				}
				    break;
				
				
				 case 2:
				    {  system("CLS");
				    cout<<"________________________________________________________________________________________________________\n"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"|                                      HEXADECIMAL TO DECIMAL                                          |"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"________________________________________________________________________________________________________"<<endl;
					
					 char num[20];
					 int base = 1, temp = 0, i;
				   cout<<"\nENTER THE HEXADECIMAL NUMBER"<<endl;
				   cin>>num;
				   system("CLS");
				    int len = strlen(num); 
					cout<<"________________________________________________________________________________________________________\n"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"|                                      HEXADECIMAL TO DECIMAL                                          |"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"________________________________________________________________________________________________________\n\n\n\n\n"<<endl;
				      cout<<"\t\t\t\t\t "<<num<<" = ";
				   for (i=len-1; i>=0; i--) {
				      if (num[i]>='0' && num[i]<='9') {
				         temp = temp+ (num[i] - 48)*base;
				         base = base * 16;
				      }
				      else if (num[i]>='A' && num[i]<='F') {
				         temp += (num[i] - 55)*base;
				         base = base*16;
				      }
				      
					}
				cout<<temp<<endl;
				    
				    
				      cout<<"\n\n\n\n";
				}
				 
				    break;
				
				
				 case 3:
				   {  				system("CLS");
								    cout<<"________________________________________________________________________________________________________\n"<<endl;
									cout<<"|                                                                                                      |"<<endl;
									cout<<"|                                      HEXADECIMAL TO OCTAL                                            |"<<endl;
									cout<<"|                                                                                                      |"<<endl;
									cout<<"________________________________________________________________________________________________________"<<endl;
									
									 char num[20];
									 int base = 1, temp = 0, i;
								   cout<<"\nENTER THE HEXADECIMAL NUMBER"<<endl;
								   cin>>num;
								   system("CLS");
								    int len = strlen(num); 
									cout<<"________________________________________________________________________________________________________\n"<<endl;
									cout<<"|                                                                                                      |"<<endl;
									cout<<"|                                      HEXADECIMAL TO OCTAL                                            |"<<endl;
									cout<<"|                                                                                                      |"<<endl;
									cout<<"________________________________________________________________________________________________________\n\n\n\n\n"<<endl;
								      cout<<"\t\t\t\t\t "<<num<<" = ";
								   for (i=len-1; i>=0; i--) {
								      if (num[i]>='0' && num[i]<='9') {
								         temp = temp+ (num[i] - 48)*base;
								         base = base * 16;
								      }
								      else if (num[i]>='A' && num[i]<='F') {
								         temp += (num[i] - 55)*base;
								         base = base*16;
								      }
								      
									}
						
									
								int o[10], d,di;     
								    
								//system("CLS");
								d=temp;
								di=d;
								for(i=0; d>0; i++)    
								{    
								o[i]=d%8;    
								d= d/8;  
								}
								     
								for(i=i-1 ;i>=0 ;i--)    
								{
									cout<<o[i]; 
								}
								  cout<<"\n\n\n\n\n";
						
								  
				}  
				    break;
				    default:
				                cout<<"\n--Invalid Input--";
				
				}
				break;
				    
				}
				break;
				
			case 4:
				{
				
				int selct;
				
				    cout<<"________________________________________________________________________________________________________\n"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"|                                            FROM OCTAL                                                |"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"________________________________________________________________________________________________________"<<endl;
				
				
				cout <<" \n 1.BINARY \n 2.DECIMAL \n 3.HEXADECIMAL "<<endl;
				
				cin>>selct;
				
				system("CLS");
				
				 switch(selct)
				 {
				 case 1:
				  
				    { 
				        system("CLS");
				    cout<<"________________________________________________________________________________________________________\n"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"|                                        OCTAL TO BINARY                                               |"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"________________________________________________________________________________________________________"<<endl;
					
				 int i=0;
				    char octNum[10];
				    cout<<"\nEnter the Octal Number "<<endl;
				    cin>>octNum;
				    system("CLS");
				    cout<<"________________________________________________________________________________________________________\n"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"|                                        OCTAL TO BINARY                                               |"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"________________________________________________________________________________________________________\n\n\n\n"<<endl;
				    cout<<"\t\t\t\t\t"<<octNum<<" = ";
				    while(octNum[i])
				    {
				        switch(octNum[i])
				        {
				            case '0':
				                cout<<"000 ";
				                break;
				            case '1':
				                cout<<"001 ";
				                break;
				            case '2':
				                cout<<"010 ";
				                break;
				            case '3':
				                cout<<"011 ";
				                break;
				            case '4':
				                cout<<"100 ";
				                break;
				            case '5':
				                cout<<"101 ";
				                break;
				            case '6':
				                cout<<"110 ";
				                break;
				            case '7':
				                cout<<"111 ";
				                break;
				            default:
				                cout<<"--Invalid octal Digit ("<<octNum[i]<<")--";
				        }
				        i++;
				        
				    }cout<<"\n\n\n\n\n";
				    
				}
				    break;
				    
				
				
				 case 2:
				    {  
				    cout<<"________________________________________________________________________________________________________\n"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"|                                       OCTAL TO DECIMAL                                               |"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"________________________________________________________________________________________________________"<<endl;
					
					int i,bit,on,n,d=0,r,b;
				 	cout<<"\nENTER THE OCTAL NUMBER"<<endl;
				 	cin>>on;
				 	cout<<"\nENTER THE NUMBER OF BITS"<<endl;
				 	cin>>bit;
				 	n=on;
				 	b=bit;
				 	system("CLS");
				 	for (i=0;i<bit;i++)
				 	{
				 		d=d+(n%10*pow(8,i));
				 		n=n/10;
					 }
					cout<<"________________________________________________________________________________________________________\n"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"|                                       OCTAL TO DECIMAL                                               |"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"________________________________________________________________________________________________________\n\n\n\n"<<endl;
				 cout<<"\t\t\t\t\t"<<on<<"="<<d;
				 cout<<"\n\n\n\n";
				 	
				 }
				 
				    break;
				
				
				 case 3:
				   {  
				    cout<<"________________________________________________________________________________________________________\n"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"|                                       OCTAL TO HEXADECIMAL                                           |"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"________________________________________________________________________________________________________"<<endl;
					
					int i,bit,on,n,d=0,r,b;
				 	cout<<"\nENTER THE OCTAL NUMBER"<<endl;
				 	cin>>on;
				 	cout<<"\nENTER THE NUMBER OF BITS"<<endl;
				 	cin>>bit;
				 	n=on;
				 	b=bit;
				 	system("CLS");
				 	for (i=0;i<bit;i++)
				 	{
				 		d=d+(n%10*pow(8,i));
				 		n=n/10;
					 }
					cout<<"________________________________________________________________________________________________________\n"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"|                                      OCTAL TO HEXADECIMAL                                            |"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"________________________________________________________________________________________________________\n\n\n\n"<<endl;
					cout<<"\t\t\t\t\t"<<on<<" = ";
				 
				    
				int h[10],d1,di;     
				d1=d;
				di=d1;
			  
				for(i=0; d1>0; i++)    
				{    
				h[i]=d1%16;    
				d1= d1/16;  
				}    
			
				     
				for(i=i-1 ;i>=0 ;i--)    
				{
				switch(h[i])
				        {
				            case 10:
				                cout<<"A";
				                break;
				            
							case 11:
				                cout<<"B";
				                break;    
				            
				      case 12:
				                cout<<"C";
				                break;
				            
							case 13:
				                cout<<"D";
				                break;
								
							case 14:
				                cout<<"E";
				                break;
							
							case 15:
				                cout<<"F";
				                break;
										    
				            default:                 
				                cout<<h[i];   
								break; 
				}
				}
				cout<<"\n\n\n\n\n";
				
	} 
				    break;
				        default:
				                cout<<"\n--Invalid Input--";
				
				}
				break;
				    
				}
				
				break;
			case 5:
				{
					cout<<"________________________________________________________________________________________________________\n"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"|                                     DECIMAL TO EXCESS-3 CODE                                         |"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"________________________________________________________________________________________________________"<<endl;
					int numb,rem,i,temp,n,j;
					string excess[20];
					cout<<"ENTER THE NUMBER"<<endl;
					cin>>numb;
					system("CLS");
					i=0;
					temp=numb;
					do
					{
						rem=numb%10;
						n=rem+3;
						
									if(n==3)
									{
										excess[i]="0011";
									}
									else if(n==4)
									{
									excess[i]="0100";
									}
									else if(n==5)
									{
										excess[i]="0101";
									}
									else if(n==6)
									{
										excess[i]="0110";
									}
									else if(n==7)
									{
										excess[i]="0111";
									}
									else if(n==8)
									{
										excess[i]="1000";
									}
									else if(n==9)
									{
										excess[i]="1001";
									}
							       else if(n==10)
									{
										excess[i]="1010";
									}
									else if(n==11)
									{
										excess[i]="1011";
									}
									else if(n==12)
									{
										excess[i]="1100";
									}
							
							i++;
							numb=numb/10;		
						
					}while(numb!=0);
					cout<<"________________________________________________________________________________________________________\n"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"|                                     DECIMAL TO EXCESS-3 CODE                                         |"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"________________________________________________________________________________________________________\n \n\n\n"<<endl;
					
				
				cout<<"\t\t\t\t\t"<<temp<<" = ";
				
					for(j=i-1;j>=0;j--)
					{
						cout<<excess[j]<<" ";
					}
					cout<<"\n\n\n\n";
					
				}
				break;
			case 6:
					{
					cout<<"________________________________________________________________________________________________________\n"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"|                                     BINARY TO GRAY CODE                                              |"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"________________________________________________________________________________________________________"<<endl;
					int no_digit,i,numb,gray[20],j=0;

					cout<<"ENTER THE NUMBER"<<endl;
					cin>>numb;
					cout<<"ENTER THE NUMBER OF DIGITS"<<endl;
					cin>>no_digit;
					system("CLS");
					int numb1=numb;
					int numb2=numb;
					i=0;
						cout<<"________________________________________________________________________________________________________\n"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"|                                     BINARY TO GRAY CODE                                              |"<<endl;
					cout<<"|                                                                                                      |"<<endl;
				    cout<<"________________________________________________________________________________________________________\n \n\n\n"<<endl;
					cout<<"\t\t\t\t\t"<<numb<<" = ";
					do{
						
						int n1=numb1;
						int n2=numb2;
						
						int div1=n1/pow(10,no_digit);
						int div2=n2/pow(10,no_digit-1);
						int div=n1/pow(10,no_digit) + n2/pow(10,no_digit-1);
						if(div==0)
						{
							gray[i]=0;
						}
						else if(div==1)
						{
							gray[i]=1;
						}
						else{
							gray[i]=0;
						}
						
						if(numb1>(div1*pow(10,no_digit))){
									numb1=numb1-(div1*pow(10,no_digit));
									}
							else{
										numb1=(div1*pow(10,no_digit))-numb1;
									}
							
							if(numb2>(div2*pow(10,no_digit-1))){
									numb2=numb2-(div2*pow(10,no_digit-1));
									}
							else{
										numb2=(div2*pow(10,no_digit-1))-numb2;
									}
						no_digit--;
						cout<<gray[i];
						i++;
						
						
					}while(no_digit!=0);
						cout<<"\n\n\n\n";
					
				}
				break;	
			case 7:
					{
					cout<<"________________________________________________________________________________________________________\n"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"|                                     DECIMAL TO BCD                                                   |"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"________________________________________________________________________________________________________"<<endl;
					int numb,nd;
					cout<<"ENTER THE DECIMAL NUMBER"<<endl;
					cin>>numb;
					cout<<"ENTER THE NO. OF DIGIT"<<endl;
					cin>>nd;
					system("CLS");
							int n,n1,div;
					cout<<"________________________________________________________________________________________________________\n"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"|                                     DECIMAL TO BCD                                                   |"<<endl;
					cout<<"|                                                                                                      |"<<endl;
				    cout<<"________________________________________________________________________________________________________\n \n\n\n"<<endl;
					cout<<"\t\t\t\t\t"<<numb<<" = ";
							
							do{
								n=numb;
								nd=nd-1;
								div=n/pow(10,nd);
								if(div==1)
								{
									cout<<"0001 ";
								}
								else if (div==2)
								{
									cout<<"0010 ";
								}
								else if (div==3)
								{
									cout<<"0011 ";
								}
								else if (div==4)
								{
									cout<<"0100 ";
								}
								else if (div==5)
								{
									cout<<"0101 ";
								}
								else if (div==6)
								{
									cout<<"0110 ";
								}
								else if (div==7)
								{
									cout<<"0111 ";
								}
								else if (div==8)
								{
									cout<<"1000 ";
								}
								else if (div==9)
								{
									cout<<"1001 ";
								}
								
								
								
								
								if(div==0)
								{
									if(n==0)
									{
										cout<<"0000";
									}
									else if(n==1)
									{
										cout<<" 0001";
									}
									else if(n==2)
									{
										cout<<" 0010";
									}
									else if(n==3)
									{
										cout<<" 0011";
									}
									else if(n==4)
									{
										cout<<" 0100";
									}
									else if(n==5)
									{
										cout<<" 0101";
									}
									else if(n==6)
									{
										cout<<" 0110";
									}
									else if(n==7)
									{
										cout<<" 0111";
									}
									else if(n==8)
									{
										cout<<" 1000";
									}
									else if(n==9)
									{
										cout<<" 1001";
									}
									
									
								}
								numb=numb-(div*pow(10,nd));
							}while(nd!=0);
							cout<<"\n\n\n\n";
						}
				break;
						
				
			}
        }
		
};





class arithmetic{
	protected:
		int select2;
	public:
		int decimal(unsigned int);

		long long binary(int);
		void calculate2()
		{
			system("CLS");
			cout<<"________________________________________________________________________________________________________\n"<<endl;
			cout<<"|                                                                                                      |"<<endl;
			cout<<"|                                  BINARY OPERATION                                                    |"<<endl;
			cout<<"|                                                                                                      |"<<endl;
			cout<<"________________________________________________________________________________________________________"<<endl;
			cout<<" 1.ADDITION \n 2.SUBTRACTION \n 3.MULTIPLICATION \n 4.DIVISION"<<endl;
			cin>>select2;
			system("CLS");
			switch(select2){
				case 1:
					{
				    int bin1,bin2;
				
				    int temp1,temp2,add;
				
				    long long b;
				
				    cout<<"________________________________________________________________________________________________________\n"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"|                                     BINARY ADDITION                                                  |"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"________________________________________________________________________________________________________"<<endl;
				
				
				    cout<<"ENTER THE 1st NUMBER"<<endl;
				
				    cin>>bin1;
				
				    cout<<"ENTER THE 2nd NUMBER"<<endl;
				
				    cin>>bin2;
				
				    system("CLS");
				    cout<<"________________________________________________________________________________________________________\n"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"|                                     BINARY ADDITION                                                  |"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"________________________________________________________________________________________________________\n\n\n\n"<<endl;
					cout<<"\t\t\t\t\t"<<bin1<<" + "<<bin2<<" = ";
				
				    temp1=decimal(bin1);
				
				    temp2=decimal(bin2);
				
				    add=temp1+temp2;
				
				    b=binary(add);
				
				    cout<<b<<endl;
				    cout<<"\n\n\n\n\n";
				
				    }
					break;
				case 2:
					{
					
						unsigned int num1, num2;
						
						int temp1, temp2, sub;
						
						long long b;
						
						    cout<<"________________________________________________________________________________________________________\n"<<endl;
							cout<<"|                                                                                                      |"<<endl;
							cout<<"|                                     BINARY SUBTRACTION                                               |"<<endl;
							cout<<"|                                                                                                      |"<<endl;
							cout<<"________________________________________________________________________________________________________"<<endl;
						
						
						cout << "ENTER THE 1st NUMBER"<<endl;
						
						cin >> num1;
						
						cout << "ENTER THE 2nd NUMBER"<<endl;
						
						cin >> num2;
						
					system("CLS");
					cout<<"________________________________________________________________________________________________________\n"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"|                                     BINARY SUBTRACTION                                               |"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"________________________________________________________________________________________________________\n\n\n\n"<<endl;
					cout<<"\t\t\t\t\t"<<num1<<" - "<<num2<<" = ";
						
						temp1 = decimal(num1);
						
						temp2 = decimal(num2);
						
						if (temp1 < temp2)
						
						cout << "Invalid Input.....";
						
						else
						
						{
						
						sub = temp1 - temp2;
						
						b = binary(sub);
						
						cout<<b;
						
						}
						
						cout<<"\n\n\n\n\n";
			
			
				    }
					break;
				case 3:
					{
				        unsigned int num1, num2;
				
							int temp1, temp2, mul;
							
							long long b;
							
							    cout<<"________________________________________________________________________________________________________\n"<<endl;
								cout<<"|                                                                                                      |"<<endl;
								cout<<"|                                     BINARY MULTIPLICATION                                            |"<<endl;
								cout<<"|                                                                                                      |"<<endl;
								cout<<"________________________________________________________________________________________________________"<<endl;
							
							
							cout << "ENTER THE 1st NUMBER"<<endl;
							
							cin >> num1;
				
							cout << "ENTER THE 2nd NUMBER"<<endl;
							
							cin >> num2;
							
							system("CLS");
					cout<<"________________________________________________________________________________________________________\n"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"|                                     BINARY MULTIPLICATION                                            |"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"________________________________________________________________________________________________________\n\n\n\n"<<endl;
					cout<<"\t\t\t\t\t"<<num1<<" * "<<num2<<" = ";
							
							temp1 = decimal(num1);
							
							temp2 = decimal(num2);
							
							
							
							mul = temp1 * temp2;
							
							b = binary(mul);
							
							cout<< b;
							
							cout <<"\n\n\n\n\n";
							
							
				
				    }
					break;
				case 4:
					 {
				        unsigned int num1, num2;
				
					int temp1, temp2, div;
					
					long long b;
					
					   cout<<"________________________________________________________________________________________________________\n"<<endl;
						cout<<"|                                                                                                      |"<<endl;
						cout<<"|                                     BINARY DIVISION                                                  |"<<endl;
						cout<<"|                                                                                                      |"<<endl;
						cout<<"________________________________________________________________________________________________________"<<endl;
					
					
					cout << "ENTER THE 1st NUMBER"<<endl;
					
					cin >> num1;
					
					cout << "ENTER THE 2nd NUMBER"<<endl;
					
					cin >> num2;
					system("CLS");
					cout<<"________________________________________________________________________________________________________\n"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"|                                     BINARY DIVISION                                                  |"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"________________________________________________________________________________________________________\n\n\n\n"<<endl;
					cout<<"\t\t\t\t\t"<<num1<<" / "<<num2<<" = ";
					
					
					
					temp1 = decimal(num1);
					
					temp2 = decimal(num2);
					
					
					
					div = temp1 / temp2;
					
					b = binary(div);
					
					cout << b;
					
					cout <<"\n\n\n\n\n";
					
				    }
					break;
			}
		}
};








int arithmetic::decimal(unsigned int num)

{

		int rem, decimal = 0, i = 0;
		
		while (num > 0)
		
		{
			
			rem = num % 10;
			
			decimal = decimal + (rem* pow(2, i));
			
			i++;
			
			num /= 10;
		
		}
		
		return decimal;

}

long long arithmetic::binary(int num)

{

		int rem;
		
		long long binary = 0, i = 1;
		
		do
		
		{
		
				rem = num % 2;
				
				binary = binary + (i*rem);
				
				num = num / 2;
				
				i = i * 10;
		
		} while (num>0);
		
		return binary;

}






class complement{
	protected:
		int select3;
	public:
		void calculate3()
		{
			system("CLS");
			cout<<"________________________________________________________________________________________________________"<<endl;
			cout<<"|                                                                                                      |"<<endl;
			cout<<"|                                       COMPLEMENT                                                     |"<<endl;
			cout<<"|                                                                                                      |"<<endl;
			cout<<"________________________________________________________________________________________________________"<<endl;
			cout<<" 1. 1's COMPLEMENT \n 2. 2's COMPLEMENT \n 3. 9's COMPLEMENT \n 4. 10's COMPLEMENT"<<endl;
			cin>>select3;
			system("CLS");
			switch(select3){
				case 1:
					{ system("CLS");
				 	cout<<"_____________________________________________________________________________________________________"<<endl;
					cout<<"|                                                                                                   |"<<endl;
					cout<<"|                                          1s COMPLEMENT                                            |"<<endl;
					cout<<"|                                                                                                   |"<<endl;
					cout<<"_____________________________________________________________________________________________________"<<endl;
					int len,i;//,j;
				 	string bin,ones,temp;
				 	cout<<"ENTER THE BINARY NUMBER"<<endl;
				 	cin>>bin;
				 	system("CLS");
				 	temp=bin;
				 	len=bin.length();
				 	ones.resize(len);
				 	for(i=0;i<len;i++)
				 		{
				
				     		if(bin[i]=='0')
				     		{
				         		ones[i]='1';
				     		}
				     		else
				     		{
				        		ones[i]='0';
				     		}
				 		}
				   	cout<<"________________________________________________________________________________________________________"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"|                                                1s COMPLEMENT                                         |"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"________________________________________________________________________________________________________\n \n\n\n"<<endl;
					
					cout<<"\t\t\t\t\t"<<temp<<" = ";
					cout<<ones<<"";
				  	cout<<"\n\n\n\n";
				
				   	
				}
					break;
				case 2:
					{system("CLS");
					cout<<"________________________________________________________________________________________________________"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"|                                                2s COMPLEMENT                                         |"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"________________________________________________________________________________________________________\n\n\n\n"<<endl;
					int len,i;
				    string bin,twos,temp;
				    bool firstone=false;
				    cout<<"ENTER THE BINARY NUMBER"<<endl;
				    cin>>bin;
				    system("CLS");
				    temp=bin;
				    len=bin.length();
				    twos.resize(len);
				    for (i=(len-1);i>=0;i--)
				    {
				        if(firstone==false)
				        {
				            if(bin[i]=='0')
				            {
				                twos[i]='0';
				            }
				            else
				            {
				               twos[i]='1';
				              firstone='true';
				            }
				        }
				        else
				        {
				        if (bin[i]=='0')
				        {
				            twos[i]='1';
				
				        }
				        else
				            {
				            twos[i]='0';
				            }
				        }
				    }
				    cout<<"________________________________________________________________________________________________________"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"|                                                2s COMPLEMENT                                         |"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"________________________________________________________________________________________________________\n\n\n\n\n"<<endl;
				    cout<<"\t\t\t\t\t"<<temp<<" = ";
					cout<<twos<<"";
				  	cout<<"\n\n\n\n";
				
					//cout<<"2s Complement:"<<twos<<endl;
				    
				}
					break;
				case 3:
					 {
					 	system("CLS");
				   	cout<<"________________________________________________________________________________________________________\n"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"|                                                9s COMPLEMENT                                         |"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"________________________________________________________________________________________________________\n\n\n\n"<<endl;
				    int i,len;
					string dec,temp;
					cout<<"ENTER THE DECIMAL NUMBER"<<endl;
					cin>>dec;
					system("CLS");
					temp=dec;
					len=dec.length();
					for(i=0;i<len;i++)
					{
						if(dec[i]!='.')
						{
							dec[i]='9'-dec[i]+'0';	
						}	
					}
					cout<<"________________________________________________________________________________________________________\n"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"|                                                9s COMPLEMENT                                         |"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"________________________________________________________________________________________________________\n\n\n\n"<<endl;
				    
					cout<<"\t\t\t\t\t"<<temp<<" = ";
					cout<<dec<<"";
				  	cout<<"\n\n\n\n";
					//cout<<"9s Complement:"<<dec<<endl;
					
				}
					break;
				case 4:
					{
					cout<<"________________________________________________________________________________________________________\n"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"|                                                10s COMPLEMENT                                        |"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"________________________________________________________________________________________________________\n\n\n\n"<<endl;
					int i,len=0,temp,comp,num,put;
				    cout<<"ENTER THE DECIMAL NUMBER"<<endl;
				    cin>>num;
				    system("CLS");
				    // Calculating total digits
				    // in num
				    temp = num;
				    put=num;
				    while(1)
				    {
				        len++;
				        num=num/10;
				        if(abs(num)==0)
				            break;       
				    }
				     
				    // restore num
				    num = temp;
				     
				    // calculate 10's complement
				    comp = pow(10,len) - num;
				    cout<<"________________________________________________________________________________________________________\n"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"|                                                10s COMPLEMENT                                        |"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"________________________________________________________________________________________________________\n\n\n\n"<<endl;
					
					cout<<"\t\t\t\t\t"<<put<<" = ";
					cout<<comp<<"";
				  	cout<<"\n\n\n\n";
					//cout<<"10s Complement:"<<comp<<endl; 
					   
				}
					
					break;
			}
		}
};








class k_map{
	protected:
		
	public:
		
			void calculate4(){
			
					system("CLS");
					cout<<"________________________________________________________________________________________________________\n"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"|                                           K-MAP                                                      |"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"________________________________________________________________________________________________________"<<endl;
					int bit,numb,element[100];
					cout<<"ENTER THE NUMBERS OF BITS"<<endl;
					cin>>bit;
					cout<<"INPUT ELEMENTS"<<endl;
					for(int i=0;i<pow(2,bit);i++)
					{
						cout<<"ENTER 1 or 0 FOR m"<<i<<endl;
						cin>>element[i];
					}
					system("CLS");
					if(bit==2){
						cout<<"________________________________________________________________________________________________________\n"<<endl;
						cout<<"|                                                                                                      |"<<endl;
						cout<<"|                                      2-BITS K-MAP                                                    |"<<endl;
						cout<<"|                                                                                                      |"<<endl;
						cout<<"________________________________________________________________________________________________________\n\n\n\n"<<endl;
						cout<<"     |  0  |  1  |\n_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n";
				
						cout<<"  0  |  ";
						if(element[0]==1)
						{
							cout<<"1  |";
						}
						else{
								cout<<"0  |";
						}
						if(element[1]==1)
						{
							cout<<"  1  |";
						}
						else{
								cout<<"  0  |";
						}
						
						if(element[2]==1)
						{
							cout<<"\n_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n"<<"  1  |  1  |";
						}
						else{
								cout<<"\n_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n"<<"  1  |  0  |";
						}
						if(element[3]==1)
						{
							cout<<"  1  |";
						}
						else{
								cout<<"  0  |";
						}
					}
					
					
					
					
					
					
					else if(bit==3)
					{
						cout<<"________________________________________________________________________________________________________\n"<<endl;
						cout<<"|                                                                                                      |"<<endl;
						cout<<"|                                      3-BITS K-MAP                                                    |"<<endl;
						cout<<"|                                                                                                      |"<<endl;
						cout<<"________________________________________________________________________________________________________\n\n\n\n"<<endl;
						cout<<"     |  00 |  01 |  11 |  10 |\n_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n";
				
						cout<<"  0  |  ";
						if(element[0]==1)
						{
							cout<<"1  |";
						}
						else{
								cout<<"0  |";
						}
						if(element[1]==1)
						{
							cout<<"  1  |";
						}
						else{
								cout<<"  0  |";
						}
							if(element[3]==1)
						{
							cout<<"  1  |";
						}
						else{
								cout<<"  0  |";
						}
							if(element[2]==1)
						{
							cout<<"  1  |";
						}
						else{
								cout<<"  0  |";
						}
						
						
						
						if(element[4]==1)
						{
							cout<<"\n_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n"<<"  1  |  1  |";
						}
						else{
								cout<<"\n_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n"<<"  1  |  0  |";
						}
						if(element[5]==1)
						{
							cout<<"  1  |";
						}
						else{
								cout<<"  0  |";
						}
							if(element[7]==1)
						{
							cout<<"  1  |";
						}
						else{
								cout<<"  0  |";
						}
							if(element[6]==1)
						{
							cout<<"  1  |";
						}
						else{
								cout<<"  0  |";
						}
						
					}
					
					
					
					
					
					
						else if(bit==4)
					{
						cout<<"________________________________________________________________________________________________________\n"<<endl;
						cout<<"|                                                                                                      |"<<endl;
						cout<<"|                                      4-BITS K-MAP                                                    |"<<endl;
						cout<<"|                                                                                                      |"<<endl;
						cout<<"________________________________________________________________________________________________________\n\n\n\n"<<endl;
						cout<<"     |  00  |  01  |  11  |  10  |\n_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n";
				
						cout<<"  00  |  ";
						if(element[0]==1)
						{
							cout<<"1   |";
						}
						else{
								cout<<"0   |";
						}
						if(element[1]==1)
						{
							cout<<"  1   |";
						}
						else{
								cout<<"  0   |";
						}
							if(element[3]==1)
						{
							cout<<"  1   |";
						}
						else{
								cout<<"  0   |";
						}
							if(element[2]==1)
						{
							cout<<"  1   |";
						}
						else{
								cout<<"  0   |";
						}
						
						
						
						if(element[4]==1)
						{
							cout<<"\n_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n"<<"  01  |  1   |";
						}
						else{
								cout<<"\n_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n"<<"  01  |  0   |";
						}
						if(element[5]==1)
						{
							cout<<"  1   |";
						}
						else{
								cout<<"  0   |";
						}
							if(element[7]==1)
						{
							cout<<"  1   |";
						}
						else{
								cout<<"  0   |";
						}
							if(element[6]==1)
						{
							cout<<"  1   |";
						}
						else{
								cout<<"  0   |";
						}
								
						
						
						if(element[12]==1)
						{
							cout<<"\n_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n"<<"  11  |  1   |";
						}
						else{
								cout<<"\n_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n"<<"  11  |  0   |";
						}
						if(element[13]==1)
						{
							cout<<"  1   |";
						}
						else{
								cout<<"  0   |";
						}
							if(element[15]==1)
						{
							cout<<"  1   |";
						}
						else{
								cout<<"  0   |";
						}
							if(element[14]==1)
						{
							cout<<"  1   |";
						}
						else{
								cout<<"  0   |";
						}	
						
						
						if(element[8]==1)
						{
							cout<<"\n_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n"<<"  10  |  1   |";
						}
						else{
								cout<<"\n_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n"<<"  10  |  0   |";
						}
						if(element[9]==1)
						{
							cout<<"  1   |";
						}
						else{
								cout<<"  0   |";
						}
							if(element[11]==1)
						{
							cout<<"  1   |";
						}
						else{
								cout<<"  0   |";
						}
							if(element[10]==1)
						{
							cout<<"  1   |";
						}
						else{
								cout<<"  0   |";
						}
						
					
						
					}
					cout<<"\n\n\n\n";
				
				}
		
};




class ascii{
	public:
		void calculate5(){
			
					system("CLS");
						cout<<"________________________________________________________________________________________________________\n"<<endl;
						cout<<"|                                                                                                      |"<<endl;
						cout<<"|                                       ASCII VALUE                                                    |"<<endl;
						cout<<"|                                                                                                      |"<<endl;
						cout<<"________________________________________________________________________________________________________"<<endl;
					char c;
					cout<<"INPUT A CHARACTER"<<endl;
					cin>>c;
					system("CLS");
						cout<<"________________________________________________________________________________________________________\n"<<endl;
						cout<<"|                                                                                                      |"<<endl;
						cout<<"|                                       ASCII VALUE                                                    |"<<endl;
						cout<<"|                                                                                                      |"<<endl;
						cout<<"________________________________________________________________________________________________________\n\n\n\n"<<endl;
					
					cout<<"\t\t\t\t\t"<<c<<" = "<<(int)c<<"\n\n\n\n";
			
		}
			
};





int main()
{
	int choice,ch;
	conversion c;
	arithmetic a;
	complement c1;
	k_map k;
	ascii a1;
	do{
		system("CLS");	
		cout<<"________________________________________________________________________________________________________\n"<<endl;
		cout<<"|                                                                                                      |"<<endl;
		cout<<"|                                          CALCULOGITOR                                                |"<<endl;
		cout<<"|                                                                                                      |"<<endl;
		cout<<"________________________________________________________________________________________________________"<<endl;
		cout<<" 1.CONVERSION \n 2.BINARY OPERATION \n 3.COMPLEMENT \n 4.K-MAP \n 5.ASCII VALUE"<<endl;
		cin>>choice;
		system("CLS");
	
			switch(choice){
				case 1:
					c.calculate1();
					break;
				case 2:
					a.calculate2();
					break;
				case 3:
					c1.calculate3();
					break;
				case 4:
					k.calculate4();
					break;
				case 5:
					a1.calculate5();
					break;
				default:
					system("CLS");	
					cout<<"________________________________________________________________________________________________________\n"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"|                                          CALCULOGITOR                                                |"<<endl;
					cout<<"|                                                                                                      |"<<endl;
					cout<<"________________________________________________________________________________________________________\n\n\n\n"<<endl;
					cout<<"\t\t\t\t\tINVALID!!!!!!!\n\n\n"<<endl;
					break;
				}
			cout<<" 1.MAIN MENU\n 2.EXIT\n";
			cin>>ch;
 		}while(ch==1);
	return 0;
}

