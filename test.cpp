#include<stdio.h>;
#include<stdlib.h>;
struct d{
	int x;//系数 
	int e;//次方
	struct d *next; 
};
struct d *creat( ){
	struct d *head,*p1,*p2;
	int len=sizeof(struct d);
	p1=(struct d*)(malloc)(len);
	head=NULL;
	printf("如果退出,系数请输入0\n");
	scanf("%d",&p1->x);
	scanf("%d",&p1->e);
	int n=1; 
	while(p1->x!=0){
		if(n==1)head=p1;
		n++;
		p2->next=p1;
		p2=p1;
		p1=(struct d*)(malloc)(len);
		scanf("%d",&p1->x);
		scanf("%d",&p1->e);
	}
	p2->next=NULL;
	return head;
}
struct d* jiajian(struct d *pa,struct d *pb){
	struct d *p,*q; 
	struct d *pre;
	pre=pa;
	p=pa;
	q=pb;
	int x;
	while(p!=NULL&&q!=NULL){
		if(p->e < q->e){
			pre=p;
			p=p->next;
		}
		if(p->e == q->e){
			if(x!=0){
			x=p->x + q->x;
			pre=p;
			}
			else{
			p=pre->next;
			q=q->next;	
			}
		}
		if(p->e > q->e){
			//u=q->next;
			q->next=p;
			pre->next=q;
			pre=q;
			//q=u;
		}	
	}
	if(q!=NULL){
		pre->next=q;
	}
	return pa;
}
int main()
{
	struct d *head1,*head2;
	head1=creat();
	head2=creat();
	printf("%d\n",head1->e);
	printf("%d\n",head1->next->e);
	printf("ok\n");
	struct d *head;
	head=jiajian(head1,head2);
	printf("ok\n");
	struct d *p;
	p=head;
	while(p!=NULL){
		printf("%dx%d+",p->x,p->e);
		p=p->next;
	}
}
