#include<iostream>
#include<graphics.h>
#include<vector>
#include<stdlib.h>

using namespace std;

vector<int> vec;
char choices;

////////////////////
int i=50;
int j=50;
int sizeafterdeletingnode=0;
bool deletednode=false;
int headn=0;
int x1=300,y1=275,x2=500,y2=375;
int xa1=400,ya1=280,xa2=400,ya2=370;
int xb1=350;
int xc1=500,xc2=550;
///////////////////

class List
{
	public:
		struct node
		{
			int data;
			node *next;
		};
	
	typedef struct node* nodeptr;
	nodeptr head;
	nodeptr temp;
	nodeptr curr;
	
	
	List() 
	{
	head=NULL;
	temp=NULL;
	curr=NULL;
	}
	


	  
	
		
	
	void addnode(int addData);
	void print();
	void sizeoflinklist();
	void printvalues();
	void DeleteLast();
};

void List::sizeoflinklist()
{

	
	
	int counts=0;
	for(int i=0;i<vec.size();i++)
	{
		counts++;
	}
	int num=counts;
	char buffer[16] = {0};
	itoa(num, buffer, 10);
	setcolor(CYAN);
	settextstyle(BOLD_FONT,HORIZ_DIR,3);
	outtextxy(550,550,"size of link list: ");
	setcolor(LIGHTBLUE);
	outtextxy(850,550,buffer);	
}





void List::printvalues()
{
if(head!=NULL)
{
int i=0;
curr =head;

while(curr!=NULL)
{
	
int num=curr->data;
char buffer[16] = {0};
itoa(num, buffer, 10);

	
	settextstyle(BOLD_FONT,HORIZ_DIR,3);
	setcolor(LIGHTBLUE);
	outtextxy(550,500,"link list data: ");
	setcolor(MAGENTA);
	outtextxy(850+i,500,buffer);
	setcolor(YELLOW);	
	curr=curr->next;
	i=i+50;
}
}
}


void List::addnode(int addData)
{
nodeptr n = new node;
n->next=NULL;
n->data=addData;

if(head!=NULL)
{
curr=head;
while(curr->next!=NULL)
{
	curr=curr->next;
}
curr->next=n;
}
else
{
head=n;
}

vec.push_back(addData);
}


void List::DeleteLast()
{
	curr=head;
	temp=head;
	
	if(head==NULL)
	{
		cout<<"Link List is empty!"<<endl;
	}
	
	
	else
	{
	while(curr->next!=NULL)
	{
	temp=curr;
	curr=curr->next;
	}
	temp->next=NULL;
	delete curr;
	}
}	



void List::print()
{
	
if(head==NULL)
{
	cout<<"\nLink list is empty!"<<endl;
}
curr =head;
while(curr!=NULL)
{

	cout<<curr->data<<" -> ";
	curr=curr->next;
}
cout<<"Null ";
cout<<"\n";
}


////////////////////////////////////////////////////////////////////////


class Graphics:public List
{
	private:
		
		
	public:
		
void title()
{
	vector <int> vec;
		
	vec.push_back(BLUE);
	vec.push_back(WHITE);
	vec.push_back(CYAN);
	vec.push_back(RED);
	vec.push_back(MAGENTA);
	vec.push_back(BROWN);
	vec.push_back(LIGHTGRAY);
	vec.push_back(YELLOW);
	vec.push_back(GREEN);

	for(int i=0;i<vec.size();i++)
	{
	
		setcolor(vec[i]);
		settextstyle(BOLD_FONT,HORIZ_DIR,6);
		outtextxy(600,70,"Linked List");
		delay(50);
		
	}
	
	setcolor(YELLOW);
	settextstyle(COMPLEX_FONT,HORIZ_DIR,2);
	
}

void menu()
{
	cout<<"......Link List Datastructure......";
	cout<<"\n";

	
	cout<<"\nPress 'a' to add node.";
	cout<<"\nPress 'b' to print node data.";
	cout<<"\nPress 'c' to delete node.";
	cout<<"\nPress 'd' to find size.";
	cout<<"\nPress 'e' to exit.";
	cout<<"\n";
	cout<<"\nEnter your choice: ";
	cin>>choices;
	
}



	void addnodegraphics(int d)
	{
		
		if(headn!=0)
		{
				int num=d;
				char buffer[16] = {0};
				itoa(num, buffer, 10);

				x1=x1+250;
				x2=x2+250;

				rectangle(x1,y1,x2,y2); //rectangle
				xa1=xa2=x1+100;
				line(xa1,ya1,xa2,ya2); //partation

				xc1=xc1+250;
				xc2=xc2+250;

				line(xc1,320,xc2,320); //link

				xb1=xb1+250;

				settextstyle(BOLD_FONT,HORIZ_DIR,3);
				outtextxy(xb1,310,buffer);

				headn++;
		}
		
		else
		{
				int num=d;
				char buffer[16] = {0};
				itoa(num, buffer, 10);


				rectangle(300,275,500,375); //rectangle
				line(400,280,400,370); //partation
				line(500,320,550,320); //link
				settextstyle(BOLD_FONT,HORIZ_DIR,3);

				outtextxy(350,310,buffer);
				rectangle(200,300,250,350);
				settextstyle(BOLD_FONT,HORIZ_DIR,1);
				outtextxy(202,313,"Head");

				headn++;
		}
				outtextxy(xc2,310,"|");
				
				setcolor(GREEN);
				settextstyle(BOLD_FONT,HORIZ_DIR,3);
				outtextxy(100,500+i,"Node added.");		
				i=i+50;	
				setcolor(YELLOW);
	}		
	
	void reprintgraphics()
	{
				int x11=300,y11=275,x22=500,y22=375;//rectangle
				int xa11=400,ya11=280,xa22=400,ya22=370;//partation
				int xc11=500,xc22=550,xb11=350;//link
				
		
				int l=0;
								
					
				for(int i=0;i<vec.size();i++)
				{
						
				
				int num=vec[i];
				char buffer[16] = {0};
				itoa(num, buffer, 10);

				setcolor(YELLOW);					
				rectangle(x11,y11,x22,y22); //rectangle
				line(xa11,ya11,xa22,ya22); //partation
				line(xc11,320,xc22,320); //link
				settextstyle(BOLD_FONT,HORIZ_DIR,3);
				outtextxy(xb11,310,buffer);

				if(l==0)
				{
				
				setcolor(YELLOW);
				rectangle(200,300,250,350);
				settextstyle(BOLD_FONT,HORIZ_DIR,1);
				outtextxy(202,313,"Head");
				l++;
				}
				outtextxy(xc22,310,"|");
				
				//////////////////////////
				x11=x11+250;
				x22=x22+250;
				xa11=xa22=x11+100;
				xc11=xc11+250;
				xc22=xc22+250;
				xb11=xb11+250;				
				//////////////////////////
				
			}
		
	}
	
	void reprintgraphics2(int sizeafterdeletingnode )
	
	{
				int x11=300,y11=275,x22=500,y22=375;//rectangle
				int xa11=400,ya11=280,xa22=400,ya22=370;//partation
				int xc11=500,xc22=550,xb11=350;//link
		
				int l=0;
									
				for(int i=0;i<vec.size()-sizeafterdeletingnode;i++)
				{
						
				
				int num=vec[i];
				char buffer[16] = {0};
				itoa(num, buffer, 10);

				setcolor(YELLOW);					
				rectangle(x11,y11,x22,y22); //rectangle
				line(xa11,ya11,xa22,ya22); //partation
				line(xc11,320,xc22,320); //link
				settextstyle(BOLD_FONT,HORIZ_DIR,3);
				outtextxy(xb11,310,buffer);

				if(l==0)
				{
				
				setcolor(YELLOW);
				rectangle(200,300,250,350);
				settextstyle(BOLD_FONT,HORIZ_DIR,1);
				outtextxy(202,313,"Head");
				l++;
				}
				outtextxy(xc22,310,"|");
				
				//////////////////////////
				x11=x11+250;
				x22=x22+250;
				xa11=xa22=x11+100;
				xc11=xc11+250;
				xc22=xc22+250;
				xb11=xb11+250;				
				//////////////////////////
				
			}
		
	}

	
	
	void printgraphics()
	
	{
				if(headn!=0)
				{
						
				for(int i=1;i<=xa1-363;i=i+20)
				{
				setcolor(CYAN);
				rectangle(385+i,180,350+i,220);
				settextstyle(BOLD_FONT,HORIZ_DIR,1);
				outtextxy(366+i,188,"C");
				setcolor(YELLOW);			
				delay(30);
							
				cleardevice();
				
				for(int j=0;j<1;j++)
				{
				if(deletednode==false)
				{
				
				reprintgraphics();	
				}
				
				if(deletednode==true)
				{
				reprintgraphics2(0);	
				}
				}
				title();
				
				}
									
				
				}
				
	}	
	
	void deletenodegraphics()
	{
				for(int i=1;i<=xa1-363;i=i+20)
				{
				
				setcolor(GREEN);
				rectangle(385+i,180,350+i,220);
				settextstyle(BOLD_FONT,HORIZ_DIR,1);
				outtextxy(366+i,188,"D");
				
				delay(30);			
				cleardevice();
				
				for(int j=0;j<1;j++)
				{
					
				reprintgraphics();	
									
				}

				title();
				
				}
				
				setcolor(GREEN);
				rectangle(385+xa1-363,180,350+xa1-363,220);
				settextstyle(BOLD_FONT,HORIZ_DIR,1);
				outtextxy(366+xa1-363,188,"D");
				
				setcolor(RED);
				int dx1=x1-10;
				int dy1=y1-15;
				int dx2=x2+10;
				int dy2=y2+15;
				sizeafterdeletingnode++;
				deletednode=true;
				///////////////////
					
				

				x1=x1-250;
				x2=x2-250;
				
				xa1=xa1-100;
				xa2=xa2-100;
				
				xc1=xc1-250;
				xc2=xc2-250;
				
				xb1=xb1-250;
				
				//////////////////
				
				rectangle(dx1,dy1,dx2,dy2); //290,260,510,390
				delay(300);
				cleardevice();
				
				title();
				reprintgraphics2(sizeafterdeletingnode);
				setcolor(RED);
				settextstyle(BOLD_FONT,HORIZ_DIR,3);
				outtextxy(200,500+j,"Node deleted.");		
				j=j+50;	
				setcolor(YELLOW);
				vec.pop_back();
				sizeafterdeletingnode=0;
	}
	void sizegraphics()
{
				if(headn!=0)
				{
				
		
				for(int i=1;i<=xa1-363;i=i+20)
				{
				setcolor(LIGHTBLUE);
				rectangle(385+i,180,350+i,220);
				settextstyle(BOLD_FONT,HORIZ_DIR,1);
				outtextxy(366+i,188,"S");
							
				delay(30);
							
				cleardevice();
				
				for(int j=0;j<1;j++)
				{
			
				reprintgraphics();	
				
				
			
				}
				title();
				
				}
									
				
				}
				
				
				
				sizeoflinklist();
				setcolor(YELLOW);	
			
}


};


int main()
{
List l;
Graphics g;
initwindow(1536,800,"Link List Visualization",-3,-3);
g.title();
///////////////////////////
while(1)
	{
	system("CLS");
	g.menu();
	
	switch(choices)
	{
		case'a':
			int i;
			cout<<"\n\nEnter value: ";
			cin>>i;
			l.addnode(i);
			g.addnodegraphics(i);
			
			break;
			
		case'b':
		
			l.print();
			g.printgraphics();
			l.printvalues();

			break;
			
		case'c':
			
			l.DeleteLast();
			g.deletenodegraphics();
			break;
		
		case'd':
			g.sizegraphics();
			break;
			
		case'e':
			cout<<"\n\nYou exited. ";
			exit(0);
			break;
		
		default:
			cout<<"\nYou pressed wrong key.";
			
	}
}

//////////////////////////

getch();
closegraph();
return 0;



}
