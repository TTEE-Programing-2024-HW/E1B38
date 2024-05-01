#include<stdio.h>
#include<stdlib.h>
void Triangle(char ch);
void mult(int n);
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
	
	int a=3,p;                  //設定整數變數 ,密碼限制輸入次數 
	
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
	 
		getchar();			// 消耗換行符
		system("cls");      //按任一鍵清除
		printf("~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n");   //個人風格表格 
		printf("------------------------------\n");
		printf("||a. 畫出直角三角形         ||\n");
		printf("------------------------------\n");
		printf("||b. 顯示乘法表             ||\n");
		printf("------------------------------\n");
		printf("||c. 結束                   ||\n");
		printf("------------------------------\n");
		printf("*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n");
		
		char choice;
            printf("請輸入選項 (a-c): ");
            scanf("%c", &choice); // 讀取選項
			getchar();
            switch (choice) {
                case 'a':
                	system("cls");
                	char z;
                    printf("請輸入一個(a-n)的字母:"); // 印出直角三角形
                    scanf("%c",&z);
                    getchar(); // 消耗換行符
                    while (z < 'a' || z > 'n') {
        			printf("錯誤，輸入字元不在 'a' 至 'n' 區間\n");
        			printf("請重新輸入一個(a-n)的字母:");
        			scanf("%c",&z); // 再次讀取輸入
        			getchar(); // 消耗換行符
    				}
          	      	Triangle(z);
          	      	break;
                case 'b':
                    system("cls");
                    int n,num;
                    printf("請輸入一個1至9的整數n：");
                    scanf("%d", &num);
                    getchar();
                    while(num<1 || num>9) {
        			printf("錯誤，請輸入1至9之間的整數\n");
        			scanf("%d", &num);
        			getchar();
    				}
                    mult(num); // 顯示乘法表
                    break;
                case 'c':
                    printf("Continue? (y/n): "); //是否繼續 
                    char k;
                	scanf("%c",&k);
                	getchar();
                	if (k=='y' || k=='Y') {
                            break;            // 回到選項輸入
                        } else if (k=='n' || k=='N') {
                            return 0;         // 結束程式
                        } else {
                            printf("錯誤：請輸入 'y' 或 'n'\n");
                        }
                        break;
                default:
                    printf("錯誤: 輸入字元不在 'a' 至 'c' 區間\n");
                }

		
	
	
	system("pause");
	return 0;
	}
	
void Triangle(char ch){   //三角形的函數 
    int i,j;
    int rows = ch-'a'+1; // 輸入字元計算要印出幾行

    for (i=0; i<rows;i++){
        // 印出空格
        for (j = rows-i-1;j>0;j--){
            printf(" ");
        }
        // 印出字母
        for (j=0;j<=i;j++){
            printf("%c", 'a' + j);
        }
        printf("\n");
    }
}

// 顯示乘法表的函式
void mult(int n) {
    printf("乘法表：\n");          //產生乘法表
    int i,j;
    for(i=1;i<=n;++i) {
        for (j=1;j<=n;++j) {
            printf("%d*%d =%-3d",i,j,i*j);   //%-3d使得排版整齊
        }
        printf("\n");
    }
}
