#include<stdio.h>
#include<stdlib.h>

int main(void){
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
	
	int a=3,p;
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
		printf("||a. 可用的座位             ||\n");
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
                	
          	      	break;
                case 'b':
                    system("cls");
                    
                    break;
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
	



