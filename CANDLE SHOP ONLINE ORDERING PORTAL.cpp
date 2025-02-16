#include<iostream>
using namespace std;

	class candle{
		private:	
		              int wax;
		              string waxc;
		              int scented;
	              	int scent;
	              	string scentc;
	              	int candle;
	              	string candlec;
		              string address;
		              string packaging;
		              double price;
		              double cost;
		              double del=200.00;
		public:
			void addresss(){
				cout<<"Do you want simple or gift packaging ??"<<endl;
			               cin>>packaging;
			               system("cls");
			               while(packaging!="gift"&&packaging!="simple"){
			               	cout<<"invalid input!!!"<<endl;
			               	cout<<"Do you want simple or gift packaging ??"<<endl;
			               cin>>packaging;
			               system("cls");
				 }
				if(packaging=="gift"){
					price = 100.0;
					cin.ignore();
					cout<<"Enter your address : ";
					getline(cin,address);
					system("cls");
				}
				else if(packaging=="simple"){
					cin.ignore();
					price=0.0;
				               cout<<"Enter your address : ";
					 getline(cin,address);
					 system("cls");
				}
			}
			void candlechoice(){
				switch(candle){
					case 1:cost = 600;
					candlec="Peacefull Aura";
					break;
					case 2:cost = 1540;
					candlec="Lover's Bliss";
					break;
					case 3:cost = 1500;
					candlec="Mountain Mist";
					break;	
					case 4:cost = 1200;
					candlec="Rose Radiant";
					break;
					case 5:price = 1000;
					candlec="Sweet Embrace";
					break;
					case 6:cost = 900;
					candlec="Desert Bloom";
					break;	
				}
			}
	                           void banner(){
	                            	cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_--_-_-_-_-_-_-"<<endl
	                           	                  <<"-                                                -"<<endl
	                             	    <<"-            WELLCOME TO CANDLE BLISS :)         -"<<endl
	                           	                  <<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_--_-_-_-_-_-_-"<<endl<<endl; 
	                                        }
	                            void candleorder(){
	                            	cout<<"            -_-_-_-_-_-_-_-_-_-_-_-_-_-"<<endl
	                           	                  <<"            -                         -"<<endl
	                           	                  <<"            -   Scented/Non-Scented   -"<<endl
	                           	                  <<"            -_-_-_-_-_-_-_-_-_-_-_-_-_-"<<endl
	                           	                  <<"            -                         -"<<endl
	                           	                  <<"            -     1. Scented          -"<<endl
                                                            <<"            -     2. Non-Scented      -"<<endl
                                                            <<"            ---------------------------"<<endl;
                                                        cin>>scented;
                                                        system("cls");
                                                        while(scented<1||scented>2){
                                                        	      cout<<"invalid Choice !!!"<<endl;
                                                        	      cout<<"            -_-_-_-_-_-_-_-_-_-_-_-_-_-"<<endl
	                           	                                      <<"            -                         -"<<endl
	                           	                                      <<"            -   Scented/Non-Scented   -"<<endl
	                           	                                      <<"            -_-_-_-_-_-_-_-_-_-_-_-_-_-"<<endl
	                           	                                      <<"            -                         -"<<endl
	                           	                                      <<"            -     1. Scented          -"<<endl
                                                                                <<"            -     2. Non-Scented      -"<<endl
                                                                                <<"            ---------------------------"<<endl;
                                                                             cin>>scented;
                                                                             system("cls");
				}
				if(scented==1){
					cout<<"            -_-_-_-_-_-_-_-_-_-_-_-"<<endl
	                           	                                <<"            -                     -"<<endl
	                           	                                <<"            -     Select Scent    -"<<endl
	                           	                                <<"            -_-_-_-_-_-_-_-_-_-_-_-"<<endl
	                           	                                <<"            -                     -"<<endl
	                           	                                <<"            -     1. Lavender     -"<<endl
                                                                          <<"            -     2. Jasmine      -"<<endl
                                                                          <<"            -     3. Vanilla      -"<<endl
                                                                          <<"            -     4. Rose         -"<<endl
                                                                          <<"            -----------------------"<<endl;
                                                                      cin>>scent;
                                                                      system("cls");
                                                                      while(scent<1||scent>4){
                                                                      	cout<<"Invalid Choice !!!"<<endl;
                                                                                    cout<<"            -_-_-_-_-_-_-_-_-_-_-_-"<<endl
	                           	                                              <<"            -                     -"<<endl
	                            	                                <<"            -     Select Scent    -"<<endl
	                            	                                <<"            -_-_-_-_-_-_-_-_-_-_-_-"<<endl
	                            	                                <<"            -                     -"<<endl
	                            	                                <<"            -     1. Lavender     -"<<endl
                                                                                        <<"            -     2. Jasmine      -"<<endl
                                                                                        <<"            -     3. Mint         -"<<endl
                                                                                        <<"            -     4. Rose         -"<<endl
                                                                                        <<"            -----------------------"<<endl;
                                                                      cin>>scent;
                                                                      system("cls");
					}
					switch(scent){
						case 1:
							scentc="Lavender";
					                            cout<<"            -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-"<<endl
                         	                           	                                              <<"            -                                           -"<<endl
	                                           	                                <<"            -    Candles Available for Scent LAVENDER   -"<<endl
	                                           	                                <<"            -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-"<<endl
	                                           	                                <<"            -                                           -"<<endl
	                                            	                                <<"            -           1. Peacefull Aura               -"<<endl
                                                                                                      <<"            -           2. Lover's Light                -"<<endl
                                                                                                      <<"            -           3. Mountain Mist                -"<<endl
                                                                                                      <<"            -           4. Rose Radiant                 -"<<endl
                                                                                                      <<"            -           5. Sweet Embrace                -"<<endl
                                                                                                      <<"            -           6. Desert Bloom                -"<<endl
                                                                                                      <<"            ---------------------------------------------"<<endl;
                                                                                                  cin>>candle;
                                                                                                  system("cls");
                                                                                                  while(candle>6||candle<1){
                                                                                                  	cout<<"Invalid choice !!!"<<endl;
                                                                                                  		scentc="Lavender";
					                            cout<<"            -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-"<<endl
                         	                           	                                              <<"            -                                           -"<<endl
	                                           	                                <<"            -    Candles Available for Scent LAVENDER   -"<<endl
	                                           	                                <<"            -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-"<<endl
	                                           	                                <<"            -                                           -"<<endl
	                                            	                                <<"            -           1. Peacefull Aura               -"<<endl
                                                                                                      <<"            -           2. Lover's Light                -"<<endl
                                                                                                      <<"            -           3. Mountain Mist                -"<<endl
                                                                                                      <<"            -           4. Rose Radiant                 -"<<endl
                                                                                                      <<"            -           5. Sweet Embrace                -"<<endl
                                                                                                      <<"            -           6. Desert Bloom                -"<<endl
                                                                                                      <<"            ---------------------------------------------"<<endl;
                                                                                                  cin>>candle;
                                                                                                  system("cls");
							}
                                                                                                  break;
                                                                                    case 2:
                                                                                    	scentc="Jasmine";
                                                                                                  cout<<"            -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-"<<endl
                         	                           	                                              <<"            -                                           -"<<endl
	                                           	                                <<"            -    Candles Available for Scent JASMINE    -"<<endl
	                                           	                                <<"            -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-"<<endl
	                                           	                                <<"            -                                           -"<<endl
	                                            	                                <<"            -           1. Peacefull Aura               -"<<endl
                                                                                                      <<"            -           2. Lover's Light                -"<<endl
                                                                                                      <<"            -           3. Mountain Mist                -"<<endl
                                                                                                      <<"            -           4. Rose Radiant                 -"<<endl
                                                                                                      <<"            -           5. Sweet Embrace                -"<<endl
                                                                                                      <<"            -           6. Desert Bloom                -"<<endl
                                                                                                      <<"            ---------------------------------------------"<<endl;
                                                                                                  cin>>candle;
                                                                                                  system("cls");
                                                                                                   while(candle>6||candle<1){
                                                                                                  	cout<<"Invalid choice !!!"<<endl;
                                                                                                  	scentc="Jasmine";
                                                                                                  cout<<"            -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-"<<endl
                         	                           	                                              <<"            -                                           -"<<endl
	                                           	                                <<"            -    Candles Available for Scent JASMINE    -"<<endl
	                                           	                                <<"            -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-"<<endl
	                                           	                                <<"            -                                           -"<<endl
	                                            	                                <<"            -           1. Peacefull Aura               -"<<endl
                                                                                                      <<"            -           2. Lover's Light                -"<<endl
                                                                                                      <<"            -           3. Mountain Mist                -"<<endl
                                                                                                      <<"            -           4. Rose Radiant                 -"<<endl
                                                                                                      <<"            -           5. Sweet Embrace                -"<<endl
                                                                                                      <<"            -           6. Desert Bloom                -"<<endl
                                                                                                      <<"            ---------------------------------------------"<<endl;	
                                                                                                  cin>>candle;
                                                                                                  system("cls");
                                                                                                  while(candle>6||candle<1){
                                                                                                  	cout<<"Invalid choice !!!"<<endl;
                                                                                                  		scentc="Jasmine";
                                                                                                  cout<<"            -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-"<<endl
                         	                           	                                              <<"            -                                           -"<<endl
	                                           	                                <<"            -    Candles Available for Scent JASMINE    -"<<endl
	                                           	                                <<"            -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-"<<endl
	                                           	                                <<"            -                                           -"<<endl
	                                            	                                <<"            -           1. Peacefull Aura               -"<<endl
                                                                                                      <<"            -           2. Lover's Light                -"<<endl
                                                                                                      <<"            -           3. Mountain Mist                -"<<endl
                                                                                                      <<"            -           4. Rose Radiant                 -"<<endl
                                                                                                      <<"            -           5. Sweet Embrace                -"<<endl
                                                                                                      <<"            -           6. Desert Bloom                -"<<endl
                                                                                                      <<"            ---------------------------------------------"<<endl;	
                                                                                                  cin>>candle;
                                                                                                  system("cls");}
                                                                                                  break;

						case 3:
							scentc="Mint";
					                            cout<<"            -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-"<<endl
                         	                           	                                              <<"            -                                       -"<<endl
	                                           	                                <<"            -    Candles Available for Scent MINT   -"<<endl
	                                           	                                <<"            -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-"<<endl
	                                           	                                <<"            -                                       -"<<endl
	                                            	                                <<"            -           1. Peacefull Aura           -"<<endl                                        
                                                                                                      <<"            -           2. Lover's Light            -"<<endl
                                                                                                      <<"            -           3. Mountain Mist            -"<<endl
                                                                                                      <<"            -           4. Rose Radiant             -"<<endl
                                                                                                      <<"            -           5. Sweet Embrace            -"<<endl
                                                                                                      <<"            -           6. Desert Bloom            -"<<endl
                                                                                                      <<"            -----------------------------------------"<<endl;
                                                                                                  cin>>candle;
                                                                                                  system("cls");
                                                                                                  while(candle>6||candle<1){
                                                                                                  	cout<<"Invalid choice !!!"<<endl;
                                                                                                  		scentc="Mint";
					                            cout<<"            -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-"<<endl
                         	                           	                                              <<"            -                                       -"<<endl
	                                           	                                <<"            -    Candles Available for Scent MINT   -"<<endl
	                                           	                                <<"            -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-"<<endl
	                                           	                                <<"            -                                       -"<<endl
	                                            	                                <<"            -           1. Peacefull Aura           -"<<endl                                        
                                                                                                      <<"            -           2. Lover's Light            -"<<endl
                                                                                                      <<"            -           3. Mountain Mist            -"<<endl
                                                                                                      <<"            -           4. Rose Radiant             -"<<endl
                                                                                                      <<"            -           5. Sweet Embrace            -"<<endl
                                                                                                      <<"            -           6. Desert Bloom            -"<<endl
                                                                                                      <<"            -----------------------------------------"<<endl;
                                                                                                  cin>>candle;
                                                                                                  system("cls");}
                                                                                                  break;

						case 4:
							scentc="Rose";
					                            cout<<"            -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-"<<endl
                         	                           	                                              <<"            -                                         -"<<endl
	                                           	                                <<"            -    Candles Available for Scent ROSE     -"<<endl
	                                           	                                <<"            -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-"<<endl
	                                           	                                <<"            -                                         -"<<endl
	                                            	                                <<"            -           1. Peacefull Aura             -"<<endl
                                                                                                      <<"            -           2. Lover's Light              -"<<endl
                                                                                                      <<"            -           3. Mountain Mist              -"<<endl
                                                                                                      <<"            -           4. Rose Radiant               -"<<endl
                                                                                                      <<"            -           5. Sweet Embrace              -"<<endl
                                                                                                      <<"            -           6. DeserBloom                -"<<endl
                                                                                                      <<"            -------------------------------------------"<<endl;
                                                                                                  cin>>candle;
                                                                                                  system("cls");
                                                                                                  while(candle>6||candle<1){
                                                                                                  	cout<<"Invalid choice !!!"<<endl;
                                                                                                  		scentc="Rose";
					                            cout<<"            -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-"<<endl
                         	                           	                                              <<"            -                                         -"<<endl
	                                           	                                <<"            -    Candles Available for Scent ROSE     -"<<endl
	                                           	                                <<"            -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-"<<endl
	                                           	                                <<"            -                                         -"<<endl
	                                            	                                <<"            -           1. Peacefull Aura             -"<<endl
                                                                                                      <<"            -           2. Lover's Light              -"<<endl
                                                                                                      <<"            -           3. Mountain Mist              -"<<endl
                                                                                                      <<"            -           4. Rose Radiant               -"<<endl
                                                                                                      <<"            -           5. Sweet Embrace              -"<<endl
                                                                                                      <<"            -           6. DeserBloom                -"<<endl
                                                                                                      <<"            -------------------------------------------"<<endl;
                                                                                                  cin>>candle;
                                                                                                  system("cls");}
                                                                                                  break;}
     
						        
					}
					
				}
			else if(scented==2){
				         scentc="None";
				         cout<<"            -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-"<<endl
                         	                                         <<"            -                                         -"<<endl
                              	                           <<"            -    Candles Available for Scent ROSE     -"<<endl
	                                                       <<"            -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-"<<endl
	                                                       <<"            -                                         -"<<endl
	                                                       <<"            -           1. Peacefull Aura             -"<<endl
                                                                     <<"            -           2. Lover's Light              -"<<endl
                                                                     <<"            -           3. Mountain Mist              -"<<endl
                                                                     <<"            -           4. Rose Radiant               -"<<endl
                                                                     <<"            -           5. Sweet Embrace              -"<<endl
                                                                     <<"            -           6. DeserBloom                -"<<endl
                                                                     <<"            -------------------------------------------"<<endl;
                                                                  cin>>candle;
                                                                  system("cls");
			}
			}
	                           	     
	                           	void order(){
	                                          cout<<"            -_-_-_-_-_-_-_-_-_-_-_-"<<endl
	                           	                  <<"            -                     -"<<endl
	                           	                  <<"            -   Select Wax Type   -"<<endl
	                           	                  <<"            -_-_-_-_-_-_-_-_-_-_-_-"<<endl
	                           	                  <<"            -                     -"<<endl
	                           	                  <<"            -   1. Paraffin wax   -"<<endl
                                                            <<"            -   2. Bees Wax       -"<<endl
                                                            <<"            -   3. Soy Wax        -"<<endl
                                                            <<"            -   4. Gel Wax        -"<<endl
                                                            <<"            -----------------------"<<endl;
                                                        cin>>wax;
	                           	              system("cls");
	                              	while (wax < 1 || wax > 4) {
                                                                                    cout<<"Invalid choice. Please choose between 1 to 4." << endl;
                                                                                    cout<<"            -_-_-_-_-_-_-_-_-_-_-_-"<<endl
	                           	                                              <<"            -                     -"<<endl
	                           	                                              <<"            -   Select Wax Type   -"<<endl
	                           	                                              <<"            -_-_-_-_-_-_-_-_-_-_-_-"<<endl
	                           	                                              <<"            -                     -"<<endl
	                           	                                              <<"            -   1. Paraffin wax   -"<<endl
                                                                                        <<"            -   2. Bees Wax       -"<<endl
                                                                                        <<"            -   3. Soy Wax        -"<<endl
                                                                                        <<"            -   4. Gel Wax        -"<<endl
                                                                                        <<"            -----------------------"<<endl;
                                                                                    cin>>wax;
                                                                                    system("cls");
                                                                                    }
                                         switch(wax){
                                         	case 1:
                                         		waxc="Paraffin Wax";
                                         		break;
                                         	case 2:
                                         		waxc="Bees Wax";
                                         		break;
                                         	case 3:
                                         		waxc="soy Wax";
                                         		break;
                                         	case 4:
                                         		waxc="Gel Wax";
                                         		break;
		                         }
	                                          }
	                            void ordersummary(){
	                                     cout<<endl<<"--------------------------------"<<endl
                                                             <<"         ORDER SUMMARY   "<<endl
                                                             <<"--------------------------------"<<endl
                                                             <<" Candle Name      : "<<candlec<<endl
                                                             <<" Wax Type         : "<<waxc<<endl
                                                             <<" Scent            : "<<scentc<<endl
                                                             <<" Packaging        : "<<packaging<<endl
                                                             <<" Delivery Address : "<<address<<endl
                                                             <<"--------------------------------"<<endl
                                                             <<"        BILL SUMMARY"<<endl
                                                             <<"--------------------------------"<<endl
                                                             <<"   Candle cost     |  "<<"Rs."<<cost<<endl
                                                             <<"   Packaging       |  "<<"Rs."<<price<<endl
                                                             <<"   Delivery Fee    |  "<<"Rs."<<del<<endl
                                                             <<"   Total Cost      |  "<<"Rs."<<cost+price+del<<endl
                                                             <<"Thank you for shopping with Candle Bliss! :)"<<endl;
			}
	};
int main(){
	
	candle one;
	one.banner();
	one.order();
	one.candleorder();
	one.candlechoice();
	one.addresss();
	one.ordersummary();	

return 0;	
}
	
	
	
	
	
	

