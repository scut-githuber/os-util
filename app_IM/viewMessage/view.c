/*查看聊天记录
input:username
output:mess
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
