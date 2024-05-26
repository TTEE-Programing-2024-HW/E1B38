#include<stdio.h>
#include<stdlib.h>
#include <time.h>
void displayseat();
void setseat();
void log1seat();
void log2seat();
int parse_seat_choice(const char* seat_choice, int* row, int* col);
int validate_seat_selection(int row, int col);
char seat[9][9];
int main(void){
	setseat();
	printf("~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n");   //�ӤH����e�� 
	printf("||�W�l:������               ||\n");
	printf("------------------------------\n");
	printf("||�Z��:E1B                  ||\n");
	printf("------------------------------\n");
	printf("||�y��:38                   ||\n");
	printf("------------------------------\n");
	printf("||����:���R�B���x�y�B�𨬲y ||\n");
	printf("------------------------------\n");
	printf("||�̳��w���:�ƾ�           ||\n");
	printf("------------------------------\n");
	printf("||�~��a:���               ||\n");
	printf("------------------------------\n");
	printf("||�Q�Ǫ�:�]�N�B�g�{���B��� ||\n");
	printf("------------------------------\n");
	printf("!!    �H�W�O�ڪ��ӤH���    !!\n"); 
	printf("*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n");
	system("pause");        //�Ȱ��{�� �����@���~�� 
	system("cls");          //�����@��M�� 
	
	int a=3,p,i,j;
    int con=1;                  //�]�w����ܼ� ,�K�X�����J���� 
	
	printf("�п�J4�ӼƦr���K�X:");
	scanf("%d",&p);  //��J�K�X
		while (p!=2024 && a>1) {	// �K�X����
        printf("�K�X���~!!�A�٦�%d�����|\n",--a);
        printf("�Э��s��J4��ƪ��K�X: ");
        scanf("%d", &p);
        } 
        if (p!=2024) {              // ���ҥ���
        printf("�K�X���~! �{������.\n");
        return 1;
    }
	 while(con){
	 	getchar();			// ���Ӵ����
		system("cls");      //�����@��M��
		printf("~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n");   //�ӤH������ 
		printf("------------------------------\n");
		printf("||a. ��ܮy��             ||\n");
		printf("------------------------------\n");
		printf("||b. �۰ʦw�Ʈy��           ||\n");
		printf("------------------------------\n");
		printf("||c. ��ʿ�ܮy��           ||\n");
		printf("------------------------------\n");
		printf("||d. ����                   ||\n");
		printf("------------------------------\n");
		printf("*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n");
		
		char choice;
            printf("�п�J�ﶵ (a-d): ");
            scanf("%c", &choice); // Ū���ﶵ
			getchar();
            switch (choice) {
                case 'a':
                	system("cls");
                	displayseat();
          	      	break;
                case 'b':
                    system("cls");
                    int s;
        			printf("�п�J�һݮy��ƶq (1~4): ");
        			scanf("%d", &s);
        			getchar();  //���Ӵ����
        			displayseat();
        			if(s>=1 && s<= 3){
        				int start_row = rand()%9; // �H����(0-7)
                    	int start_col = rand()%(9-s+1); //�H���C 
                   		for(i=0;i<s;i++) {
                   		if(seat[start_row][start_col + i] !='*'){
                        seat[start_row][start_col + i] = '@'; 
                    	}
                   	}
    				}else if(s == 4){
    					int o;
    					printf("�п�ܤ@�ثe���C�U��Ӯy��(1)/�s��4��(2):");
    					scanf("%d",&o);
    					if(o==1){
               			int start_row = rand() % 7;//�H����(0-6)
               			int start_col = rand() % 8;//�H���C(0-7) 
               			for (i=start_row;i<start_row+2;i++) {
                    	for (j=start_col;j<start_col+2;j++){
                        seat[i][j] = '@';
                    		}
						}
					}
    					if(o==2){
               			int start_row = rand() % 8; //�H����(0-7) 
                		int start_col = rand() % 6; //�H���C(0-5) 
                		for (i=0;i<4;i++) {
                		if(seat[start_row][start_col + i] !='*'){
                    	seat[start_row][start_col + i] = '@'; //�s��4��@ 
                    		}
                		}
					}
				}
    					printf("��s�᪺�y���G\n");
    					displayseat();
    					char faction;
    					printf("�O�_���N�y��H(y/n):");
    					scanf(" %c", &faction); // �[�@�ӪŮ�H�������e�������
    					getchar();              // ���Ӵ����
    					if (faction== 'y' || faction=='Y'){
    						log1seat();
        					system("cls");
							break; 
    						}else if (faction== 'n' || faction=='N'){
    						log2seat();
        					system("cls");
							break;
    						}else{
    							printf("�п�J'y'��'n'\n");
    							continue;// �^��`�ٶ}�l
							}
                case 'c':{
                    printf("�гv�@��J�y���ܡA�p1-2�B2-9�N��[�C1,��2]��[�C2,��9]��Ӯy��C\n");
                    printf("��ʿ�ܮy��:");
                    char seat_choice[5];
                    scanf("%s", seat_choice);
                    getchar();
                    int row, col,chosen_seats = 0;
                    if (parse_seat_choice(seat_choice, &row, &col)) {
                    	if (validate_seat_selection(row, col)) {
            				seat[row-1][col-1] = '@';
            				chosen_seats++;
       						}
    				}
    				printf("��s�Z���y���G\n");
    				displayseat();
    				log1seat();
                	break;
                }
                case 'd':
                	printf("Continue? (y/n): "); //�O�_�~�� 
                    char k;
                	scanf("%c",&k);
                	getchar();
                	if (k=='y' || k=='Y') {
                            con=1;         // �^��ﶵ��J
                        } else if (k=='n' || k=='N') {
                           con=0;         // �����{��
                        } else {
                            while(k!='n' && k!='y'){
							printf("���~�G�п�J 'y' �� 'n'\n");
							scanf("%c",&k);
                			getchar();
						}
                            con=1;
                        }
                        break;
                default:
                    printf("���~: ��J�r�����b 'a' �� 'd' �϶�\n");
                }
            }
	system("pause");
	return 0;
	}
	
	
void displayseat(){
	int i,j;
	printf("\\123456789\n");    //�������y�츹�X
    for (i=0;i<9;i++){
        printf("%d",i+1);       //���L�y����渹
        for (j=0;j<9;j++){
            printf("%c",seat[i][j]); //���L�y�쪬�A
        }
        printf("\n"); // ����
    }
}
void setseat(){
	//��l�Ʈy���A�Ҧ��y�쳣�O�Ū�
	int i,j,k;
    for(i=0;i<9;i++) {
        for(j=0;j<9;j++){
                seat[i][j] = '-';
            }
        }
    // �H���N10�Ӯy��аO���w�w�q
    srand((unsigned int)time(NULL));    //�]�mrand()��ƪ��H���ؤl����e�ɶ�����ơA�H�K�b�{�ǹB��ɥͦ����P���H���ƧǦC�C
	int mark=0;               //time(NULL) ��ƪ�^�ۨ�ե@�ɮɶ�1970�~1��1��00:00:00�}�l����ơC�]���ɶ��`�O�b�ܤơA�ҥH���q�`�Q�Χ@�H���ؤl 
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

int parse_seat_choice(const char* seat_choice, int* row, int* col) {
    // �p�G�y���ܪ��榡�����̡A��^ 0
    if (sscanf(seat_choice, "%d-%d", row, col) != 2) {         //sscanf��ƱN�r������ӥ���ƭȤ��O�s��row�Mcol���V�����s��m��
        printf("���~�G�Ы��Ӯ榡��J�y���ܡA�p1-2�B2-9�C\n");
        return 0;
    }
    // �p�G�y���ܶW�X�d��A��^ 0
    if (*row < 1 || *row > 9 || *col < 1 || *col > 9) {
        printf("���~�G�y���ܶW�X�d��C\n");
        return 0;
    }
    return 1;    // �y���ܦ��\
    
}

	 int validate_seat_selection(int row, int col) {
	 	if (seat[row-1][col-1] != '-') {
        printf("���~�G�y��w�g�Q��ܡC\n");
        return 0;
    	}
    	return 1; // �y���ܦ���
}
