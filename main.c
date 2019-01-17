#include <stdio.h>
#include <math.h>
struct point
{
    int x;
    int y;
};

int main()
{
    struct point arr[100];
    int index = 0;

    printf("欢迎进入专车管理系统\n");

    while (1)
    {
        printf("1--添加车辆位置\n");
        printf("2--删除最后一个车辆位置\n");
        printf("3--显示所有车辆位置\n");
        printf("4--返回离我最近的车辆\n");
        printf("5--退出\n");
        printf("请选择相应功能\n");
        int code;
        scanf("%d", &code);

        if (code == 1)
        {
            printf("请输入车辆位置x坐标与y坐标\n");
            int x;
            int y;
            scanf("%d", &x);
            scanf("%d", &y);
            arr[index].x = x;
            arr[index].y = y;
            index++;
            printf("添加成功，点击回车继续\n");
            char a;
            scanf("%c", &a);
            scanf("%c", &a);
        }
        if (code == 2)
        {
            index--;
            printf("删除成功，点击回车继续\n");
            char a;
            scanf("%c", &a);
            scanf("%c", &a);
        }
        if (code == 3)
        {
            printf("所有位置信息如下\n");

            for (int i = 0; i < index; i++)
            {
                printf("第%d个位置坐标为(%d,%d)\n", i + 1, arr[i].x, arr[i].y);
            }
            printf("点击回车继续\n");
            char a;
            scanf("%c", &a);
            scanf("%c", &a);
        }
        if (code == 4)
        {
           printf("请输入您的位置x坐标与y坐标：\n");
           int x;
           int y;
           scanf("%d",&x);
           scanf("%d",&y);
           double min=10000;
           int ID=0;
           
           for(int i = 0; i < index; i++)
           {
               int dx=x-arr[i].x;
               int dy=y-arr[i].y;
               double l=sqrt(dx*dx+dy*dy);
            //    printf("第%d个车辆与您的距离为%lf\n",i+1,l);
            
            if (min>l) {
                min=l;
                ID=i+1;
            }
                      

           }
            printf("第%d个车辆离您最近，最近距离为%lf\n",ID,min); 
            printf("点击回车继续\n");
            char a;
            scanf("%c",&a);
            scanf("%c",&a);
        
        }
        if (code == 5)
        {
            printf("点击回车，退出系统\n");
            break;
        }
    }

    return 0;
}