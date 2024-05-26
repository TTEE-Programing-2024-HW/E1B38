#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#define max_st 10
#define min_st 5
#define max_name 50
#define max_id 6

struct st{
    char name[max_name];
    int id;
    int math;
    int physics;
    int english;
};

void inputst(int n,struct st students[]) {
	int i;
    for(i=0;i<n;++i) {
        printf("輸入第%d位學生的資料:\n", i + 1);
        // 輸入學生姓名
        printf("姓名: ");
        while (scanf("%s",students[i].name)!=1) {
            printf("輸入錯誤，請重新輸入姓名: ");
            while (getchar() != '\n');  // 清除緩衝區
        }
        // 輸入學號
        printf("學號(6位整數): ");
        while (scanf("%d", &students[i].id)!=1 || students[i].id<100000 || students[i].id>999999) {
            printf("輸入錯誤，請重新輸入學號 (6位整數): ");
            while (getchar() != '\n');  // 清除緩衝區
        }
        // 輸入數學成績
        printf("數學成績 (0~100): ");
        while (scanf("%d", &students[i].math) != 1 || students[i].math < 0 || students[i].math > 100) {
            printf("輸入錯誤，請重新輸入數學成績 (0~100): ");
            while (getchar() != '\n');  // 清除緩衝區
        }
        // 輸入物理成績
        printf("物理成績 (0~100): ");
        while (scanf("%d", &students[i].physics) != 1 || students[i].physics < 0 || students[i].physics > 100) {
            printf("輸入錯誤，請重新輸入物理成績 (0~100): ");
            while (getchar() != '\n');  // 清除緩衝區
        }
        // 輸入英文成績
        printf("英文成績 (0~100): ");
        while (scanf("%d", &students[i].english) != 1 || students[i].english < 0 || students[i].english > 100) {
            printf("輸入錯誤，請重新輸入英文成績 (0~100): ");
            while (getchar() != '\n');  // 清除緩衝區
        }
        printf("\n");
    }
}
	
int main(void){
	
	struct st students[max_st];
    int stcount = 0;
    
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
		printf("||a.輸入學生成績及資訊      ||\n");
		printf("------------------------------\n");
		printf("||b.顯示資訊                ||\n");
		printf("------------------------------\n");
		printf("||c.手動搜尋學生資訊        ||\n");
		printf("------------------------------\n");
		printf("||d.平均成績高低順序        ||\n");
		printf("------------------------------\n");
		printf("||e.結束                    ||\n");
		printf("------------------------------\n");
		printf("*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n");
		
		char choice;
            printf("請輸入選項 (a-d): ");
            scanf("%c", &choice); // 讀取選項
			getchar();
            switch (choice) {
                case 'a':
                	system("cls");
        	      	printf("請輸入學生人數 (5~10): ");
        	      	while (scanf("%d",&stcount)!=1 || stcount < min_st||stcount > max_st) {
                    printf("輸入錯誤，請重新輸入學生人數 (5~10): ");
                    while (getchar() != '\n');
                }
                inputst(stcount,students);
                break;
                
                case 'b':
                	system("cls");
                
                case 'c':
                	system("cls");
                
                case 'd':
                	system("cls");
                
                case 'e':
                	printf("Continue? (y/n): "); //是否繼續 
                    char k;
                	scanf("%c",&k);
                	getchar();
                	if (k=='y' || k=='Y') {
                            con=1;         // 回到選項輸入
                        } else if (k=='n' || k=='N') {
                           con=0;         // 結束程式
                        } else {
                            while(k!='n' && k!='y'){
							printf("錯誤：請輸入 'y' 或 'n'\n");
							scanf("%c",&k);
                			getchar();
						}
                            con=1;
                        }
                        break;
                default:
                    printf("錯誤: 輸入字元不在 'a' 至 'e' 區間\n");
                }
            }
	system("pause");
	return 0;
	}

