#include<stdio.h>
#include<stdlib.h>
void displayseat();
void setseat();
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
        				int start_row = rand()%9; // �H���� 
                    	int start_col = rand()%(9-s+1); //�H���C 
                   		for(i=0;i<s;i++) {
                   		if(seat[start_row][start_col + i] !='*'){
                        seat[start_row][start_col + i] = '@'; 
                    	}
                   	}
    				}else if(s == 4){
               			int start_row = rand() % (9 - 1 + 1) + 1; //�H����(1-8) 
                		int start_col = rand() % (9 - 3 + 1); //�H���C(1-5) 
                		for (i=0;i<4;i++) {
                		if(seat[start_row][start_col + i] !='*'){
                    	seat[start_row][start_col + i] = '@'; //�s��4��@ 
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
        					system("cls");
							break; 
    						}else if (faction== 'n' || faction=='N'){
        					system("cls");
							break;
    						}else{
    							printf("�п�J'y'��'n'\n");
    							continue;// �^��`�ٶ}�l
							}
                case 'c':
                    
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
                            while(k!='n' || k!='y'){
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
        printf("%d",9-i);       //���L�y����渹
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
            seat[i][j]='-';
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

