/*查看聊天记录
Functionname:view
Input:用户名
Output:聊天信息
Description:用于查看用户的聊天记录
*/
int view(char username[MAX_NAME]) {
	char mess[MAX_BUF];
	FILE *cfptr;//文件指针
	if ((cfptr = fopen(username, "r")) == NULL) {
		printf("无法找到记录文件\n");
		fclose(cfptr);
		return 0;
	} else {
		while (!feof(cfptr)) {

			fscanf(cfptr, "%s", mess);

			if ((strcmp(username," ") != 0)) {
				printf("\t %s", mess);
			}
			printf("\n");
		}
	}

	fclose(cfptr);
	return 0;
}
