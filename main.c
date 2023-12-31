int serworker(Node *worker)
{
    char serNum[20], sername[20], serjob[20], sereducation[20], sersalarysta[20], sersalaryend[20];
    int serchoose, numsta, numend, sersalarynum;
    Node *p = worker->next;
    if (p == NULL)
    {
        printf("目前没有资料\n");
    }
    else
    {
        printf("通过职工编号查询：  1\n");
        printf("通过职工姓名查询：  2\n");
        printf("通过职工工资范围查询： 3\n");
        printf("通过职工职位查询：   4\n");
        printf("通过职工学历查询：   5\n");
        printf("请输入对应数字\n");
        printf("*********************************************\n");
        scanf("%d", &serchoose);
        if (serchoose == 1)
        {
            int num = 0;
            printf("请输入要查询的职工编号：\n");
            scanf("%s", serNum); // 第一更改点
            while (p != NULL)
                ;
            {
                if (strcmp(p->worker.name, sername) == 0)
                {
                    num++;
                    if (num == 1)
                    {
                        printf("*********************************************************************\n");
                        printf("编号\t姓名拼音\t姓名\t民族\t性别\t出生年月\t工作年月\t学历\t职位\t地址\t电话\t工资\n");
                    }
                    printf("%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\n", p->worker.num, p->worker.namepin, p->worker.name, p->worker.nation, p->worker.sex, p->worker.birth, p->worker.workday, p->worker.education, p->worker.position, p->worker.addr, p->worker.phone, p->worker.salary);
                }
                else if (p->next == NULL && num == 0) // 第二更改点
                {
                    printf("未找到该职工\n");
                }

                p = p->next;
            }
        }
        else if (serchoose == 3)
        {
            int num = 0;
            printf("请输入要查询的职工工资范围： \n");
            printf("起始工资：");
            scanf("%d", &sersalarysta);
            printf("工资上限：");
            scanf("%d", &sersalaryend);
            numsta = *(int *)sersalarysta;
            numend = *(int *)sersalaryend;
            while (p != NULL)
            {
                sersalarynum = atoi(p->worker.salary);
                if (sersalarynum >= numsta && sersalarynum <= numend)
                {
                    num++;
                    if (num == 1)
                    {
                        printf("****************************************************************************\n");
                        printf("编号\t姓名拼音\t姓名\t民族\t性别\t出生年月\t工作年月\t学历\t职位\t地址\t电话\t工资\n");
                    }
                    printf("%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\n", p->worker.num, p->worker.namepin, p->worker.name, p->worker.nation, p->worker.sex, p->worker.birth, p->worker.workday, p->worker.education, p->worker.position, p->worker.addr, p->worker.phone, p->worker.salary);
                }
                else
                {
                    if (p->next == NULL && num == 0)
                    {
                        printf("该范围内没有职工\n");
                    }
                }
                p = p->next;
            }
        }
        else if (serchoose == 4)
        {
            int num = 0;
            printf("请输入要查询的职工职务：\n");
            scanf("%s", &serjob);
            while (p != NULL)
            {
                if (strcmp(p->worker.position, serjob) == 0)
                {
                    num++;
                    if (num == 1)
                    {
                        printf("****************************************************************\n");
                        printf("编号\t姓名拼音\t姓名\t民族\t性别\t出生年月\t工作年月\t学历\t职位\t地址\t电话\t工资\n");
                    }
                    printf("%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\n", p->worker.num, p->worker.namepin, p->worker.name, p->worker.nation, p->worker.sex, p->worker.birth, p->worker.workday, p->worker.education, p->worker.position, p->worker.addr, p->worker.phone, p->worker.salary);
                }
                else
                {
                    if (p->next == NULL && num == 0)
                    {
                        printf("未找到该职工\n");
                    }
                }
                p = p->next;
            }
        }
        else if (serchoose == 5)
        {
            int num = 0;
            printf("请输入要查询的职工学历：\n");
            scanf("%s", &sereducation);
            while (p != NULL)
            {
                if (strcmp(p->worker.education, sereducation) == 0)
                {
                    num++;
                    if (num == 1)
                    {
                        printf("********************************************************************\n");
                        printf("编号\t姓名拼音\t姓名\t民族\t性别\t出生年月\t工作年月\t学历\t职位\t地址\t电话\t工资\n");
                    }
                    printf("%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\n", p->worker.num, p->worker.namepin, p->worker.name, p->worker.nation, p->worker.sex, p->worker.birth, p->worker.workday, p->worker.education, p->worker.position, p->worker.addr, p->worker.phone, p->worker.salary);
                }
                else
                {
                    if (p->next == NULL && num == 0)
                    {
                        printf("未找到该职工\n");
                    }
                }
                p = p->next;
            }
        }
        else
        {
            printf("输入出错，请重新选择\n");
            serworker(worker);
        }
    }
}
 