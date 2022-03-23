#include <graphics.h>
#include<bits/stdc++.h>

using namespace std;

class data
{
public:
    void toll_data(int car_number,int tk)
    {
        ofstream f;
        f.open("toll_data.txt",ios::out|ios::app);
        f<<car_number<< "                   "<<tk<<endl;
        f.close();
    }
};

int main()
{
    data save;///toll_data class object

    jump: ///it for again toll count

    initwindow(1200,700);
    setfillstyle(SOLID_FILL,7);
    bar(0,0,1200,700);


    setcolor(YELLOW);
    setbkcolor(7);
    outtextxy(250, 10,"This project create by MD Nasir Uddin ,ID:18ICTCSE055");
    outtextxy(250, 30,"Bangabandhu Sheikh Mujibur Rahman Science & Technology University, Gopalganj");
    rectangle(250, 50, 950, 140);
    //create button
    rectangle(20, 20, 200, 100);
    rectangle(20, 110, 200, 190);
    rectangle(20, 200, 200, 280);
    rectangle(20, 290, 200, 370);
    //create right button
    rectangle(1000, 20, 1190, 100);
    rectangle(1000, 110, 1190, 190);
    rectangle(1000, 200, 1190, 280);
    rectangle(1000, 290, 1190, 370);
    //create end button
    rectangle(500, 145, 700, 190);
    //vehicle name left side
    int a,b,c,d,e,f,g,h,k,l,m,n,o,q,r,s,t,u,v,w,x,y,z;
    a = (20 + 200)/2 - textwidth("Motor bike") / 2;
    b = (20 + 100) / 2 - textheight("A") / 2;
    c = (20 + 200)/2 - textwidth("Car") / 2;
    d = (110 + 190) / 2 - textheight("A") / 2;
    e = (20 + 200)/2 - textwidth("Mini bus") / 2;
    f = (200 + 280) / 2 - textheight("A") / 2;
    g = (20 + 200)/2 - textwidth("Big bus") / 2;
    h = (290 + 370) / 2 - textheight("A") / 2;
    //vehicle name left side
    k = (1000 + 1190)/2 - textwidth("Mini truck") / 2;
    l = (20 + 100) / 2 - textheight("A") / 2;
    m = (1000 + 1190)/2 - textwidth("Medium truck") / 2;
    n = (110 + 190) / 2 - textheight("A") / 2;
    o = (1000 + 1190)/2 - textwidth("Big truck") / 2;
    w = (200 + 280) / 2 - textheight("A") / 2;
    q = (1000 + 1190)/2 - textwidth("Cargo") / 2;
    r = (290 + 370) / 2 - textheight("A") / 2;
    //End button text
    s = (500 + 700)/2 - textwidth("End toll count") / 2;
    t = (145 + 190) / 2 - textheight("A") / 2;
    ///start button text
    int sx =(500+700)/2 - textwidth("Start toll count")/2;
    int sy = (200 + 245) / 2 - textheight("A") / 2;

    ///Next button for data
    int dx = (500+700)/2 - textwidth("NEXT")/2;
    int dy = (255 + 300) / 2 - textheight("A") / 2;
    int value = 0;
    //user introduction
    setcolor(GREEN);
    u = (250 + 950)/2 - textwidth("*******************padma bridge toll management system**************") / 2;
    outtextxy(u,55,"*******************padma bridge toll management system**************");
    outtextxy(255,75,"Instruction for toll management employ");
    outtextxy(255,95,"1. just click right and left button for count vehicle");
    outtextxy(255,115, "2. After click @End toll count button@ after counting");
    outtextxy(255,145,"1. Motor bike = 105 tk");
    outtextxy(255,165,"2. Car = 750 tk");
    outtextxy(255,185,"3. Mini bus = 2025 tk");
    outtextxy(255,205,"4. Big bus = 2379 tk");
    outtextxy(255,225,"5. Mini truck = 1620 tk");
    outtextxy(255,245,"6. Medium truck = 2100 tk");
    outtextxy(255,265,"7. Big truck = 2775 tk");
    outtextxy(255,285,"8. Cargo = 3000 tk");



    //click button
    setcolor(YELLOW);
    int button_color1=0,button_color2=0,button_color3=0,button_color4=0;
    int button_color5=0,button_color6=0,button_color7=0,button_color8=0;
    int car1=0,car2=0,car3=0,car4=0,car5=0,car6=0,car7=0,car8=0;
    int tk1=0,tk2=0,tk3=0,tk4=0,tk5=0,tk6=0,tk7=0,tk8=0;
    int total_vehicle_number=0;
    int total_tk=0;
    bool flag1 = false,flag2 = false,flag3 = false,flag4 = false,flag5 = false,flag6 = false,flag7 = false,flag8 = false,flag9 = false;
    bool flag10=false,flag11=false;

    while(true)
    {
        POINT p;
        GetCursorPos(&p);

        ScreenToClient(GetForegroundWindow(), &p);
        POINT pa;
        GetCursorPos(&pa);
        ScreenToClient(GetForegroundWindow(), &pa);
        ///huber 1
        if(pa.x >= 20 && pa.x <= 200 && pa.y >= 20 && pa.y <= 100 && flag1)
        {
            flag1 = false;
            setfillstyle(SOLID_FILL,6);
            rectangle(20, 20, 200, 100);
            bar(21, 21, 200, 100);
            setbkcolor(6);
            setcolor(10);
            outtextxy(a, b, "Motor bike");
        }
        else if(!flag1 && !(pa.x >= 20 && pa.x <= 200 && pa.y >= 20 && pa.y <= 100))
        {
            flag1 = true;
            setfillstyle(SOLID_FILL,3);
            rectangle(20, 20, 200, 100);
            bar(21, 21, 200, 100);
            setbkcolor(3);
            setcolor(10);
            outtextxy(a, b, "Motor bike");
        }
        ///huber 2
        if(pa.x >= 20 && pa.x <= 200 && pa.y >= 110 && pa.y <= 190 && flag2)
        {
            flag2 = false;
            setfillstyle(SOLID_FILL,6);
            rectangle(20, 110, 200, 190);
            bar(21, 111, 200, 190);
            setbkcolor(6);
            setcolor(10);
            outtextxy(c, d, "Car");
        }
        else if(!flag2 && !(pa.x >= 20 && pa.x <= 200 && pa.y >= 110 && pa.y <= 190))
        {
            flag2 = true;
            setfillstyle(SOLID_FILL,3);
            rectangle(20, 110, 200, 190);
            bar(21, 111, 200, 190);
            setbkcolor(3);
            setcolor(10);
            outtextxy(c, d, "Car");
        }
        ///huber 3
        if(pa.x >= 20 && pa.x <= 200 && pa.y >= 200 && pa.y <= 280 && flag3)
        {
            flag3 = false;
            setfillstyle(SOLID_FILL,6);
            rectangle(20, 200, 200, 280);
            bar(21, 201, 200, 280);
            setbkcolor(6);
            setcolor(10);
            outtextxy(e, f, "Mini bus");
        }
        else if(!flag3 && !(pa.x >= 20 && pa.x <= 200 && pa.y >= 200 && pa.y <= 280))
        {
            flag3 = true;
            setfillstyle(SOLID_FILL,3);
            rectangle(20, 200, 200, 280);
            bar(21, 201, 200, 280);
            setbkcolor(3);
            setcolor(10);
            outtextxy(e, f, "Mini bus");
        }
        ///huber 4
        if(pa.x >= 20 && pa.x <= 200 && pa.y >= 290 && pa.y <= 370 && flag4)
        {
            flag4 = false;
            setfillstyle(SOLID_FILL,6);
            rectangle(20, 290, 200, 370);
            bar(21, 291, 200, 370);
            setbkcolor(6);
            setcolor(10);
            outtextxy(g, h, "Big bus");
        }
        else if(!flag4 && !(pa.x >= 20 && pa.x <= 200 && pa.y >= 290 && pa.y <= 370))
        {
            flag4 = true;
            setfillstyle(SOLID_FILL,3);
            rectangle(20, 290, 200, 370);
            bar(21, 291, 200, 370);
            setbkcolor(3);
            setcolor(10);
            outtextxy(g, h, "Big bus");
        }
        ///huber 5
        if(pa.x >= 1000 && pa.x <= 1190 && pa.y >= 20 && pa.y <= 100 && flag5)
        {
            flag5 = false;
            setfillstyle(SOLID_FILL,6);
            rectangle(1000, 20, 1190, 100);
            bar(1001, 21, 1190, 100);
            setbkcolor(6);
            setcolor(10);
            outtextxy(k, l, "Mini truck");
        }
        else if(!flag5 && !(pa.x >= 1000 && pa.x <= 1190 && pa.y >= 20 && pa.y <= 100))
        {
            flag5 = true;
            setfillstyle(SOLID_FILL,3);
            rectangle(1000, 20, 1190, 100);
            bar(1001, 21, 1190, 100);
            setbkcolor(3);
            setcolor(10);
            outtextxy(k, l, "Mini truck");
        }
        ///huber 6
        if(pa.x >= 1000 && pa.x <= 1190 && pa.y >= 110 && pa.y <= 190 && flag6)
        {
            flag6 = false;
            setfillstyle(SOLID_FILL,6);
            rectangle(1000, 110, 1190, 190);
            bar(1001, 111, 1190, 190);
            setbkcolor(6);
            setcolor(10);
            outtextxy(m, n, "Medium truck");
        }
        else if(!flag6 && !(pa.x >= 1000 && pa.x <= 1190 && pa.y >= 110 && pa.y <= 190))
        {
            flag6 = true;
            setfillstyle(SOLID_FILL,3);
            rectangle(1000, 110, 1190, 190);
            bar(1001, 111, 1190, 190);
            setbkcolor(3);
            setcolor(10);
            outtextxy(m, n, "Medium truck");
        }
        ///huber 7
        if(pa.x >= 1000 && pa.x <= 1190 && pa.y >= 200 && pa.y <= 280 && flag7)
        {
            flag7 = false;
            setfillstyle(SOLID_FILL,6);
            rectangle(1000, 200, 1190, 280);
            bar(1001, 201, 1190, 280);
            setbkcolor(6);
            setcolor(10);
            outtextxy(o, w, "Big truck");
        }
        else if(!flag7 && !(pa.x >= 1000 && pa.x <= 1190 && pa.y >= 200 && pa.y <= 280))
        {
            flag7 = true;
            setfillstyle(SOLID_FILL,3);
            rectangle(1000, 200, 1190, 280);
            bar(1001, 201, 1190, 280);
            setbkcolor(3);
            setcolor(10);
            outtextxy(o, w, "Big truck");
        }
        ///huber 8
        if(pa.x >= 1000 && pa.x <= 1190 && pa.y >= 290 && pa.y <= 370 && flag8)
        {
            flag8 = false;
            setfillstyle(SOLID_FILL,6);
            rectangle(1000, 290, 1190, 370);
            bar(1001, 291, 1190, 370);
            setbkcolor(6);
            setcolor(10);
            outtextxy(q, r, "Cargo");
        }
        else if(!flag8 && !(pa.x >= 1000 && pa.x <= 1190 && pa.y >= 290 && pa.y <= 370))
        {
            flag8 = true;
            setfillstyle(SOLID_FILL,3);
            rectangle(1000, 290, 1190, 370);
            bar(1001, 291, 1190, 370);
            setbkcolor(3);
            setcolor(10);
            outtextxy(q, r, "Cargo");
        }
        ///huber 9 for end button
        if(pa.x >= 500 && pa.x <= 700 && pa.y >= 145 && pa.y <= 190 && flag9)
        {
            flag9 = false;
            setfillstyle(SOLID_FILL,YELLOW);
            rectangle(500, 145, 700, 190);
            bar(501, 146, 700, 190);
            setbkcolor(YELLOW);
            setcolor(10);
            outtextxy(s, t, "End toll count");
        }
        else if(!flag9 && !(pa.x >= 500 && pa.x <= 700 && pa.y >= 145 && pa.y <= 190))
        {
            flag9 = true;
            setfillstyle(SOLID_FILL,12);
            rectangle(500, 145, 700, 190);
            bar(501, 146, 700, 190);
            setbkcolor(12);
            setcolor(10);
            outtextxy(s, t, "End toll count");
        }
        ///get click point
        if(GetAsyncKeyState(VK_LBUTTON) & (0x8000 != 0))
        {
            //car 1
            if(p.x >= 20 && p.x <= 200 && p.y >= 20 && p.y <= 100)
            {
                setfillstyle(SOLID_FILL,LIGHTRED);
                rectangle(20, 20, 200, 100);
                bar(21, 21, 200, 100);
                setbkcolor(LIGHTRED);
                setcolor(LIGHTRED);
                outtextxy(a, b, "Motor bike");
                delay(100);
                setfillstyle(SOLID_FILL,6);
                rectangle(20, 20, 200, 100);
                bar(21, 21, 200, 100);
                setbkcolor(6);
                outtextxy(a, b, "Motor bike");
                car1++;
                tk1=tk1+105;
                total_tk= total_tk + 105;

            }
            //car 2
            else if(p.x >= 20 && p.x <= 200 && p.y >= 110 && p.y <= 190)
            {
                setfillstyle(SOLID_FILL,LIGHTRED);
                rectangle(20, 110, 200, 190);
                bar(21, 111, 200, 190);
                setbkcolor(LIGHTRED);
                setcolor(LIGHTRED);
                outtextxy(c, d, "Car");
                delay(100);
                setfillstyle(SOLID_FILL,6);
                rectangle(20, 110, 200, 190);
                bar(21, 111, 200, 190);
                setbkcolor(6);
                outtextxy(c, d, "Car");
                car2++;
                tk2=tk2+750;
                total_tk= total_tk + 750;
            }
            //car 3
            else if(p.x >= 20 && p.x <= 200 && p.y >= 200 && p.y <= 280)
            {
                setfillstyle(SOLID_FILL,LIGHTRED);
                rectangle(20, 200, 200, 280);
                bar(21, 201, 200, 280);
                setbkcolor(LIGHTRED);
                setcolor(LIGHTRED);
                outtextxy(e, f, "Mini bus");
                delay(100);
                setfillstyle(SOLID_FILL,6);
                rectangle(20, 200, 200, 280);
                bar(21, 201, 200, 280);
                setbkcolor(6);
                outtextxy(e, f, "Mini bus");
                car3++;
                tk3=tk3+2025;
                total_tk= total_tk + 2025;
            }
            //car 4
            else if(p.x >= 20 && p.x <= 200 && p.y >= 290 && p.y <= 370)
            {
                setfillstyle(SOLID_FILL,LIGHTRED);
                rectangle(20, 290, 200, 370);
                bar(21, 291, 200, 370);
                setbkcolor(LIGHTRED);
                setcolor(LIGHTRED);
                outtextxy(g, h, "Big bus");
                delay(100);
                setfillstyle(SOLID_FILL,6);
                rectangle(20, 290, 200, 370);
                bar(21, 291, 200, 370);
                setbkcolor(6);
                outtextxy(g, h, "Big bus");
                car4++;
                tk4=tk4+2479;
                total_tk= total_tk + 2479;
            }

            //right side
            //car 5
            else if(p.x >= 1000 && p.x <= 1190 && p.y >= 20 && p.y <= 100)
            {
                setfillstyle(SOLID_FILL,LIGHTRED);
                rectangle(1000, 20, 1190, 100);
                bar(1001, 21, 1190, 100);
                setbkcolor(LIGHTRED);
                setcolor(LIGHTRED);
                outtextxy(k, l, "Mini truck");
                delay(100);
                setfillstyle(SOLID_FILL,6);
                rectangle(1000, 20, 1190, 100);
                bar(1001, 21, 1190, 100);
                setbkcolor(6);
                outtextxy(k, l, "Mini truck");
                car5++;
                tk5=tk5+1620;
                total_tk= total_tk + 1620;
            }
            //car 6
            else if(p.x >= 1000 && p.x <= 1190 && p.y >= 110 && p.y <= 190)
            {
                setfillstyle(SOLID_FILL,LIGHTRED);
                rectangle(1000, 110, 1190, 190);
                bar(1001, 111, 1190, 190);
                setbkcolor(LIGHTRED);
                setcolor(LIGHTRED);
                outtextxy(m, n, "Medium truck");
                delay(100);
                setfillstyle(SOLID_FILL,6);
                rectangle(1000, 110, 1190, 190);
                bar(1001, 111, 1190, 190);
                setbkcolor(6);
                outtextxy(m, n, "Medium truck");
                car6++;
                tk6=tk6+2100;
                total_tk= total_tk + 2100;
            }
            //car 7
            else if(p.x >= 1000 && p.x <= 1190 && p.y >= 200 && p.y <= 280)
            {
                setfillstyle(SOLID_FILL,LIGHTRED);
                rectangle(1000, 200, 1190, 280);
                bar(1001, 201, 1190, 280);
                setbkcolor(LIGHTRED);
                setcolor(LIGHTRED);
                outtextxy(o, w, "Big truck");
                delay(100);
                setfillstyle(SOLID_FILL,6);
                rectangle(1000, 200, 1190, 280);
                bar(1001, 201, 1190, 280);
                setbkcolor(6);
                outtextxy(o, w, "Big truck");
                car7++;
                tk7=tk7+2775;
                total_tk= total_tk + 2775;
            }
            //car 8
            else if(p.x >= 1000 && p.x <= 1190 && p.y >= 290 && p.y <= 370)
            {
                setfillstyle(SOLID_FILL,LIGHTRED);
                rectangle(1000, 290, 1190, 370);
                bar(1001, 291, 1190, 370);
                setbkcolor(LIGHTRED);
                setcolor(LIGHTRED);
                outtextxy(q, r, "cargo");
                delay(100);
                setfillstyle(SOLID_FILL,6);
                rectangle(1000, 290, 1190, 370);
                bar(1001, 291, 1190, 370);
                setbkcolor(6);
                outtextxy(q, r, "cargo");
                car8++;
                tk8=tk8+3000;
                total_tk= total_tk + 3000;
            }

            //end button
            else if(p.x >= 500 && p.x <= 700 && p.y >= 145 && p.y <= 190)
            {
                setfillstyle(SOLID_FILL,LIGHTRED);
                rectangle(500, 145, 700, 190);
                bar(501, 146, 700, 190);
                setbkcolor(LIGHTRED);
                setcolor(LIGHTRED);
                outtextxy(s, t, "End toll count");
                delay(100);
                setfillstyle(SOLID_FILL,6);
                rectangle(500, 145, 700, 190);
                bar(501, 146, 700, 190);
                setbkcolor(6);
                outtextxy(s, t, "End toll count");

                ///save data in file
                save.toll_data(car1,tk1);
                save.toll_data(car2,tk2);
                save.toll_data(car3,tk3);
                save.toll_data(car4,tk4);
                save.toll_data(car5,tk5);
                save.toll_data(car6,tk6);
                save.toll_data(car7,tk7);
                save.toll_data(car8,tk8);
                save.toll_data(total_vehicle_number,total_tk);

                while(true)
                {
                    POINT p;
                    GetCursorPos(&p);

                    ScreenToClient(GetForegroundWindow(), &p);
                    POINT pa;
                    GetCursorPos(&pa);
                    ScreenToClient(GetForegroundWindow(), &pa);
                    ///huber for start button
                    if(pa.x >= 500 && pa.x <= 700 && pa.y >= 200 && pa.y <= 245 && flag10)
                    {
                        flag10 = false;
                        setfillstyle(SOLID_FILL,6);
                        rectangle(500, 200, 700, 245);
                        bar(501, 201, 700, 245);
                        setbkcolor(6);
                        setcolor(10);
                        outtextxy(sx, sy, "start toll count");
                    }
                    else if(!flag10 && !(pa.x >= 500 && pa.x <= 700 && pa.y >= 200 && pa.y <= 245))
                    {
                        flag10 = true;
                        setfillstyle(SOLID_FILL,3);
                        rectangle(500, 200, 700, 245);
                        bar(501, 201, 700, 245);
                        setbkcolor(3);
                        setcolor(10);
                        outtextxy(sx, sy, "start toll count");
                    }
                    ///Next button for previous data
                    if(pa.x >= 500 && pa.x <= 700 && pa.y >= 255 && pa.y <= 300 && flag11)
                    {
                        flag11 = false;
                        setfillstyle(SOLID_FILL,6);
                        rectangle(500, 255, 700, 300);
                        bar(501, 256, 700, 300);
                        setbkcolor(6);
                        setcolor(10);
                        outtextxy(dx, dy, "NEXT");
                    }
                    else if(!flag11 && !(pa.x >= 500 && pa.x <= 700 && pa.y >= 255 && pa.y <= 300))
                    {
                        flag11 = true;
                        setfillstyle(SOLID_FILL,3);
                        rectangle(500, 255, 700, 300);
                        bar(501, 256, 700, 300);
                        setbkcolor(3);
                        setcolor(10);
                        outtextxy(dx, dy, "NEXT");
                    }
                    ///get click point
                    if(GetAsyncKeyState(VK_LBUTTON) & (0x8000 != 0))
                    {
                        ///click for start button
                        if(p.x >= 500 && p.x <= 700 && p.y >= 200 && p.y <= 245)
                        {
                            setfillstyle(SOLID_FILL,LIGHTRED);
                            rectangle(500, 200, 700, 245);
                            bar(501, 201, 700, 245);
                            setbkcolor(LIGHTRED);
                            setcolor(LIGHTRED);
                            outtextxy(sx, sy, "Start toll count");
                            delay(100);
                            setfillstyle(SOLID_FILL,6);
                            rectangle(500, 200, 700, 245);
                            bar(501, 201, 700, 245);
                            setbkcolor(6);
                            outtextxy(sx, sy, "Start toll count");
                            value=0;
                            closegraph();
                            goto jump;
                        }
                        ///click for NEXT button
                        else if(p.x >= 500 && p.x <= 700 && p.y >= 255 && p.y <= 300)
                        {
                            setfillstyle(SOLID_FILL,LIGHTRED);
                            rectangle(500, 255, 700, 300);
                            bar(501, 256, 700, 300);
                            setbkcolor(LIGHTRED);
                            setcolor(LIGHTRED);
                            outtextxy(dx, dy, "NEXT");
                            delay(100);
                            setfillstyle(SOLID_FILL,6);
                            rectangle(500, 255, 700, 300);
                            bar(501, 256, 700, 300);
                            setbkcolor(6);
                            outtextxy(dx, dy, "NEXT");
                            ///print data
                            ifstream td("toll_data.txt");
                            string str;
                            for(int i=0; i<value*9; i++) getline(td,str);

                            setcolor(RED);

                            setbkcolor(7);
                            outtextxy(725, 360, "Toll Data first day to last day");
                            outtextxy(725,380, "Vehicle name         number         tk");

                            outtextxy(725,400, "1.Motor bike");
                            outtextxy(725,420, "2.Car");
                            outtextxy(725,440, "3.Mini bus");
                            outtextxy(725,460, "4.Big bus");
                            outtextxy(725,480, "5.Mini truck");
                            outtextxy(725,500, "6.Medium truck");
                            outtextxy(725,520, "7.Big truck");
                            outtextxy(725,540, "8.Cargo");

                            line(700,560,995,560);
                            outtextxy(725,570, "total = ");

                            getline(td,str);

                            char value_1[32]= {0};
                            for(int i=0; i<str.size(); i++) value_1[i]=str[i];
                            outtextxy(847,400, value_1);

                            getline(td,str);
                            char value_2[32]= {0};
                            for(int i=0; i<str.size(); i++) value_2[i]=str[i];
                            outtextxy(847,420, value_2);

                            getline(td,str);
                            char value_3[32]= {0};
                            for(int i=0; i<str.size(); i++) value_3[i]=str[i];
                            outtextxy(847,440, value_3);

                            getline(td,str);
                            char value_4[32]= {0};
                            for(int i=0; i<str.size(); i++) value_4[i]=str[i];
                            outtextxy(847,460, value_4);

                            getline(td,str);
                            char value_5[32]= {0};
                            for(int i=0; i<str.size(); i++) value_5[i]=str[i];
                            outtextxy(847,480, value_5);

                            getline(td,str);
                            char value_6[32]= {0};
                            for(int i=0; i<str.size(); i++) value_6[i]=str[i];
                            outtextxy(847,500, value_6);

                            getline(td,str);
                            char value_7[32]= {0};
                            for(int i=0; i<str.size(); i++) value_7[i]=str[i];
                            outtextxy(847,520, value_7);

                            getline(td,str);
                            char value_8[32]= {0};
                            for(int i=0; i<str.size(); i++) value_8[i]=str[i];
                            outtextxy(847,540, value_8);

                            getline(td,str);
                            char value_9[32]= {0};
                            for(int i=0; i<str.size(); i++) value_9[i]=str[i];
                            outtextxy(847,570, value_9);

                            value++;


                        }
                    }
                }

                break;
            }
        }
        setbkcolor(BLACK);
        setbkcolor(WHITE);
        setcolor(MAGENTA);
        //convert car number to string
        char car_count1[16] = {0};
        char car_count2[16] = {0};
        char car_count3[16] = {0};
        char car_count4[16] = {0};
        char car_count5[16] = {0};
        char car_count6[16] = {0};
        char car_count7[16] = {0};
        char car_count8[16] = {0};
        itoa(car1, car_count1, 10);
        itoa(car2, car_count2, 10);
        itoa(car3, car_count3, 10);
        itoa(car4, car_count4, 10);
        itoa(car5, car_count5, 10);
        itoa(car6, car_count6, 10);
        itoa(car7, car_count7, 10);
        itoa(car8, car_count8, 10);
        //convert car tk amount to string
        char car_tk1[16]= {0};
        char car_tk2[16]= {0};
        char car_tk3[16]= {0};
        char car_tk4[16]= {0};
        char car_tk5[16]= {0};
        char car_tk6[16]= {0};
        char car_tk7[16]= {0};
        char car_tk8[16]= {0};
        itoa(tk1, car_tk1, 10);
        itoa(tk2, car_tk2, 10);
        itoa(tk3, car_tk3, 10);
        itoa(tk4, car_tk4, 10);
        itoa(tk5, car_tk5, 10);
        itoa(tk6, car_tk6, 10);
        itoa(tk7, car_tk7, 10);
        itoa(tk8, car_tk8, 10);

        //print vehicle name
        setbkcolor(7);
        outtextxy(725,150, "Vehicle name         number         tk");
        outtextxy(725,170, "1.Motor bike");
        outtextxy(725,190, "2.Car");
        outtextxy(725,210, "3.Mini bus");
        outtextxy(725,230, "4.Big bus");
        outtextxy(725,250, "5.Mini truck");
        outtextxy(725,270, "6.Medium truck");
        outtextxy(725,290, "7.Big truck");
        outtextxy(725,310, "8.Cargo");
        ///print vehicle count
        outtextxy(847,170, car_count1);
        outtextxy(847,190, car_count2);
        outtextxy(847,210, car_count3);
        outtextxy(847,230, car_count4);
        outtextxy(847,250, car_count5);
        outtextxy(847,270, car_count6);
        outtextxy(847,290, car_count7);
        outtextxy(847,310, car_count8);
        ///print vehicle tk
        outtextxy(932,170, car_tk1);
        outtextxy(932,190, car_tk2);
        outtextxy(932,210, car_tk3);
        outtextxy(932,230, car_tk4);
        outtextxy(932,250, car_tk5);
        outtextxy(932,270, car_tk6);
        outtextxy(932,290, car_tk7);
        outtextxy(932,310, car_tk8);

        //total
        total_vehicle_number=car1+car2+car3+car4+car5+car6+car7+car8;
        char count_vehicle[16]= {0};
        itoa(total_vehicle_number, count_vehicle, 10);
        line(700,330,995,330);
        outtextxy(725,335, "total = ");
        outtextxy(847,335, count_vehicle);
        char count_tk[16]= {0};
        itoa(total_tk, count_tk, 10);
        outtextxy(932,335, count_tk);
    }
    getch();
    return 0;
}
