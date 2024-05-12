#include<stdio.h>
#include<stdlib.h>
void displayseat();
void setseat();
void log1seat();
void log2seat();
char seat[9][9];
int main(void){
	setseat();
	printf("~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n");   //個人風格畫面 
	printf("||名子:李維濬               ||\n");
	printf("------------------------------\n");
	printf("||班級:E1B                  ||\n");
	printf("------------------------------\n");
	printf("||座號:38                   ||\n");
	printf("------------------------------\n");
	printf("||興趣:跳舞、打籃球、踢足球 ||\n");
	printf("------------------------------\n");
	printf("||最喜歡科目:數學           ||\n");
	printf("------------------------------\n");
	printf("||居住地:桃園               ||\n");
	printf("------------------------------\n");
	printf("||想學的:魔術、寫程式、投資 ||\n");
	printf("------------------------------\n");
	printf("!!    以上是我的個人資料    !!\n"); 
	printf("*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n");
	system("pause");        //暫停程式 按任一鍵繼續 
	system("cls");          //按任一鍵清除 
	
	int a=3,p,i,j;
    int con=1;                  //設定整數變數 ,密碼限制輸入次數 
	
	printf("請輸入4個數字的密碼:");
	scanf("%d",&p);  //輸入密碼
		while (p!=2024 && a>1) {	// 密碼驗證
        printf("密碼錯誤!!你還有%d次機會\n",--a);
        printf("請重新輸入4位數的密碼: ");
        scanf("%d", &p);
        } 
        if (p!=2024) {              // 驗證失敗
        printf("密碼錯誤! 程式結束.\n");
        return 1;
    }
	 while(con){
	 	getchar();			// 消耗換行符
		system("cls");      //按任一鍵清除
		printf("~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n");   //個人風格表格 
		printf("------------------------------\n");
		printf("||a. 顯示座位             ||\n");
		printf("------------------------------\n");
		printf("||b. 自動安排座位           ||\n");
		printf("------------------------------\n");
		printf("||c. 手動選擇座位           ||\n");
		printf("------------------------------\n");
		printf("||d. 結束                   ||\n");
		printf("------------------------------\n");
		printf("*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n");
		
		char choice;
            printf("請輸入選項 (a-d): ");
            scanf("%c", &choice); // 讀取選項
			getchar();
            switch (choice) {
                case 'a':
                	system("cls");
                	displayseat();
          	      	break;
                case 'b':
                    system("cls");
                    int s;
        			printf("請輸入所需座位數量 (1~4): ");
        			scanf("%d", &s);
        			getchar();  //消耗換行符
        			displayseat();
        			if(s>=1 && s<= 3){
        				int start_row = rand()%9; // 隨機行 
                    	int start_col = rand()%(9-s+1); //隨機列 
                   		for(i=0;i<s;i++) {
                   		if(seat[start_row][start_col + i] !='*'){
                        seat[start_row][start_col + i] = '@'; 
                    	}
                   	}
    				}else if(s == 4){
               			int start_row = rand() % (9 - 1 + 1) + 1; //隨機行(1-8) 
                		int start_col = rand() % (9 - 3 + 1); //隨機列(1-5) 
                		for (i=0;i<4;i++) {
                		if(seat[start_row][start_col + i] !='*'){
                    	seat[start_row][start_col + i] = '@'; //連續4個@ 
                    }
                }
					}
    					printf("更新後的座位表：\n");
    					displayseat();
    					char faction;
    					printf("是否滿意座位？(y/n):");
    					scanf(" %c", &faction); // 加一個空格以忽略之前的換行符
    					getchar();              // 消耗換行符
    					if (faction== 'y' || faction=='Y'){
    						log1seat();
        					system("cls");
							break; 
    						}else if (faction== 'n' || faction=='N'){
    						log2seat();
        					system("cls");
							break;
    						}else{
    							printf("請輸入'y'或'n'\n");
    							continue;// 回到循還開始
							}
                case 'c':
                    
                case 'd':
                	printf("Continue? (y/n): "); //是否繼續 
                    char k;
                	scanf("%c",&k);
                	getchar();
                	if (k=='y' || k=='Y') {
                            con=1;         // 回到選項輸入
                        } else if (k=='n' || k=='N') {
                           con=0;         // 結束程式
                        } else {
                            while(k!='n' || k!='y'){
							printf("錯誤：請輸入 'y' 或 'n'\n");
							scanf("%c",&k);
                			getchar();
						}
                            con=1;
                        }
                        break;
                default:
                    printf("錯誤: 輸入字元不在 'a' 至 'd' 區間\n");
                }
            }
	system("pause");
	return 0;
	}
	
	
void displayseat(){
	int i,j;
	printf("\\123456789\n");    //頂部的座位號碼
    for (i=0;i<9;i++){
        printf("%d",9-i);       //打印座位表的行號
        for (j=0;j<9;j++){
            printf("%c",seat[i][j]); //打印座位狀態
        }
        printf("\n"); // 換行
    }
}
void setseat(){
	//初始化座位表，所有座位都是空的
	int i,j,k;
    for(i=0;i<9;i++) {
        for(j=0;j<9;j++){
                seat[i][j] = '-';
            }
        }
    // 隨機將10個座位標記為已預訂
    srand((unsigned int)time(NULL));    //設置rand()函數的隨機種子為當前時間的秒數，以便在程序運行時生成不同的隨機數序列。
	int mark=0;               //time(NULL) 函數返回自協調世界時間1970年1月1日00:00:00開始的秒數。因為時間總是在變化，所以它通常被用作隨機種子 
	while (mark<10){ 
    int row=rand() % 9;
    int col=rand() % 9;
    if(seat[row][col]!='*'){
    	seat[row][col] = '*';
    	mark++;
    	}
	} 
}

void log1seat(){
	int i,j;
	for(i=0;i<9;i++) {
        for(j=0;j<9;j++){
        	if(seat[i][j]=='@'){
        		seat[i][j]='*';
       		}	
    	}
	}
}
void log2seat(){
	int i,j;
	for(i=0;i<9;i++) {
        for(j=0;j<9;j++){
        	if(seat[i][j]=='@'){
        		seat[i][j]='-';
        	}
   		}
	}
}

