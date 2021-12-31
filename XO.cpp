 //Please use Dev C++ to run this Game
 #include<stdio.h>
 #include<windows.h>
 #include<ctype.h>
 #include<conio.h>
 int menu();
 void result();
 void game();
 void settings();
 int clc(int);
 void cls();
 void ui();
 void reset();
 void layout();
 void insert();
 void about();
 char ch='+';
 bool def=true; 
 int x=0,o=1,start=0;
 char p1[20]="player 1",p2[20]="player 2";
 int arr[3][3]={0,0,0,0,0,0,0,0,0};
 int main(){
 	system("color 5f");
 	if(!menu())
 	return 0;
 }
 int menu(){
 	cls();
 	int choice;
 	char chr[1]={};
 	if(start==0)
 	printf("1. New Game\n");
 	else
 	printf("1. Retry Game\n");
 	printf("2. Settings\n");
 	printf("3. Help!\n");
 	printf("4. About\n");
 	printf("5. Exit\n");
 	chr[0]=getch();
 	choice=atoi(chr);
 	switch(choice){
 		case 1:
 			reset();
 			game();
 			menu();
 			break;
 		case 2:
 			settings();
 			menu();
 			break;
 		case 3:
 			layout();
 			menu();
 			break;
 		case 4:
 			about();
 			menu();
 			break;
 		case 5:
 			return 0;
	 }
 }
 void ui(){
 	int m=12,n=12;
 	for(int i=0;i<=m;i++){
 		for(int j=0;j<=n;j++){
 			if((i==0 || i==4 ||i==8 || i==12) || (j==0 || j==4 || j==8 || j==12))
 			printf("%c",ch);
 			else if(i==2 && j==2){
 				if(arr[0][0]==-1)
 				printf("X");
 				else if(arr[0][0]==1)
 				printf("O");
 				else
 				printf(" ");
			 }
			 else if(i==2 && j==6){
 				if(arr[0][1]==-1)
 				printf("X");
 				else if(arr[0][1]==1)
 				printf("O");
 				else
 				printf(" ");
			 }
			 else if(i==2 && j==10){
 				if(arr[0][2]==-1)
 				printf("X");
 				else if(arr[0][2]==1)
 				printf("O");
 				else
 				printf(" ");
			 }
			 else if(i==6 && j==2){
 				if(arr[1][0]==-1)
 				printf("X");
 				else if(arr[1][0]==1)
 				printf("O");
 				else
 				printf(" ");
			 }
			 else if(i==6 && j==6){
 				if(arr[1][1]==-1)
 				printf("X");
 				else if(arr[1][1]==1)
 				printf("O");
 				else
 				printf(" ");
			 }
			 else if(i==6 && j==10){
 				if(arr[1][2]==-1)
 				printf("X");
 				else if(arr[1][2]==1)
 				printf("O");
 				else
 				printf(" ");
			 }
			 else if(i==10 && j==2){
 				if(arr[2][0]==-1)
 				printf("X");
 				else if(arr[2][0]==1)
 				printf("O");
 				else
 				printf(" ");
			 }
			 else if(i==10 && j==6){
 				if(arr[2][1]==-1)
 				printf("X");
 				else if(arr[2][1]==1)
 				printf("O");
 				else
 				printf(" ");
			 }
			 else if(i==10 && j==10){
 				if(arr[2][2]==-1)
 				printf("X");
 				else if(arr[2][2]==1)
 				printf("O");
 				else
 				printf(" ");
			 }
 			else
 			printf(" ");
		 }
		 printf("\n");
	 }
 }
 void reset(){
 	for(int i=0;i<3;i++)
 	for(int j=0;j<3;j++)
 	arr[i][j]=0;
 }
 void layout(){
 	cls();
 	printf("7 8 9\n");
 	printf("4 5 6\n");
 	printf("1 2 3\n");
 	printf("Use Numpad to play this game\n");
 	printf("corresponding keys represents corrensponding elements in the game\n");
 	printf("Please use Dev C++ to run this code\n");
 	getch();
 }
 void insert(int pos){
 	switch(pos){
 		case 7:if(arr[0][0]==0){ if(x==1 && o==0) {arr[0][0]=1; x=0;o=1;} else if(x==0 && o==1) { arr[0][0]=-1; x=1;o=0;}} break;
 		case 8:if(arr[0][1]==0){ if(x==1 && o==0) {arr[0][1]=1; x=0;o=1;} else if(x==0 && o==1) { arr[0][1]=-1; x=1;o=0;}} break;
 		case 9:if(arr[0][2]==0){ if(x==1 && o==0) {arr[0][2]=1; x=0;o=1;} else if(x==0 && o==1) { arr[0][2]=-1; x=1;o=0;}} break;
 		case 4:if(arr[1][0]==0){ if(x==1 && o==0) {arr[1][0]=1; x=0;o=1;} else if(x==0 && o==1) { arr[1][0]=-1; x=1;o=0;}} break;
 		case 5:if(arr[1][1]==0){ if(x==1 && o==0) {arr[1][1]=1; x=0;o=1;} else if(x==0 && o==1) { arr[1][1]=-1; x=1;o=0;}} break;
 		case 6:if(arr[1][2]==0){ if(x==1 && o==0) {arr[1][2]=1; x=0;o=1;} else if(x==0 && o==1) { arr[1][2]=-1; x=1;o=0;}} break;
 		case 1:if(arr[2][0]==0){ if(x==1 && o==0) {arr[2][0]=1; x=0;o=1;} else if(x==0 && o==1) { arr[2][0]=-1; x=1;o=0;}} break;
 		case 2:if(arr[2][1]==0){ if(x==1 && o==0) {arr[2][1]=1; x=0;o=1;} else if(x==0 && o==1) { arr[2][1]=-1; x=1;o=0;}} break;
 		case 3:if(arr[2][2]==0){ if(x==1 && o==0) {arr[2][2]=1; x=0;o=1;} else if(x==0 && o==1) { arr[2][2]=-1; x=1;o=0;}} break;
	 }
 }
 int clc(){
 	int cnt=0;
 	if(arr[0][0]+arr[0][1]+arr[0][2]==3) return 1;
 	if(arr[0][0]+arr[0][1]+arr[0][2]==-3) return -1;
 	if(arr[1][0]+arr[1][1]+arr[1][2]==3) return 1;
 	if(arr[1][0]+arr[1][1]+arr[1][2]==-3) return -1;
 	if(arr[2][0]+arr[2][1]+arr[2][2]==3) return 1;
 	if(arr[2][0]+arr[2][1]+arr[2][2]==-3) return -1;
 	if(arr[0][0]+arr[1][0]+arr[2][0]==3) return 1;
 	if(arr[0][0]+arr[1][0]+arr[2][0]==-3) return -1;
 	if(arr[0][1]+arr[1][1]+arr[2][1]==3) return 1;
 	if(arr[0][1]+arr[1][1]+arr[2][1]==-3) return -1;
 	if(arr[0][2]+arr[1][2]+arr[2][2]==3) return 1;
 	if(arr[0][2]+arr[1][2]+arr[2][2]==-3) return -1;
 	if(arr[0][0]+arr[1][1]+arr[2][2]==3) return 1;
	if(arr[0][0]+arr[1][1]+arr[2][2]==-3) return -1;
	if(arr[0][2]+arr[1][1]+arr[2][0]==3) return 1;
	if(arr[0][2]+arr[1][1]+arr[2][0]==-3) return -1;
	for(int i=0;i<3;i++)
	for(int j=0;j<3;j++){
		if(arr[i][j]==0)
		cnt++;
	}
	if(cnt==0) return 2;
	return 0;
 }
 void cls(){
 	system("cls");
 }
 void settings(){
 	cls();
 	int choice,chh;
 	char charr,chr[1]={};
 	printf("1. color\n");
	printf("2. borders\n");
	printf("3. Back\n");
	chr[0]=getch();
	choice=atoi(chr);
	switch(choice){
		case 1:
			cls();
			printf("1. color greenish dark blue\n"); //3f
			printf("2. color green\n"); //2f
			printf("3. color red\n"); //4f
			printf("4. color violet\n"); //5f
			printf("5. color cement\n"); //7f
			printf("6. color dark blue\n"); //9f
			chr[0]=getch();
			chh=atoi(chr);
			switch(chh){
				case 1:system("color 3f");break;
				case 2:system("color 2f");break;
				case 3:system("color 4f");break;
				case 4:system("color 5f");break;
				case 5:system("color 7f");break;
				case 6:system("color 9f");break;
			}
			break;
		case 2:
			cls();
			printf("input a border symbol like $\n");
			fflush(stdin);
			scanf("%c",&charr);
			ch=charr;
			break;
		case 3:
			menu();
			break;
	}
 }
void game(){
	char chrr[1]={};
	int pos;
	reset();
	start++;
	cls();
 	while(!clc()){
 		cls();
 		ui();
 		chrr[0]=getch();
 		pos=atoi(chrr);
 		if(pos<10)
 		insert(pos);
	}
	cls();
	ui();
	result();
	getch();
 }
 void result(){
 	int result;
 	result=clc();
 	if(result==2)
 	printf("DRAW");
 	if(result==-1)
 	printf("%s WINS","X");
 	if(result==1)
 	printf("%s WINS","O");
 }
 void about(){
 	cls();
 	printf("This Game was Developed by player_one_Navin\n");
 	printf("Telegram @PlayerOne_Navin\n");
 	getch();
 	menu();
 }
