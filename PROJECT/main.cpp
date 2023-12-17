#include <windows.h>
#include <GL/glut.h>
#include <math.h>
#include <iostream>
#include "custom.h"
using namespace std;


float moveXh = 0.0f;
float moveY = 0.0f;
float movecY = 0.0f;
float movecX = 0.0f;
float moveShip = 0.0f;
float moveShip3 = -43.0f;
float shipSpeed = 0.02;
float speed = 0.05f;
float truckX = 0.0f;
float stringY = 0.0f;
float cloudX = 0.0f;
bool pick = false;
bool release  = false;
bool ship_start = false;
bool ship_start2 = false;
bool ship_start3 = false;
bool train_start2 = false;
bool truckStart = false;
bool isDayScene = true;
bool snow_3=false;
int currentDisplay = 1;



void set_color(string col){

    if(isDayScene  == true && snow_3==false){

        // Scenario 1

        //Road
        if(col == "Emperor")glColor3ub(85,74,75);
        else if(col == "Scorpion")glColor3ub(110,99,100);
        else if(col == "Black")glColor3ub(0,0,0);
        else if(col == "Thunder")glColor3ub(23, 20, 21);

        // Warehouse
        else if(col == "Tango")glColor3ub(238,126,32);
        else if(col =="Hawaiian Tan" )glColor3ub(165,86,20);
        else if(col =="warehouse1" )glColor3ub(165,86,20);
        else if(col =="Hairy Heath" )glColor3ub(103,45,19);
        else if(col =="Tango_Dark")glColor3ub(71,38,10);
        else if(col =="White")glColor3ub(255,255,255);
        else if(col =="Old Copper")glColor3ub(119,63,50);
        else if(col =="Firefly")glColor3ub(9,22,28);
        else if(col =="Maroon")glColor3ub(71,13,33);
        else if(col =="Jazzberry")glColor3ub(156,15,72);
        else if(col =="Neon")glColor3ub(174, 214, 241);
        else if(col =="LNeon")glColor3ub(214, 234, 248);

        // ocean
        else if(col == "1")glColor3ub(18,153,201);
        else if(col == "2")glColor3ub(49,196,218);
        else if(col == "3")glColor3ub(91,244,225);
        else if(col == "4")glColor3ub(100,230,230);

        //ship
        else if(col == "window")glColor3ub(255,194,113);
        else if(col == "ship_side")glColor3ub(0,38,84);
        else if(col == "ship_side1")glColor3ub(243, 156, 18);
        else if(col == "chimney")glColor3ub(125,2,30);
        else if(col == "ship_window")glColor3ub(0, 150, 136 );
        else if(col == "Ship_Border")glColor3ub(169, 50, 38);
        else if(col == "Off white")glColor3ub(153, 163, 164);
        else if(col == "ship_body")glColor3ub(97, 106, 107);
        else if(col == "ship_body2")glColor3ub(178, 186, 187);
        else if(col == "Top_floor")glColor3ub(224, 224, 224);
        else if(col == "Railing")glColor3ub(214, 219, 223);

        // sky
        else if(col == "skyL")glColor3ub(128,201,242);
        else if(col == "skyM")glColor3ub(0,172,246);
        else if(col == "skyD")glColor3ub(0,112,214);

        // Crane Bg
        else if(col == "BcraneLeg")glColor3ub(31, 97, 141);
        else if(col == "Fuel Yellow")glColor3ub(232,178,37);
        else if(col == "BcraneRoom")glColor3ub(138,18,32 );
        else if(col == "BcraneContainer")glColor3ub(194,113,74);

        // Cargo ship
        else if(col == "Cship_floor")glColor3ub( 219,99,75);
        else if(col == "Cship_shadow")glColor3ub(201,86,66);
        else if(col == "Crail")glColor3ub(180,71,61);
        else if(col == "Japonica")glColor3ub(215,116,89);

       // Lights
        else if(col == "Red light")glColor3ub(44, 62, 80);
        else if(col == "cloud")glColor3ub(255,255,255);





        // Scenario 2

        else if(col == "sky") glColor3ub (176, 225, 255);
        else if(col == "skyCU") glColor3ub (13, 163, 222 );
        else if(col == "skyCD") glColor3ub (0,89,191);
        else if(col == "waterCU") glColor3ub (18, 146, 173);
        else if(col == "waterCD") glColor3ub (75, 117, 232 );
        else if(col == "buildingglass") glColor3ub (122, 194, 244);
        else if(col == "bulidingcolor") glColor3ub (120,79,87);
        else if(col == "buildingShadow") glColor3ub (166, 212, 246);
        else if(col == "twintower") glColor3ub (100, 136, 160);
        else if(col == "brick") glColor3ub (175, 44, 35);
        else if(col == "midBuilding") glColor3ub (251,154,127);
        else if(col == "frontBuilding") glColor3ub (116,142,161);
        else if(col == "trainGlass") glColor3ub (146, 168, 175);
        else if(col == "background") glColor3ub (215, 216, 215);
        else if(col == "trainwindow") glColor3ub (37, 150, 190);
        else if(col == "traindoor") glColor3ub (124,57,85);
        else if(col == "bridgerailc") glColor3ub (100, 96, 92 );
        else if(col == "SunC") glColor3ub (255,187,68);
        else if(col == "DewC") glColor3ub (236,247,248);


        // Scenario 3

        // Light color to dark
        else if(col == "S3_sky1") glColor3ub(230,255,255);
        else if(col == "S3_sky2") glColor3ub(155,228,225);
        else if(col == "S3_sky3") glColor3ub(97,209,208);
        else if(col == "S3_sky4") glColor3ub(66,208,206);


        else if(col == "S3_sea1")glColor3ub(202,230,254);
        else if(col == "S3_sea2")glColor3ub(159,214,255);
        else if(col == "S3_sea3")glColor3ub(119,188,253);
        else if(col == "S3_sea4")glColor3ub(95,150,202);
        else if(col == "S3_sea5")glColor3ub(71, 113, 152);
        else if(col == "S3_sea6")glColor3ub(48, 75, 101);
        else if(col == "S3_sea7")glColor3ub(24, 38, 51);





        // Scenario 4

        //MOUNTAIN PART

        else if(col =="frontmountaingreen")glColor3ub(34,112,0);
        else if(col =="frontmountainshadow")glColor3ub(133,221,95);
        else if(col =="frontmountaingreenshade")glColor3ub(16,85,2);
        else if(col =="backmountain")glColor3ub(188,199,200);
        else if(col =="backmountainsnow")glColor3ub(250,250,250);
        else if(col =="backmountainshadow")glColor3ub(133,137,137);
        //ground
        else if(col =="ground")glColor3ub(204, 143, 43  );
        //water col
        else if(col =="water")glColor3ub(83, 164, 255 );
        else if(col =="water-shade")glColor3ub(70, 111, 207  );

        //sky
        else if(col =="sky")glColor3ub(162,210,223 );
        else if(col =="sky-shade")glColor3ub( 37,124,163);


    } else if(isDayScene == false && snow_3 == false) {

        // _________________________NIGHT______________________________________________________________________________________


        // Road
        if(col == "Emperor")glColor3ub(43,37,38);
        else if(col == "Scorpion")glColor3ub(51,44,45);
        else if(col == "Black")glColor3ub(0,0,0);
        else if(col == "Thunder")glColor3ub(33,	29	,30);

        // Warehouse
        else if(col == "Tango")glColor3ub(167,88,22);
        else if(col == "Hawaiian Tan" )glColor3ub(132,69,16);
        else if(col == "warehouse1" )glColor3ub(167,88,22);
        else if(col == "Hairy Heath" )glColor3ub(72,31,13);
        else if(col == "Tango_Dark")glColor3ub(50,27,7);
        else if(col == "White")glColor3ub(229, 231, 233);
        else if(col == "Old Copper")glColor3ub(89, 57, 36);
        else if(col == "Firefly")glColor3ub(9,22,28);
        else if(col == "Maroon")glColor3ub(61, 12, 17);
        else if(col == "Jazzberry")glColor3ub(93, 6, 53);

        // neon and lneon
        else if(col == "Neon")glColor3ub(133, 146, 158);
        else if(col == "LNeon")glColor3ub(174, 182, 191);

        // ocean

        else if(col == "1")glColor3ub(14, 122, 161);
        else if(col == "2")glColor3ub(34, 137, 153);
        else if(col == "3")glColor3ub(64, 156, 158);
        else if(col == "4")glColor3ub(80, 184, 184);

        // ship
        else if(col == "window")glColor3ub(249, 231, 159);
        else if(col == "ship_side")glColor3ub(46, 64, 83);
        else if(col == "ship_side1")glColor3ub(185, 119, 14);
        else if(col == "chimney")glColor3ub(50,1,12);
        else if(col == "ship_window")glColor3ub(244, 208, 63);
        else if(col == "Ship_Border")glColor3ub(100, 30, 22);
        else if(col == "Off white")glColor3ub(112, 123, 124);
        else if(col == "ship_body")glColor3ub(66, 73, 73);
        else if(col == "ship_body2")glColor3ub(153, 163, 164);
        else if(col == "Top_floor")glColor3ub(215, 219, 221);
        else if(col == "Railing")glColor3ub(166, 172, 175);


        // sky
        else if(col == "skyL")glColor3ub(121,135,174);
        else if(col == "skyM")glColor3ub(8,27,68);
        else if(col == "skyD")glColor3ub(9,16,35);


        // Crane Bg
        else if(col == "BcraneLeg")glColor3ub(52, 73, 94);
        else if(col == "Fuel Yellow")glColor3ub(186, 143, 29);
        else if(col == "BcraneRoom")glColor3ub(125,54,49);
        else if(col == "BcraneContainer")glColor3ub(175, 102, 67);

        // Cargo ship
        else if(col == "Cship_floor")glColor3ub(131,59,45);
        else if(col == "Cship_shadow")glColor3ub(131,59,45);
        else if(col == "Crail")glColor3ub(144,57,49);
        else if(col == "Japonica")glColor3ub(172, 93, 71);

       // Lights
        else if(col == "Red light")glColor3ub(231, 76, 60);
        else if(col == "cloud")glColor3ub(128, 139, 150);



        // Scenario 2

        else if(col == "night") glColor3ub (84,85,87);
        else if(col == "skyCU") glColor3ub (68,97,115);
        else if(col == "skyCD") glColor3ub (2,24,38);
        else if(col == "white") glColor3ub (91, 157, 169);
        else if(col == "bulidingcolor") glColor3ub (96, 63, 70);
        else if(col == "buildingglass") glColor3ub (255, 228, 9);
        else if(col == "buildingShadow") glColor3ub (116, 148, 172);
        else if(col == "twintower") glColor3ub (100, 136, 160);
        else if(col == "cloud") glColor3ub (79, 132, 150);
        else if(col == "lightBuilding") glColor3ub (116, 148, 172);
        else if(col == "midBuilding") glColor3ub (201, 123, 102);
        else if(col == "frontBuilding") glColor3ub (93, 114, 129);
        else if(col == "trainGlass") glColor3ub (65, 117, 139);
        else if(col == "traindoor") glColor3ub (112, 51, 77);
        else if(col == "trainwindow") glColor3ub (251, 232, 35);
        else if(col == "bridgerailc") glColor3ub (100, 96, 92 );
        else if(col == "nightTwindow") glColor3ub (253, 242, 133);
        else if(col == "nightstars") glColor3ub (247,248,243);
        else if(col == "MoonD") glColor3ub (255,255,255);
        else if(col == "DewC") glColor3ub (236,247,248);



        // Scenario 3

        else if(col == "S3_sky4")glColor3ub(11,16,38);
        else if(col == "S3_sky3")glColor3ub(22,27,54);
        else if(col == "S3_sky2")glColor3ub(36,43,75);
        else if(col == "S3_sky1")glColor3ub(58, 64, 93);

        else if(col == "S3_sea1")glColor3ub(130, 157, 178);
        else if(col == "S3_sea2")glColor3ub(79, 125, 168);
        else if(col == "S3_sea3")glColor3ub(60, 94, 126);
        else if(col == "S3_sea4")glColor3ub(48, 75, 101);
        else if(col == "S3_sea5")glColor3ub(48, 75, 101);
        else if(col == "S3_sea6")glColor3ub(36, 56, 76);
        else if(col == "S3_sea7")glColor3ub(24, 37, 50);





        // Scenario 4

        else if(col=="frontmountaingreen")glColor3ub(27, 90, 0);
        else if(col=="frontmountainshadow")glColor3ub(104, 178, 72);
        else if(col=="frontmountaingreenshade")glColor3ub(11, 60, 1 );
        else if(col=="backmountain")glColor3ub(142, 154, 155);
        else if(col=="backmountainsnow")glColor3ub(231, 231, 231  );
        else if(col=="backmountainshadow")glColor3ub(97, 97, 97);
        //ground
        else if(col=="ground")glColor3ub(164, 113, 31  );
        //water color
        else if(col=="water")glColor3ub(69, 140, 221);
        //sky
       // else if(color=="sky")glColor3ub(2,34,87);
        else if(col == "sky")glColor3ub(121,135,174);
        else if(col == "sky-shade")glColor3ub(8,27,68);
        else if(col == "skyD")glColor3ub(9,16,35);
        else if(col=="moon_3")glColor3ub(234,244,252 );


    }

    else if(snow_3==true)
    {
         if(col=="frontmountaingreen")glColor3ub(34,112,0);
        else if(col=="frontmountainshadow")glColor3ub(250,250,250);
        else if(col=="frontmountaingreenshade")glColor3ub(16,85,2);
        else if(col=="backmountain")glColor3ub(188,199,200);
        else if(col=="backmountainsnow")glColor3ub(250,250,250);
        else if(col=="backmountainshadow")glColor3ub(133,137,137);
        //ground
        else if(col=="ground")glColor3ub(204, 143, 43  );
        //water color
        else if(col=="water")glColor3ub(146,205,247 );
        else if(col=="water-shade")glColor3ub(70, 111, 207  );


        //sky
        else if(col=="sky")glColor3ub(204,204,204 );
        else if(col=="sky-shade")glColor3ub( 221,221,221);
        else if(col=="sun_3")glColor3ub(213, 124, 61 );


    }

}


void streetlight(){

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(0.25,11.25);
    glVertex2f(0.25,10.75);
    glVertex2f(0.5,10.75);
    glVertex2f(0.5,11.25);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("Red light");
    glVertex2f(0.25,11.5);
    glVertex2f(0.25,11.25);
    glVertex2f(0.5,11.25);
    glVertex2f(0.5,11.5);
    glEnd();
}

void More_StreetLight(){


    glPushMatrix();
    glScalef(0.4,0.4,1);
    glTranslatef(0,16.1,0);
    streetlight();
    glPopMatrix();


    glPushMatrix();
    glScalef(0.4,0.4,1);
    glTranslatef(5,16.1,0);
    streetlight();
    glPopMatrix();


    glPushMatrix();
    glScalef(0.4,0.4,1);
    glTranslatef(10,16.1,0);
    streetlight();
    glPopMatrix();


    glPushMatrix();
    glScalef(0.4,0.4,1);
    glTranslatef(15,16.1,0);
    streetlight();
    glPopMatrix();


    glPushMatrix();
    glScalef(0.4,0.4,1);
    glTranslatef(20,16.1,0);
    streetlight();
    glPopMatrix();


    glPushMatrix();
    glScalef(0.4,0.4,1);
    glTranslatef(25,16.1,0);
    streetlight();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.4,0.4,1);
    glTranslatef(30,16.1,0);
    streetlight();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.4,0.4,1);
    glTranslatef(35,16.1,0);
    streetlight();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.4,0.4,1);
    glTranslatef(40,16.1,0);
    streetlight();
    glPopMatrix();


    glPushMatrix();
    glScalef(0.4,0.4,1);
    glTranslatef(45,16.1,0);
    streetlight();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.4,0.4,1);
    glTranslatef(50,16.1,0);
    streetlight();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.4,0.4,1);
    glTranslatef(55,16.1,0);
    streetlight();
    glPopMatrix();


    glPushMatrix();
    glScalef(0.4,0.4,1);
    glTranslatef(60,16.1,0);
    streetlight();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.4,0.4,1);
    glTranslatef(65 ,16.1,0);
    streetlight();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.4,0.4,1);
    glTranslatef(70,16.1,0);
    streetlight();
    glPopMatrix();


    glPushMatrix();
    glScalef(0.4,0.4,1);
    glTranslatef(75 ,16.1,0);
    streetlight();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.4,0.4,1);
    glTranslatef(80,16.1,0);
    streetlight();
    glPopMatrix();


}

void circle(float radius, float cX, float cY,int rC, int gC, int bC){
   glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            glColor3ub(rC,gC,bC);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=radius;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+cX,y+cY);
        }
    glEnd();
}

void sky_1(){

    glBegin(GL_POLYGON);

    set_color("skyL");
    glVertex2f(0,0);
    glVertex2f(32,0);
    set_color("skyM");
    glVertex2f(32,15);
    glVertex2f(0,15);
    glEnd();


    glBegin(GL_POLYGON);
    set_color("skyM");
    glVertex2f(0,15);
    glVertex2f(32,15);
    set_color("skyD");
    glVertex2f(32,18);
    glVertex2f(0,18);
    glEnd();
}

void Window_wh_1(){

    glBegin(GL_POLYGON);
    set_color("window");
    glVertex2f(23.50,5.75);
    glVertex2f(23.50,5.25);
    glVertex2f(24,5.25);
    glVertex2f(24,5.75);
    glEnd();
}

void Adjust_Window(){

    // Big red building
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(.5,.5,1);
    glTranslatef(-16.5,20.51,0);
    Window_wh_1();
    glPopMatrix();


    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(.5,.5,1);
    glTranslatef(-14.5,20.51,0);
    Window_wh_1();
    glPopMatrix();

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(.5,.5,1);
    glTranslatef(-12.5,20.51,0);
    Window_wh_1();
    glPopMatrix();


    // small building

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(.5,.5,1);
    glTranslatef(-21,18,0);
    Window_wh_1();
    glPopMatrix();

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(.5,.5,1);
    glTranslatef(-19,18,0);
    Window_wh_1();
    glPopMatrix();

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(.5,.5,1);
    glTranslatef(-17,18,0);
    Window_wh_1();
    glPopMatrix();


    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(.5,.5,1);
    glTranslatef(-15,18,0);
    Window_wh_1();
    glPopMatrix();

    // 2nd row

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(.5,.5,1);
    glTranslatef(-21,16.75,0);
    Window_wh_1();
    glPopMatrix();

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(.5,.5,1);
    glTranslatef(-19,16.75,0);
    Window_wh_1();
    glPopMatrix();

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(.5,.5,1);
    glTranslatef(-17,16.75,0);
    Window_wh_1();
    glPopMatrix();


    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(.5,.5,1);
    glTranslatef(-15,16.75,0);
    Window_wh_1();
    glPopMatrix();

    // Right building small

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(.5,.5,1);
    glTranslatef(29.5,17.70,0);
    Window_wh_1();
    glPopMatrix();

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(.5,.5,1);
    glTranslatef(31.5,17.70,0);
    Window_wh_1();
    glPopMatrix();

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(.5,.5,1);
    glTranslatef(33.5,17.70,0);
    Window_wh_1();
    glPopMatrix();


    //2nd row

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(.5,.5,1);
    glTranslatef(29.5,16.5,0);
    Window_wh_1();
    glPopMatrix();

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(.5,.5,1);
    glTranslatef(31.5,16.5,0);
    Window_wh_1();
    glPopMatrix();

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(.5,.5,1);
    glTranslatef(33.5,16.5,0);
    Window_wh_1();
    glPopMatrix();



}

void Building_1(){


    // Back
    glBegin(GL_POLYGON);
    set_color("Jazzberry");
    glVertex2f(3,13.5);
    glVertex2f(3,10.75);
    glVertex2f(6.25,10.75);
    glVertex2f(6.25,13.5);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("Maroon");
    glVertex2f(6.25,13.5);
    glVertex2f(6.25,10.75);
    glVertex2f(7,10.75);
    glVertex2f(7,13.5);
    glEnd();




    // Front

    glBegin(GL_POLYGON);
    set_color("Tango");
    glVertex2f(1,12.25);
    glVertex2f(1,10.75);
    glVertex2f(4.75,10.75);
    glVertex2f(4.75,12.25);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("Hairy Heath");
    glVertex2f(4.75,12.25);
    glVertex2f(4.75,10.75);
    glVertex2f(6,10.75);
    glVertex2f(6,12.25);

    glEnd();


}

void CraneBg_1(){


    // Leg Left
    glBegin(GL_POLYGON);
    set_color("BcraneLeg");
    glVertex2f(-1.50,-2.00);
    glVertex2f(-1.50,-1.50);
    glVertex2f(-0.25,0.50);
    glVertex2f(-0.25,-0.50);
    glVertex2f(-1.00,-1.50);
    glVertex2f(-1.00,-2.00);
    glVertex2f(-1.50,-2.00);
    glEnd();

    // Right Leg
    glBegin(GL_POLYGON);
    set_color("BcraneLeg");
    glVertex2f(2.00,-2.00);
    glVertex2f(2.00,-1.50);
    glVertex2f(0.75,0.50);
    glVertex2f(0.75,-0.50);
    glVertex2f(1.50,-1.50);
    glVertex2f(1.50,-2.00);
    glVertex2f(2.00,-2.00);
    glEnd();


    // ETA KI ???
    glBegin(GL_POLYGON);
    glColor3ub(81, 90, 90 );
   // glColor3ub(0,0,0 );
    glVertex2f(1.50,-2.00);
    glVertex2f(2.50,-2.00);
    glVertex2f(2.50,-2.25);
    glVertex2f(1.50,-2.25);
    glVertex2f(1.50,-2.00);
    glEnd();



    // Body line

    glBegin(GL_LINES);
    set_color("BcraneLeg");
    glVertex2f(-0.25,-0.50);
    glVertex2f(0.75,-0.50);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("BcraneLeg");
    glVertex2f(-0.25,0.39);
    glVertex2f(-0.25,0.50);
    glVertex2f(0.75,0.50);
    glVertex2f(0.75,0.39);
    glVertex2f(-0.25,0.39);
    glEnd();


    glBegin(GL_POLYGON);
    set_color("BcraneLeg");
    glVertex2f(-0.82,-1.25);
    glVertex2f(1.32,-1.25);
    glVertex2f(1.50,-1.50);
    glVertex2f(-1.00,-1.50);
    glVertex2f(-0.82,-1.25);
    glEnd();


    glBegin(GL_POLYGON);
    set_color("Fuel Yellow");
    glVertex2f(-1.75,0.50);
    glVertex2f(-1.75,0.75);
    glVertex2f(-0.75,0.75);
    glVertex2f(0.75,0.50);
    glVertex2f(-1.75,0.50);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("Fuel Yellow");
    glVertex2f(-0.75,0.50);
    glVertex2f(-0.75,0.75);
    glVertex2f(1.25,0.75);
    glVertex2f(1.25,0.50);
    glVertex2f(-0.75,0.50);
    glEnd();


    glBegin(GL_POLYGON);
  //  glColor3ub(238, 226, 34  );//Y
    set_color("Fuel Yellow");
    glVertex2f(0.0,0.75);
    glVertex2f(0.25,0.75);
    glVertex2f(0.25,1.50);
    glVertex2f(0.0,1.66);
    glVertex2f(0.0,0.75);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("BcraneRoom");
    glVertex2f(-1.75,0.75);
    glVertex2f(-1.75,1.75);
    glVertex2f(0.0,1.75);
    glVertex2f(0.0,0.75);
    glVertex2f(-1.75,0.75);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("window");
    glVertex2f(-1.50,1.00);
    glVertex2f(-1.50,1.50);
    glVertex2f(-1.00,1.50);
    glVertex2f(-1.00,1.00);
    glVertex2f(-1.50,1.00);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("Fuel Yellow");
    glVertex2f(-1.00,1.75);
    glVertex2f(-1.25,2.00);
    glVertex2f(-1.25,2.50);
    glVertex2f(-0.16,1.75);
    glVertex2f(1.00,1.75);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(97, 106, 107 );//J-1
    glVertex2f(-1.75,2.00);
    glVertex2f(-1.75,2.50);
    glVertex2f(-1.25,2.50);
    glVertex2f(-1.25,2.00);
    glVertex2f(-1.75,2.00);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(97, 106, 107 );//J-2
    glVertex2f(-1.75,2.50);
    glVertex2f(-1.75,3.00);
    glVertex2f(-1.25,3.00);
    glVertex2f(-1.25,2.50);
    glVertex2f(-1.75,2.50);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(44, 62, 80 );
    glVertex2f(-1.75,2.50);
    glVertex2f(-1.25,2.50);
    glEnd();




    glBegin(GL_POLYGON);
    //glColor3ub(251, 236, 1 );//Pull-1 //236, 223, 27
    set_color("Fuel Yellow");
    glVertex2f(-1.25,2.25);
    glVertex2f(-1.25,2.50);
    glVertex2f(1.25,4.00);
    glVertex2f(1.25,3.75);
    glVertex2f(-1.25,2.25);
    glEnd();

    glBegin(GL_POLYGON);
   // glColor3ub(251, 236, 1 );//Pull-2-Y
    set_color("Fuel Yellow");
    glVertex2f(1.25,4.00);
    glVertex2f(3.25,2.00);
    glVertex2f(3.25,1.75);
    glVertex2f(1.25,3.75);
    glVertex2f(1.25,4.00);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("Fuel Yellow");
   // glColor3ub(251, 236, 1 );//Pull-3-Y
    glVertex2f(0.00,3.25);
    glVertex2f(3.25,2.00);
    glVertex2f(3.25,1.75);
    glVertex2f(0.00,3.00);
    glVertex2f(0.00,3.25);
    glEnd();

    glBegin(GL_POLYGON);
   // glColor3ub(251, 236, 1 );//Pull-4-Y
    set_color("Fuel Yellow");
    glVertex2f(0.25,0.75);
    glVertex2f(1.75,2.50);
    glVertex2f(1.75,2.25);
    glVertex2f(0.50,0.75);
    glVertex2f(0.25,0.75);
    glEnd();

    // Rope
    glBegin(GL_LINES);
    glColor3ub(27, 38, 49);
    glVertex2f(3.02,1.75);
    glVertex2f(3.02,0.50);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(27, 38, 49);
    glVertex2f(3.49,1.75);
    glVertex2f(3.49,0.50);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(27, 38, 49);
    glVertex2f(3.00,0.50);
    glVertex2f(3.25,-0.25);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(27, 38, 49);
    glVertex2f(3.50,0.50);
    glVertex2f(3.25,-0.25);
    glEnd();

    //
    glBegin(GL_LINES);
    glColor3ub(27, 38, 49);
    glVertex2f(3.25,-0.25);
    glVertex2f(2.25,-0.75);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(27, 38, 49);
    glVertex2f(3.25,-0.25);
    glVertex2f(2.75,-0.75);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(27, 38, 49);
    glVertex2f(3.25,-0.25);
    glVertex2f(4.00,-0.75);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(27, 38, 49);
    glVertex2f(3.25,-0.25);
    glVertex2f(4.50,-0.75);
    glEnd();



    //Container
    glBegin(GL_POLYGON);
   set_color("BcraneContainer");
    glVertex2f(2.25,-0.75);
    glVertex2f(4.50,-0.75);
    glVertex2f(4.50,-1.50);
    glVertex2f(2.25,-1.50);
    glVertex2f(2.25,-0.75);
    glEnd();





    circle(0.232,3.25,1.75,151, 149, 128);
    circle(0.232,3.25,0.50,151, 149, 128);



}

void Adjust_craneBg(){

    // CraneBg_1

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(.5,.5,1);
    glTranslatef(48,23.51,0);
    CraneBg_1();
    glPopMatrix();

}

void WareHouse_1(){

    glBegin(GL_POLYGON);
    set_color("Jazzberry");
    glVertex2f(26,12.5);
    glVertex2f(26,11.25);
    glVertex2f(29,11.25);
    glVertex2f(29,12.5);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("Maroon");
    glVertex2f(29,12.5);
    glVertex2f(29,11.25);
    glVertex2f(30.5,11.25);
    glVertex2f(30.5,12.5);
    glEnd();

}

void Adjust_WareHouse1(){

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(1,1,1);
    glTranslatef(0,-.5,0);
    WareHouse_1();
    glPopMatrix();

}

void Houses_1(){


    glBegin(GL_POLYGON);
    set_color("Neon");
    glVertex2f(28,13);
    glVertex2f(28,10.75);
    glVertex2f(32,10.75);
    glVertex2f(32,13);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("LNeon");
    glVertex2f(30.5,14.75);
    glVertex2f(30.5,13);
    glVertex2f(32.5,13);
    glVertex2f(32.5,14.75);
    glEnd();

}

void Houses_2(string color){

    glBegin(GL_POLYGON);
    set_color(color);
    glVertex2f(1,12.25);
    glVertex2f(1,10.75);
    glVertex2f(4.75,10.75);
    glVertex2f(4.75,12.25);
    glEnd();

}

void Adjust_Houses_2(){

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(1.3,1.3,1);
    glTranslatef(-1,-2.47,0);
    Houses_2("Neon");
    glPopMatrix();


    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(1.5,.8,1);
    glTranslatef(2,2.47,0);
    Houses_2("LNeon");
    glPopMatrix();



    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(1.3,1.3,1);
    glTranslatef(10.5,-2.47,0);
    Houses_2("LNeon");
    glPopMatrix();


    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(1,1,1);
    glTranslatef(12,0,0);
    Houses_2("Neon");
    glPopMatrix();

}

void Sea_border_1(){

    glBegin(GL_POLYGON);
    set_color("Emperor");
    glVertex2f(0,10);
    glVertex2f(32,10);
    glVertex2f(32,10.35);
    glVertex2f(0,10.35);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("Scorpion");
    glVertex2f(0,10.35);
    glVertex2f(32,10.35);
    glVertex2f(32,10.75);
    glVertex2f(0,10.75);
    glEnd();
}

void Sea_1(){


    //  top to bottom

    //1
    glBegin(GL_POLYGON);
    set_color("1");
    glVertex2f(0,10);
    glVertex2f(0,5);
    glVertex2f(32,5);
    glVertex2f(32,10);
    glEnd();

    //2

    glBegin(GL_POLYGON);
    set_color("2");
    glVertex2f(0,9);
    glVertex2f(0,5);
    glVertex2f(32,5);
    glVertex2f(32,7.5);
    glVertex2f(27,8);
    glVertex2f(19.25,8.50);
    glVertex2f(12.50,7.75);
    glVertex2f(5,8);
    glEnd();


    //3
    glBegin(GL_POLYGON);
    set_color("3");
    glVertex2f(0,7);
    glVertex2f(0,5);
    glVertex2f(32,5);
    glVertex2f(32,6.25);
    glVertex2f(20,7.0);
    glEnd();

    // 4
    glBegin(GL_POLYGON);
    set_color("4");
    glVertex2f(0,5);
    glVertex2f(0,0);
    glVertex2f(2,0);
    glVertex2f(7,5);
    glEnd();


    // light color

    int r = 235, g = 245, b =  251;

    designSeaLine(6,2,3.59,3.59, r,g,b);

    designSeaLine(6,2,2.59, 3.10,r,g,b);

    designSeaLine(6,2,  5.20, 4.2,r,g,b);

    designSeaLine2(3,1,  1,5.12, r,g,b);

    designSeaLine2(3,1, 6.8,9.7, r,g,b);

    designSeaLine2(5,0.8,  0.6,12.12, r,g,b);


}

void Cloud(float radius, float cX, float cY){

    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            set_color("cloud");
            float pi=3.1416;
            float A=(i*2*pi)/400;
            float r=radius;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+cX,y+cY);
        }
    glEnd();

}

void CloudSet(){

    glPushMatrix();
    glScalef(0.6,0.6,1);
    glTranslatef( 1+cloudX,12,0);
    Cloud(1,6.5 ,14);
    Cloud(1,8 ,14);
    Cloud(1, 9.5,14);
    glPopMatrix();

    glPushMatrix();
    glScalef(0.6,0.6,1);
    glTranslatef( 12+cloudX,14,0);
    Cloud(1,6.5 ,14);
    Cloud(1,8 ,14);
    Cloud(1, 9.5,14);
    glPopMatrix();


    glPushMatrix();
    glScalef(0.6,0.6,1);
    glTranslatef( 24+cloudX,10,0);
    Cloud(1,6.5 ,14);
    Cloud(1,8 ,14);
    Cloud(1, 9.5,14);
    glPopMatrix();

    glPushMatrix();
    glScalef(0.6,0.6,1);
    glTranslatef( 36+cloudX,12,0);
    Cloud(1,6.5 ,14);
    Cloud(1,8 ,14);
    Cloud(1, 9.5,14);
    glPopMatrix();

}

void background_1(){

    sky_1();
    Adjust_Houses_2();
    Adjust_craneBg();
    Houses_1();
    Sea_1();
    Sea_border_1();
    Adjust_WareHouse1() ;
    Building_1();
    Adjust_Window();
    CloudSet();
    More_StreetLight();
}

void road_design(){



    //1
    glBegin(GL_POLYGON);
    set_color("Emperor");
    glVertex2f(30.0,2);
    glVertex2f(30.0,0);
    glVertex2f(32.0,0);
    glVertex2f(32.0,3.5);
    glEnd();

    //2
    glBegin(GL_POLYGON);
    set_color("Emperor");
    glVertex2f(26,2);
    glVertex2f(26.0,0);
    glVertex2f(30.0,0);
    glVertex2f(30.0,2);
    glEnd();

    //3
    glBegin(GL_POLYGON);
    set_color("Emperor");
    glVertex2f(24,1.25);
    glVertex2f(24.0,0);
    glVertex2f(26.0,0);
    glVertex2f(26.0,2);
    glEnd();

    //4
    glBegin(GL_POLYGON);
    set_color("Emperor");
    glVertex2f(20.25,1);
    glVertex2f(20.25,0);
    glVertex2f(24,0);
    glVertex2f(24,1.25);
    glEnd();

    //5

    glBegin(GL_POLYGON);
    set_color("Emperor");
    glVertex2f(16,1.75);
    glVertex2f(16,0);
    glVertex2f(20.25,0);
    glVertex2f(20.25,1);
    glEnd();

    //6
    glBegin(GL_POLYGON);
    set_color("Emperor");
    glVertex2f(14,1.75);
    glVertex2f(14,0);
    glVertex2f(16,0);
    glVertex2f(16,1.75);
    glEnd();

    //7
    glBegin(GL_POLYGON);
    set_color("Emperor");
    glVertex2f(10,1.25);
    glVertex2f(10,0);
    glVertex2f(14,0);
    glVertex2f(14,1.75);
    glEnd();

    //8
    glBegin(GL_POLYGON);
    set_color("Emperor");
    glVertex2f(7,2.25);
    glVertex2f(7,0);
    glVertex2f(10,0);
    glVertex2f(10,1.25);
    glEnd();

    //9
    glBegin(GL_POLYGON);
    set_color("Emperor");
    glVertex2f(6.25,3.25);
    glVertex2f(6.25,0);
    glVertex2f(7,0);
    glVertex2f(7,2.25);
    glEnd();

    //10
    glBegin(GL_POLYGON);
    set_color("Emperor");
    glVertex2f(6.25,3.25);
    glVertex2f(4.25,0);
    glVertex2f(6.25,0);
    glEnd();

    //11
    glBegin(GL_POLYGON);
    set_color("Emperor");
    glVertex2f(7,4.75);
    glVertex2f(2.50 ,0);
    glVertex2f(4.5 ,0);
    glEnd();

}

void Road_1(){

    glBegin(GL_POLYGON);
    set_color("Scorpion");
    glVertex2f(2.0,0);
    glVertex2f(32.0,0);
    glVertex2f(32.0,5.0);
    glVertex2f(7.0,5.0);
    glEnd();

    // border side
    glBegin(GL_POLYGON);
    set_color("Thunder");
    glVertex2f(2.0,0);
    glVertex2f(2.5,0.0);
    glVertex2f(2.5,0.0);
    glVertex2f(7.25,5.0);
    glVertex2f(7.0,5.0);
    glEnd();

    // bordertop
    glBegin(GL_POLYGON);
    set_color("Thunder");
    glVertex2f(7.0,5.0);
    glVertex2f(32.0,5.0);
    glVertex2f(32.0,5.25);
    glVertex2f(7.0,5.25);
    glEnd();

    road_design();

}

void containerModel_1(){

    //container 1
    glBegin(GL_POLYGON);
    glColor3ub(245, 176, 65);
    glVertex2f(1,11);
    glVertex2f(4,11);
    glVertex2f(4,12);
    glVertex2f(1,12);
    glEnd();

    // top 1
    glBegin(GL_POLYGON);
    glColor3ub(250, 215, 160);
    glVertex2f(1,12);
    glVertex2f(1.25,12);
    glVertex2f(1.25,12.25);
    glEnd();

    // container 2
    glBegin(GL_POLYGON);
    glColor3ub(46, 134, 193);
    glVertex2f(4,11);
    glVertex2f(6,11);
    glVertex2f(6,12);
    glVertex2f(4,12);
    glEnd();


    // container 3
    glBegin(GL_POLYGON);
    glColor3ub(25, 111, 61);
    glVertex2f(6,11);
    glVertex2f(7,11);
    glVertex2f(7,12);
    glVertex2f(6,12);
    glEnd();

    // side 3
    glBegin(GL_POLYGON);
    glColor3ub(30, 132, 73);
    glVertex2f(7,12);
    glVertex2f(7,11);
    glVertex2f(7.25,11.25);
    glVertex2f(7.25,12.25);
    glEnd();

    // top 3
    glBegin(GL_POLYGON);
    glColor3ub(34, 153, 84);
    glVertex2f(6.25,12);
    glVertex2f(7.0,12);
    glVertex2f(7.25,12.25);
    glVertex2f(6.50,12.25);
    glEnd();

    // container 4
    glBegin(GL_POLYGON);
    glColor3ub(231, 76, 60);
    glVertex2f(1.25,12);
    glVertex2f(3,12);
    glVertex2f(3,13);
    glVertex2f(1.25,13);
    glEnd();

    // top 4
    glBegin(GL_POLYGON);
    glColor3ub(236, 112, 99);
    glVertex2f(1.25,13);
    glVertex2f(3,13);
    glVertex2f(3.25,13.25);
    glVertex2f(1.50,13.25);
    glEnd();


    // container 5
    glBegin(GL_POLYGON);
    glColor3ub(212, 172, 13);
    glVertex2f(3,12);
    glVertex2f(5,12);
    glVertex2f(5,13);
    glVertex2f(3,13);
    glEnd();

    // top 5
    glBegin(GL_POLYGON);
    glColor3ub(241, 196, 15);
    glVertex2f(3,13);
    glVertex2f(5,13);
    glVertex2f(5.25,13.25);
    glVertex2f(3.25,13.25);
    glEnd();


    // container 6
    glBegin(GL_POLYGON);
    glColor3ub(36, 113, 163);
    glVertex2f(5,12);
    glVertex2f(6.25,12);
    glVertex2f(6.25,13);
    glVertex2f(5,13);
    glEnd();

    // 3d side 6
    glBegin(GL_POLYGON);
    glColor3ub(41, 128, 185);
    glVertex2f(6.25,12);
    glVertex2f(6.5,12.25);
    glVertex2f(6.5,13.25);
    glVertex2f(6.25,13);
    glEnd();

    // 3d top 6
    glBegin(GL_POLYGON);
    glColor3ub(84, 153, 199);
    glVertex2f(5,13);
    glVertex2f(6.25,13);
    glVertex2f(6.50,13.25);
    glVertex2f(5.25,13.25);
    glEnd();

    // container 1
    designSeaLine2(1.65,0.8, 1.6 ,15,  248, 196, 113);
    designSeaLine2(1,0.3, 1.8 , 38,  243, 156, 18);
    designSeaLine2(1,0.3, 2.6 , 37.5,  156, 100, 12);
    designSeaLine2(1,0.3, 2.9 , 38.7,  156, 100, 12);


    design3(0.3,0.5,  4.52, 23.13, 0,0,0,0, 156, 100, 12);
    design3(0.3,0.5,  6.52, 23.13, 0,0,0,0, 156, 100, 12);
    design3(0.3,0.5,  9.52, 23.13, 0,0,0,0, 156, 100, 12);
    design3(0.3,0.5,  11.52, 23.13, 0,0,0,0, 156, 100, 12);

    // container 2

    design3(0.3,0.5, 14.52, 23.0, 0,0,0,0, 174, 214, 241);
    design3(0.3,0.5, 15.52, 23.0, 0,0,0,0, 133, 193, 233);
    design3(0.3,0.5, 16.52, 23.0, 0,0,0,0, 36, 113, 163);
    design3(0.3,0.5, 17.52, 23.0, 0,0,0,0, 31, 97, 141);
    design3(0.3,0.5, 18.52, 23.0, 0,0,0,0, 26, 82, 118);

    designSeaLine2(1,0.3, 4.9 , 37.2,  0,0,0);
    designSeaLine2(1,0.3, 4.9 , 38.7,  52, 152, 219);
    designSeaLine2(1,0.3, 4.9 , 40,  21, 67, 96);

   // container 3


   design3(0.3,0.5, 22.52, 23.0, 0,0,0,0, 40, 180, 99);
   design3(0.3,0.5, 22.52, 23.0, 0,0,0,0, 40, 180, 99);
   design3(0.3,0.5, 23.52, 23.0, 0,0,0,0, 11, 83, 69);
   design3(0.3,0.5, 24.0, 23.18, 0,0,0,0, 46, 204, 113);

    // container 4
    design3(0.3,0.5,  4.52, 25.13, 0,0,0,0, 245, 183, 177);
    design3(0.3,0.5,  5.32, 25.13, 0,0,0,0, 203, 67, 53);
    design3(0.3,0.5,  6.32, 25.13, 0,0,0,0, 176, 58, 46);
    design3(0.3,0.5,  7.32, 25.13, 0,0,0,0, 148, 49, 38);
    design3(0.3,0.5,  8.32, 25.13, 0,0,0,0, 148, 49, 38);
    design3(0.3,0.5,  9.32, 25.13, 0,0,0,0, 148, 49, 38);
    designSeaLine2(1,0.3, 2.2 , 40.7,  169, 50, 38);
    designSeaLine2(1,0.3, 2.2 , 42.7,  169, 50, 38);
    designSeaLine2(1,0.3, 2.3 , 43.96,  100, 30, 22);

    // Contain 5

    designSeaLine2(1,0.3, 3.9 , 41.6,  244, 208, 63);
    designSeaLine2(1,0.3, 3.9 , 42.6,  183, 149, 11);
    designSeaLine2(1,0.3, 4.0 , 43.96,  249, 231, 159);

    design3(0.3,0.5,  11.32, 25.13, 0,0,0,0, 247, 220, 111);
    design3(0.3,0.5,  12.32, 25.13, 0,0,0,0, 183, 149, 11);
    design3(0.3,0.5,  14.32, 25.13, 0,0,0,0, 154, 125, 10);

    // container 6


    designSeaLine2(0.6,0.3, 9.5 , 42.6,  21, 67, 96);
    designSeaLine2(0.6,0.3, 9.5 , 41.6,  21, 67, 96);
    designSeaLine2(0.6,0.3, 9.5 , 42.3,  26, 82, 118);
    designSeaLine2(0.6,0.3, 9.5 , 41.3,  26, 82, 118);
    designSeaLine2(0.6,0.3, 9.65 ,44.1,  26, 82, 118);




}

void container_shadow(){

    glBegin(GL_POLYGON);
    set_color("Emperor");
    glVertex2f(7.25,5);
    glVertex2f(7.25,3.5);
    glVertex2f(9.50,3.50);
    glVertex2f(9.50,3.75);
    glVertex2f(10.25,3.75);
    glVertex2f(10.25,4);
    glVertex2f(10.75,4);
    glVertex2f(10.75,5);
    glEnd();


    glBegin(GL_POLYGON);
    set_color("Emperor");
    glVertex2f(11.5,5);
    glVertex2f(11.5,3.5);
    glVertex2f(15.25,3.75);
    glVertex2f(15.25,4.25);
    glVertex2f(17.75,4.25);
    glVertex2f(17.75,5);
    glEnd();


    // arm shadow right


    glBegin(GL_POLYGON);
    set_color("Emperor");
    glVertex2f(11.75,3);
    glVertex2f(11.5,2.75);
    glVertex2f(16,2.25);
    glVertex2f(16,2.75);
    glEnd();


    glBegin(GL_POLYGON);
    set_color("Emperor");
    glVertex2f(12.75,3.75);
    glVertex2f(12.5,3.5);
    glVertex2f(15.5,3);
    glVertex2f(15.5,3.5);

    glEnd();
}

void Container_2(){

    container_shadow();
    // Right  to left
    glPushMatrix();
    glScalef(0.8,0.8,1);
    glTranslatef(14,-5,0);
    containerModel_1();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.7,0.7,1);
    glTranslatef(14,-5,0);
    containerModel_1();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.7,0.7,1);
    glTranslatef(9.5,-4,0);
    containerModel_1();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.5,0.5,1);
    glTranslatef(13,-3,0);
    containerModel_1();
    glPopMatrix();


}

void Container_3(){

    // Front side
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(0.8,0.8,1);
    glTranslatef(14,-10,0);
    containerModel_1();
    glPopMatrix();


    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(1,1,1);
    glTranslatef(12.5,-11.5,0);
    containerModel_1();
    glPopMatrix();

}

void Container_4(){

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(movecX,movecY,0.0f);

    //body
    glBegin(GL_POLYGON);
    glColor3ub(23, 107, 135);
    glVertex2f(1.50, 3.0);
    glVertex2f(1.50, 2.0);
    glVertex2f(3.0, 2.0);
    glVertex2f(3.0, 3.0);
    glEnd();

    //top
    glBegin(GL_POLYGON);
    glColor3ub(100, 204, 197);
    glVertex2f(1.50, 3.0);
    glVertex2f(3.0, 3.0);
    glVertex2f(3.25, 3.25);
    glVertex2f(1.75,3.25);
    glEnd();

    // side
    glBegin(GL_POLYGON);
    glColor3ub(4, 54, 74);
    glVertex2f(3, 3.0);
    glVertex2f(3, 2.0);
    glVertex2f(3.25, 2.25);
    glVertex2f(3.25, 3.25);
    glEnd();

    // shade
    glBegin(GL_POLYGON);
    glColor3ub(66, 125, 157);
    glVertex2f(1.50, 3.0);
    glVertex2f(1.50, 2.0);
    glVertex2f(3.0, 2.00);
    glVertex2f(2, 2.50);
    glEnd();

    glPopMatrix();
}

void container5(){

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(3,3,1);
    glTranslatef(4,-10.25,0);
    containerModel_1();
    glPopMatrix();


}

void ship_shades(){

    // left shade
    glBegin(GL_POLYGON);
    set_color("Cship_shadow");
    glVertex2f(0,1.15);
    glVertex2f(0,0);
    glVertex2f(1.50,2);
    glVertex2f(3.50,3.15);
    glVertex2f(3,3.15);
    glEnd();
    //right shade
    glBegin(GL_POLYGON);
    set_color("Cship_shadow");
    glVertex2f(0.75,0);
    glVertex2f(1.50,0);
    glVertex2f(4.25,2.75);
    glEnd();

     //head design shaded
    glBegin(GL_POLYGON);
    set_color("Cship_shadow");
    glVertex2f(5.25,4.0);
    glVertex2f(4.75,5.0);
    glVertex2f(4.25,5.0);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("Cship_shadow");
    glVertex2f(4.25,5.0);
    glVertex2f(3.25,4.0);
    glVertex2f(4.75,5.0);
    glEnd();

}

void Ship_1(){

    // ship floor
    glBegin(GL_POLYGON);

    set_color("Cship_floor");
    glVertex2f(0.0,0.0);
    glVertex2f(2.0,0.0);
    glVertex2f(5.0,3.0);
    glVertex2f(3.0,3.25);
    glVertex2f(0.0,1.25);
    glEnd();

    // right side
    glBegin(GL_POLYGON);
    set_color("ship_side");
    glVertex2f(5.0,3.0);
    glVertex2f(5.25,4.0);
    glVertex2f(4.75,3.50);
    glVertex2f(4.75,2.75);
    glEnd();


    glBegin(GL_POLYGON);
    set_color("ship_side");
    glVertex2f(4.50,2.50);
    glVertex2f(4.75,2.75);
    glVertex2f(4.75,3.25);
    glEnd();


    //ship head
    glBegin(GL_POLYGON);
    set_color("Cship_floor");
    glVertex2f(5.25,4.0);
    glVertex2f(4.75,5.0);
    glVertex2f(4.25,5.0);
    glVertex2f(3.25,4.0);
    glEnd();

    // stairs like top

    glBegin(GL_POLYGON);
    set_color("Crail");
    glVertex2f(3.25,4.0);
    glVertex2f(3.25,3.75);
    glVertex2f(5.0,3.75);
    glVertex2f(5.25,4.0);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("Japonica");
    glVertex2f(3.25,3.75);
    glVertex2f(3.0,3.50);
    glVertex2f(4.75,3.50);
    glVertex2f(5.0,3.75);
    glEnd();

    glBegin(GL_POLYGON);

    set_color("Crail");
    glVertex2f(3.0,3.50);
    glVertex2f(3.0,3.25);
    glVertex2f(4.75,3.25);
    glVertex2f(4.75,3.50);
    glEnd();

    // gap fill up
    glBegin(GL_POLYGON);
    set_color("Cship_floor");
    glVertex2f(3.0,3.25);
    glVertex2f(4.50,2.50);
    glVertex2f(4.75,3.25);
    glEnd();

    // left side wall
    glBegin(GL_POLYGON);
    set_color("ship_side");
    glVertex2f(0.0,2.00);
    glVertex2f(0.0,1.25);
    glVertex2f(3.0,3.25);
    glVertex2f(3.0,3.50);
    glVertex2f(3.25,3.75);
    glVertex2f(3.25,4.00);
    glEnd();

    // right side wall
    glBegin(GL_POLYGON);
      set_color("ship_side");
    glVertex2f(1.50,0);
    glVertex2f(2.0,0);
    glVertex2f(4.50,2.50);
    glVertex2f(4.50,3.00);
    glEnd();

    // border right side
    glBegin(GL_POLYGON);
    set_color("Ship_Border");
    glVertex2f(1.85,0);
    glVertex2f(2.0,0);
    glVertex2f(4.50,2.50);
    glVertex2f(4.50,2.65);
    glEnd();

    ship_shades();

}

void Light_1(){

	glBegin(GL_POLYGON);
    set_color("Red light");
    glVertex2f(1,3);
    glVertex2f(1,1);
    glVertex2f(2,1);
    glVertex2f(2,3);
    glEnd();
}

void Adjust_light(){

    // top
    glPushMatrix();
    glScalef(.1,.1,0);
    glTranslatef(53,160.25,0);
    Light_1();
    glPopMatrix();

    //roof
    glPushMatrix();
    glScalef(.1,.1,0);
    glTranslatef(65,145.35,0);
    Light_1();
    glPopMatrix();

}

void Ship_2(){

    container5();

	glBegin(GL_POLYGON);
    set_color("ship_side");
    glVertex2f(-12.0,7.0);
    glVertex2f(-1.0,7.0);
    glVertex2f(1.50,3.25);
    glVertex2f(3.00,3.25);
    glVertex2f(3.0,-1.0);
    glVertex2f(-12.0,-1.0);
    glVertex2f(-12.0,7.0);
    glEnd();


    glBegin(GL_POLYGON);
    set_color("ship_side");
    glVertex2f(3.0,3.25);
    glVertex2f(36.75,3.25);
    glVertex2f(36.75,-1.0);
    glVertex2f(3.0,-1.0);
    glVertex2f(3.0,3.25);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("ship_side");
    glVertex2f(36.75,3.25);
    glVertex2f(38.0,6.0);
    glVertex2f(44.0,6.0);
    glVertex2f(40.0,-1.00);
    glVertex2f(36.75,-1.00);
    glVertex2f(36.75,3.25);
    glEnd();

    // bottom border

    glBegin(GL_POLYGON);
    set_color("Ship_Border");
    glVertex2f(-12.0,-1.0);
    glVertex2f(40.0,-1.0);
    glVertex2f(39.0,-2.00);
    glVertex2f(-11.0,-2.0);
    glVertex2f(-12.0,-1.0);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("ship_side1");//yellow
    glVertex2f(-12.0,6.0);
    glVertex2f(-2.50,6.0);
    glVertex2f(-2.50,5.50);
    glVertex2f(-12.0,5.50);
    glVertex2f(-12.0,6.0);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("ship_side1");//yellow
    glVertex2f(-2.50,6.0);
    glVertex2f(-2.00,6.0);
    glVertex2f(0.50,2.50);
    glVertex2f(0.25,2.00);
    glVertex2f(-2.25,5.50);
    glVertex2f(-2.50,5.50);
    glVertex2f(-2.50,6.0);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("ship_side1");//yellow
    glVertex2f(0.50,2.50);
    glVertex2f(3.00,2.50);
    glVertex2f(3.0,2.0);
    glVertex2f(0.25,2.00);
    glVertex2f(0.5,2.50);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("ship_side1");//yellow
    glVertex2f(0.50,2.50);
    glVertex2f(37.50,2.50);
    glVertex2f(38.0,2.0);
    glVertex2f(0.25,2.00);
    glVertex2f(0.5,2.50);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("ship_side1");//yellow
    glVertex2f(37.50,2.50);
    glVertex2f(38.75,5.50);
    glVertex2f(39.25,5.0);
    glVertex2f(38.0,2.00);
    glVertex2f(37.50,2.50);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("ship_side1");//yellow
    glVertex2f(38.75,5.50);
    glVertex2f(43.75,5.50);
    glVertex2f(43.45,4.99);
    glVertex2f(39.25,5.00);
    glVertex2f(38.75,5.50);
    glEnd();

    glBegin(GL_POLYGON);//white
    set_color("Firefly");
    glVertex2f(-11.50,7.00);
    glVertex2f(-11.50,8.75);
    glVertex2f(-6.75,8.75);
    glVertex2f(-6.75,7.00);
    glVertex2f(-11.50,7.00);
    glEnd();
    glBegin(GL_POLYGON); //white
    set_color("chimney");
    glVertex2f(-11.00,8.75);
    glVertex2f(-9.25,16.25);
    glVertex2f(-6.75,16.25);
    glVertex2f(-6.75,8.75);
    glVertex2f(-11.00,8.75);
    glEnd();
    glBegin(GL_POLYGON);
   // glColor3ub(5, 156, 65); //green
    set_color("Firefly");
    glVertex2f(-9.50,15.25);
    glVertex2f(-6.75,15.25);
    glVertex2f(-6.75,15.00);
    glVertex2f(-9.55,15.00);
    glVertex2f(-9.50,15.25);
    glEnd();
    glBegin(GL_POLYGON);
   // glColor3ub(5, 156, 65); //green
    set_color("Firefly");
    glVertex2f(-9.96,13.25);
    glVertex2f(-6.75,13.25);
    glVertex2f(-6.75,13.00);
    glVertex2f(-10.00,13.00);
    glVertex2f(-9.96,13.25);
    glEnd();
    glBegin(GL_POLYGON);
   // glColor3ub(232, 239, 16); //yellow
    set_color("White");
    glVertex2f(-9.55,15.00);
    glVertex2f(-6.75,15.00);
    glVertex2f(-6.75,13.25);
    glVertex2f(-9.96,13.25);
    glVertex2f(-9.55,15.00);
    glEnd();

    glBegin(GL_POLYGON);//ash chimney duck 1
    glColor3ub(97, 106, 107);
    glVertex2f(-8.00,16.25);
    glVertex2f(-8.00,17.25);
    glVertex2f(-8.50,17.75);
    glVertex2f(-8.25,18.25);
    glVertex2f(-7.50,17.50);
    glVertex2f(-7.25,17.00);
    glVertex2f(-7.00,16.75);
    glVertex2f(-7.00,16.25);
    glVertex2f(-8.00,16.25);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("ship_body");// off-white
    glVertex2f(-6.00,7.00);
    glVertex2f(-6.00,13.00);
    glVertex2f(-1.00,13.00);
    glVertex2f(-1.00,7.00);
    glVertex2f(-6.00,7.00);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("Off white"); // off-white
    glVertex2f(-1.00,11.75);
    glVertex2f(4.00,11.75);
    glVertex2f(4.00,3.25);
    glVertex2f(1.50,3.25);
    glVertex2f(-1.00,7.00);
    glVertex2f(-1.00,11.75);
    glEnd();

    // Minor details
    glBegin(GL_POLYGON);
    glColor3ub(229, 232, 232);
    glVertex2f(-1.00,13.00);
    glVertex2f(3.00,13.00);
    glVertex2f(3.00,11.75);
    glVertex2f(-1.00,11.75);
    glVertex2f(-1.00,13.00);
    glEnd();


    //T
    glBegin(GL_POLYGON);
    glColor3ub(178, 186, 187);
    glVertex2f(3.00,11.75);
    glVertex2f(3.00,13.00);
    glVertex2f(4.00,13.00);
    glVertex2f(4.00,11.75);
    glVertex2f(3.00,11.75);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("ship_body2");
    glVertex2f(4.00,10.75);
    glVertex2f(4.00,13.00);
    glVertex2f(9.50,13.00);
    glVertex2f(9.50,10.75);
    glVertex2f(4.00,10.75);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("ship_body2");
    glVertex2f(9.50,11.50);
    glVertex2f(9.50,13.00);
    glVertex2f(11.50,13.00);
    glVertex2f(11.50,11.50);
    glVertex2f(9.50,11.50);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("ship_body2");
    glVertex2f(4.00,9.00);
    glVertex2f(4.00,10.75);
    glVertex2f(9.50,10.75);
    glVertex2f(9.50,9.00);
    glVertex2f(4.00,9.00);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("ship_body2");
    glVertex2f(4.00,3.25);
    glVertex2f(4.00,9.00);
    glVertex2f(9.50,9.00);
    glVertex2f(9.50,3.25);
    glVertex2f(4.00,3.25);
    glEnd();

    // Railing
    glBegin(GL_POLYGON);
    set_color("Railing");
    glVertex2f(-5.75,13.00);
    glVertex2f(-5.75,14.50);
    glVertex2f(12.50,14.50);
    glVertex2f(11.50,13.00);
    glVertex2f(-5.75,13.00);
    glEnd();
    ///

    glBegin(GL_POLYGON);
    set_color("chimney"); // chimney 2
    glVertex2f(-5.50,14.50);
    glVertex2f(-3.50,14.50);
    glVertex2f(-3.50,15.25);
    glVertex2f(-5.25,15.25);
    glVertex2f(-5.50,14.50);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("chimney");  // chimney 2
    glVertex2f(-5.22,15.50);
    glVertex2f(-5.00,16.25);
    glVertex2f(-3.50,16.25);
    glVertex2f(-3.50,15.50);
    glVertex2f(-5.22,15.50);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("Firefly"); //yellow // chimney 2
    glVertex2f(-5.22,15.50);
    glVertex2f(-3.50,15.50);
    glVertex2f(-3.50,15.25);
    glVertex2f(-5.29,15.25);
    glVertex2f(-5.22,15.50);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(81, 90, 90); // chimney duck 2
    glVertex2f(-4.50,16.25);
    glVertex2f(-4.50,17.00);
    glVertex2f(-5.00,17.50);
    glVertex2f(-4.75,18.00);
    glVertex2f(-4.00,17.25);
    glVertex2f(-3.75,16.75);
    glVertex2f(-3.75,16.25);
    glVertex2f(-4.50,16.25);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("Top_floor"); // building
    glVertex2f(-3.00,14.50);
    glVertex2f(-3.00,16.00);
    glVertex2f(10.85,15.99);
    glVertex2f(10.00,14.50);
    glVertex2f(-3.00,14.50);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(93, 64, 55 );
    glVertex2f(-3.00,16.00);
    glVertex2f(-3.00,16.25);
    glVertex2f(11.00,16.25);
    glVertex2f(10.85,15.99);
    glVertex2f(-3.00,16.00);
    glEnd();

    glBegin(GL_POLYGON);
    //glColor3ub(0, 150, 136 );//green-Cw-1
    set_color("ship_window");
    glVertex2f(-2.50,15.50);
    glVertex2f(-0.50,15.50);
    glVertex2f(-0.50,15.00);
    glVertex2f(-2.50,15.00);
    glEnd();

    glBegin(GL_POLYGON);
    //glColor3ub(0, 150, 136 );//green-CW-2
    set_color("ship_window");
    glVertex2f(0.50,15.00);
    glVertex2f(0.50,15.50);
    glVertex2f(2.00,15.50);
    glVertex2f(2.00,15.00);
    glVertex2f(0.50,15.00);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("ship_window");//green-CW-3
    glVertex2f(4.00,15.25);
    glVertex2f(3.75,15.75);
    glVertex2f(4.75,15.75);
    glVertex2f(4.75,15.25);
    glVertex2f(4.00,15.25);
    glEnd();

    glBegin(GL_POLYGON);    //green-CW-4
    set_color("ship_window");
    glVertex2f(5.50,15.25);
    glVertex2f(5.50,15.75);
    glVertex2f(6.75,15.75);
    glVertex2f(6.75,15.25);
    glVertex2f(5.50,15.25);
    glEnd();
    glBegin(GL_POLYGON);

    set_color("ship_window");    //green-CW-5
    glVertex2f(7.50,15.25);
    glVertex2f(7.50,15.75);
    glVertex2f(9.00,15.75);
    glVertex2f(9.00,15.25);
    glVertex2f(7.50,15.25);
    glEnd();
    glBegin(GL_POLYGON);

    //green-CW-6'
    set_color("ship_window");
    glVertex2f(9.50,15.25);
    glVertex2f(9.50,15.75);
    glVertex2f(10.50,15.75);
    glVertex2f(10.00,15.25);
    glVertex2f(9.50,15.25);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(189, 189, 189);//stand-W
    glVertex2f(3.50,16.25);
    glVertex2f(3.50,18.50);
    glVertex2f(4.50,18.50);
    glVertex2f(4.50,16.25);
    glVertex2f(3.50,16.25);
    glEnd();
    glBegin(GL_POLYGON);//Gray
    glColor3ub(158, 158, 158);
    glVertex2f(3.50,18.50);
    glVertex2f(3.50,18.75);
    glVertex2f(5.50,18.75);
    glVertex2f(5.50,18.50);
    glVertex2f(3.50,18.50);
    glEnd();

    glBegin(GL_POLYGON);//W
    glColor3ub(189, 189, 189);
    glVertex2f(3.75,18.75);
    glVertex2f(3.75,21.25);
    glVertex2f(4.50,21.25);
    glVertex2f(4.50,18.75);
    glVertex2f(3.75,18.75);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(158, 158, 158);//Gray
    glVertex2f(3.25,21.25);
    glVertex2f(3.25,21.75);
    glVertex2f(6.25,21.75);
    glVertex2f(6.25,21.25);
    glVertex2f(3.25,21.25);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(189, 189, 189);//W
    glVertex2f(3.75,21.75);
    glVertex2f(3.75,26.00);
    glVertex2f(4.50,26.00);
    glVertex2f(4.50,21.75);
    glVertex2f(3.75,21.75);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(158, 158, 158);//Gray-CM TOP

    glVertex2f(3.75,26.00);
    glVertex2f(3.25,26.50);
    glVertex2f(5.00,26.50);
    glVertex2f(4.50,26.00);
    glVertex2f(3.75,26.00);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(158, 158, 158);//Gray-CM
    glVertex2f(3.75,26.50);
    glVertex2f(3.25,27.00);
    glVertex2f(5.00,27.00);
    glVertex2f(4.50,26.50);
    glVertex2f(3.75,26.50);
    glEnd();

    glBegin(GL_POLYGON);
   // glColor3ub(247, 8, 8 );//Flag-Red
    set_color("Maroon");
    glVertex2f(3.75,24.50);
    glVertex2f(1.75,24.50);
    glVertex2f(1.75,25.50);
    glVertex2f(3.75,25.50);
    glVertex2f(3.75,24.50);
    glEnd();

    glBegin(GL_POLYGON);
    //glColor3ub(0, 150, 136 );//green-W-1
    set_color("ship_window");
    glVertex2f(-5.50,11.75);
    glVertex2f(-5.00,11.75);
    glVertex2f(-5.00,12.25);
    glVertex2f(-5.50,12.25);
    glVertex2f(-5.50,11.75);
    glEnd();

    glBegin(GL_POLYGON);
    //glColor3ub(0, 150, 136 );//green-W-2
    set_color("ship_window");
    glVertex2f(-2.75,11.75);
    glVertex2f(-2.25,11.75);
    glVertex2f(-2.25,12.25);
    glVertex2f(-2.75,12.25);
    glVertex2f(-2.75,11.75);
    glEnd();

    glBegin(GL_POLYGON);
   // glColor3ub(0, 150, 136 );//green-W-3
    set_color("ship_window");
    glVertex2f(-4.75,9.50);
    glVertex2f(-4.25,9.50);
    glVertex2f(-4.25,10.00);
    glVertex2f(-4.75,10.00);
    glVertex2f(-4.75,9.50);
    glEnd();

    glBegin(GL_POLYGON);
   // glColor3ub(0, 150, 136 );//green-W-4
    set_color("ship_window");
    glVertex2f(-1.75,9.50);
    glVertex2f(-1.25,9.50);
    glVertex2f(-1.25,10.00);
    glVertex2f(-1.75,10.00);
    glVertex2f(-1.75,9.50);
    glEnd();

    glBegin(GL_POLYGON);
  //  glColor3ub(0, 150, 136 );//green-W-5
    set_color("ship_window");
    glVertex2f(-5.50,7.25);
    glVertex2f(-5.00,7.25);
    glVertex2f(-5.00,7.75);
    glVertex2f(-5.50,7.75);
    glVertex2f(-5.50,7.25);
    glEnd();

    glBegin(GL_POLYGON);
  //  glColor3ub(0, 150, 136 );//green-W-6
     set_color("ship_window");
    glVertex2f(-3.50,7.25);
    glVertex2f(-3.00,7.25);
    glVertex2f(-3.00,7.75);
    glVertex2f(-3.50,7.75);
    glVertex2f(-3.50,7.25);
    glEnd();

    glBegin(GL_POLYGON);
   // glColor3ub(0, 150, 136 );//green-W-7
    set_color("ship_window");
    glVertex2f(-1.75,7.25);
    glVertex2f(-1.25,7.25);
    glVertex2f(-1.25,7.75);
    glVertex2f(-1.75,7.75);
    glVertex2f(-1.75,7.25);
    glEnd();

    glBegin(GL_POLYGON);
   // glColor3ub(0, 150, 136 );//green-W-8
     set_color("ship_window");
    glVertex2f(0.50,9.50);
    glVertex2f(1.25,9.50);
    glVertex2f(1.25,10.00);
    glVertex2f(0.50,10.00);
    glVertex2f(0.50,9.50);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("ship_window");
    glVertex2f(2.75,9.50);
    glVertex2f(3.25,9.50);
    glVertex2f(3.25,10.00);
    glVertex2f(2.75,10.00);
    glVertex2f(2.75,9.50);
    glEnd();
    glBegin(GL_POLYGON);
     set_color("ship_window");//green-W-10
    glVertex2f(0.75,7.25);
    glVertex2f(1.25,7.25);
    glVertex2f(1.25,7.75);
    glVertex2f(0.75,7.75);
    glVertex2f(0.75,7.25);
    glEnd();
    glBegin(GL_POLYGON);
     set_color("ship_window");//green-W-11
    glVertex2f(2.75,7.25);
    glVertex2f(3.25,7.25);
    glVertex2f(3.25,7.75);
    glVertex2f(2.75,7.75);
    glVertex2f(2.75,7.25);
    glEnd();
    glBegin(GL_POLYGON);
    set_color("ship_window");//green-W-12
    glVertex2f(4.25,12.00);
    glVertex2f(4.75,12.00);
    glVertex2f(4.75,12.50);
    glVertex2f(4.25,12.50);
    glVertex2f(4.25,12.00);
    glEnd();
    glBegin(GL_POLYGON);
    set_color("ship_window");//green-W-13
    glVertex2f(5.75,12.00);
    glVertex2f(7.25,12.00);
    glVertex2f(7.25,12.50);
    glVertex2f(5.75,12.50);
    glVertex2f(7.75,12.00);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("ship_window");//green-W-14
    glVertex2f(8.25,12.00);
    glVertex2f(8.75,12.00);
    glVertex2f(8.75,12.50);
    glVertex2f(8.25,12.50);
    glVertex2f(8.25,12.00);
    glEnd();

    glBegin(GL_POLYGON);
     set_color("ship_window");//green-W-15
    glVertex2f(4.50,9.50);
    glVertex2f(5.50,9.50);
    glVertex2f(5.50,10.00);
    glVertex2f(4.50,10.00);
    glVertex2f(4.50,9.50);
    glEnd();

    glBegin(GL_POLYGON);
     set_color("ship_window");//green-W-16
    glVertex2f(6.75,9.50);
    glVertex2f(8.00,9.50);
    glVertex2f(8.00,10.00);
    glVertex2f(6.75,10.00);
    glVertex2f(6.75,9.50);
    glEnd();

    glBegin(GL_POLYGON);
     set_color("ship_window");//green-W-17
    glVertex2f(8.50,9.50);
    glVertex2f(9.25,9.50);
    glVertex2f(9.25,10.00);
    glVertex2f(8.50,10.00);
    glVertex2f(8.50,9.50);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("ship_window");//green-W-18
    glVertex2f(5.25,7.25);
    glVertex2f(5.75,7.25);
    glVertex2f(5.75,7.75);
    glVertex2f(5.25,7.75);
    glVertex2f(5.25,7.25);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("ship_window");//green-W-19
    glVertex2f(6.50,7.25);
    glVertex2f(7.00,7.25);
    glVertex2f(7.00,7.75);
    glVertex2f(6.50,7.75);
    glVertex2f(6.50,7.25);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("ship_window");//green-W-20
    glVertex2f(7.75,7.25);
    glVertex2f(8.25,7.25);
    glVertex2f(8.25,7.75);
    glVertex2f(7.75,7.75);
    glVertex2f(7.75,7.25);
    glEnd();

    // floor lines
    glBegin(GL_POLYGON);
    glColor3ub(208, 211, 212);
    glVertex2f(-6.00,10.75);
    glVertex2f(-6.00,11.00);
    glVertex2f(9.50,11.00);
    glVertex2f(9.50,10.75);
    glVertex2f(-6.00,10.75);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(208, 211, 212);
    glVertex2f(-6.00,8.75);
    glVertex2f(-6.00,9.00);
    glVertex2f(9.50,9.00);
    glVertex2f(9.50,8.75);
    glVertex2f(-6.00,8.75);
    glEnd();


}

void Adjust_ship(){


    glPushMatrix();
    glScalef(0.26,0.27,1);
    glTranslatef(15,38,0);
    Ship_2();
    glPopMatrix();

    Adjust_light();

}

void Magnet(){

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(moveXh,moveY,0.0f);

    circle(0.25, 2, 6,241, 196, 15);
    circle(0.15, 2, 6,255, 255,255 );
    circle(0.25, 2.75, 6,241, 196, 15 );
    circle(0.15, 2.75, 6,255,255,255 );

    // Lines inside circle:

    glBegin(GL_LINES);
    glLineWidth(2);
    glColor3ub(123, 36, 28);
    glVertex2f(1.75,6);
    glVertex2f(2.25,6);

    glVertex2f(2.0,6.25);
    glVertex2f(2.0,5.75);

    glVertex2f(2.5,6);
    glVertex2f(3.0,6);

    glVertex2f(2.75,6.25);
    glVertex2f(2.75,5.75);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(241, 196, 15);
    glVertex2f(1.50,5.75);
    glVertex2f(1.50,5.50);
    glVertex2f(3.25,5.50);
    glVertex2f(3.25,5.75);
    glEnd();

    // design

    glBegin(GL_POLYGON);
    glColor3ub(243, 156, 18);
    glVertex2f(1.50,5.75);
    glVertex2f(1.50,5.50);
    glVertex2f(1.55,5.54);
    glVertex2f(2.93,5.63);
    glVertex2f(1.57,5.68);
    glEnd();

    glPopMatrix();

}

void LineString(){


    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glLineWidth(5);
    glVertex2f(2.50,7.0);
    glVertex2f(2.0,6.25 + stringY);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glLineWidth(5);
    glVertex2f(2.50,7.0);
    glVertex2f(2.75,6.25 + stringY);
    glEnd();

}

void hook(){


    circle(.5,2.5,7,128, 139, 150);
    circle(.25,2.5,7,171, 178, 185);
    LineString();

    //1
    glBegin(GL_POLYGON);
    glColor3ub(241, 196, 15);
    glVertex2f(1.75,7.75);
    glVertex2f(1.75,6.75);
    glVertex2f(2.0,6.50);
    glVertex2f(2.0,7.75);
    glEnd();

    //2
    glBegin(GL_POLYGON);
    glColor3ub(241, 196, 15);
    glVertex2f(2.75,8.50);
    glVertex2f(2.75,7.25);
    glVertex2f(3.0,7.25);
    glVertex2f(3.0,8.50);

    glEnd();

    //3
    glBegin(GL_POLYGON);
    glColor3ub(212, 172, 13);
    glVertex2f(2,7.25);
    glVertex2f(2,6.50);
    glVertex2f(3.0,7.25);
    glVertex2f(3.0,7.75);
    glEnd();

    //4
    glBegin(GL_POLYGON);
    glColor3ub(244, 208, 63);
    glVertex2f(2,7.25);
    glVertex2f(3.0,7.75);
    glVertex2f(2.75,7.75);
    glVertex2f(2.0,7.40);
    glEnd();

    //5
    glBegin(GL_POLYGON);
    glColor3ub(241, 196, 15);
    glVertex2f(2.75,8.50);
    glVertex2f(2.75,8.25);
    glVertex2f(3.0,8.25);
    glVertex2f(3.0,8.50);
    glEnd();


    design1(0.9,0.9,3.1,8.4,30,0,0,0,246, 221, 204);

    design1(0.5,0.9,3.84,8.47,30,0,0,0,252, 243, 207);

}

void Crane1Design(){
    design2(0.7,1,16.32,3.73,00,0,0,0,192, 57, 43);
    design3(1,1,11.32,6.73,00,0,0,0,236, 112, 99);
    design3(1.1,2.3,5.32,2.3,00,0,0,0,241, 148, 138);
}

void Crane1(){

    // arm 1
    glBegin(GL_POLYGON);
    glColor3ub(169, 50, 38);
    glVertex2f(5.5,2.75);
    glVertex2f(6.25,2.75);
    glVertex2f(6.25,8.25);
    glVertex2f(5.5,8.25);
    glEnd();

    // 3d like effect

    glBegin(GL_POLYGON);
    glColor3ub(123, 36, 28);
    glVertex2f(6.25,2.75);
    glVertex2f(6.50,3.0);
    glVertex2f(6.50,8.0);
    glVertex2f(6.25,8.0);
    glEnd();

    // arm 2

    glBegin(GL_POLYGON);
    glColor3ub(169, 50, 38 );
    glVertex2f(10.75,2.75);
    glVertex2f(11.5,2.75);
    glVertex2f(11.5,8.25);
    glVertex2f(10.75,8.25);
    glEnd();

    // 3d like effect

    glBegin(GL_POLYGON);
    glColor3ub(123, 36, 28);
    glVertex2f(11.5,2.75);
    glVertex2f(11.75,3.0);
    glVertex2f(11.75,8.0);
    glVertex2f(11.5,8.0);
    glEnd();

//-----------------------------------
    // Bar

    glBegin(GL_POLYGON);
    glColor3ub(214, 137, 16);
    glVertex2f(1.5,8.0);
    glVertex2f(15.0,8.0);
    glVertex2f(15.50,8.25);
    glVertex2f(2.0,8.25);
    glEnd();

    // 3d effect width bar

    glBegin(GL_POLYGON);
    glColor3ub(185, 119, 14);
    glVertex2f(1.5,7.75);
    glVertex2f(15.0,7.75);
    glVertex2f(15.0,8.0);
    glVertex2f(1.50,8.0);
    glEnd();

    // 3d effect side bar

    glBegin(GL_POLYGON);
    glColor3ub(185, 119, 14);
    glVertex2f(15.0,7.75);
    glVertex2f(15.50,8.0);
    glVertex2f(15.50,8.25);
    glVertex2f(15.0,8.0);
    glEnd();

}

void Crane2(){

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(1.0,0.75,0);
    Crane1();
    glPopMatrix();

    design4(1.1,2.3,6.62,2.23,00,0,0,0,192, 57, 43);
}

void Wh_door(){

    glBegin(GL_POLYGON);
    set_color("Hawaiian Tan");
    glVertex2f(21,3.25);
    glVertex2f(21,2.5);
    glVertex2f(22.50,2.5);
    glVertex2f(22.50,3.25);
    glEnd();

    // shadow
    glBegin(GL_POLYGON);
    set_color("Hairy Heath");
    glVertex2f(21,3.25);
    glVertex2f(21,2.5);
    glVertex2f(22.50,2.5);
    glVertex2f(21.50,2.75);
    glEnd();

    // window

    float a = 0.50;

    glBegin(GL_POLYGON);
    set_color("window");
    glVertex2f(21.50,5.75);
    glVertex2f(21.50,5.25);
    glVertex2f(22,5.25);
    glVertex2f(22,5.75);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("window");
    glVertex2f(22.50,5.75);
    glVertex2f(22.50,5.25);
    glVertex2f(23,5.25);
    glVertex2f(23,5.75);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("window");
    glVertex2f(23.50,5.75);
    glVertex2f(23.50,5.25);
    glVertex2f(24,5.25);
    glVertex2f(24,5.75);
    glEnd();

}

void Warehouse_shadow(){

        glBegin(GL_LINES);
        glLineWidth(4);
        set_color("Hairy Heathy");
        glVertex2f(26.0, 6.75);
        glVertex2f(26.0, 4.0);
        glEnd();

        glBegin(GL_POLYGON);
        set_color("warehouse1");
        glVertex2f(26.0, 4.0);
        glVertex2f(29.0, 4.0);
        glVertex2f(29.0, 5.25);
        glVertex2f(27.25, 5.25);
        glVertex2f(27.25, 6.75);
        glVertex2f(26.0, 6.75);
        glEnd();

}

void Warehouse_2(){

    // 1
    glBegin(GL_POLYGON);
    set_color("Tango");
    glVertex2f(20.25,4);
    glVertex2f(20.25,2.25);
    glVertex2f(23.25,2.25);
    glVertex2f(23.25,4.0);
    glEnd();

    // border top 1
    glBegin(GL_POLYGON);
    set_color("White");
    glVertex2f(20,4);
    glVertex2f(23.25,4.0);
    glVertex2f(23.25,4.25);
    glVertex2f(20.0,4.25);
    glEnd();

    // border bottom 1
    glBegin(GL_POLYGON);
    set_color("Tango_Dark");
    glVertex2f(20.25,2.50);
    glVertex2f(20.25,2.25);
    glVertex2f(23.25,2.25);
    glVertex2f(23.25,2.50);
    glEnd();


    //2
    glBegin(GL_POLYGON);
    set_color("Hawaiian Tan");
    glVertex2f(23.25,4.0);
    glVertex2f(23.25,2.25);
    glVertex2f(24.50,3.0);
    glVertex2f(24.50,4.75);
    glEnd();

    // border top 2
    glBegin(GL_POLYGON);
    set_color("White");
    glVertex2f(23.25,4.25);
    glVertex2f(23.25,4.0);
    glVertex2f(24.50,4.75);
    glVertex2f(24.50,5.0);
    glEnd();


    //3
    glBegin(GL_POLYGON);
    set_color("Tango");
    glVertex2f(21.25,6.0);
    glVertex2f(21.25,5.0);
    glVertex2f(24.50,5.0);
    glVertex2f(24.50,6.0);
    glEnd();

    // 3d side
    glBegin(GL_POLYGON);
    set_color("Hawaiian Tan");
    glVertex2f(24.50,6.25);
    glVertex2f(24.50,3.0);
    glVertex2f(26,3.75);
    glVertex2f(26,7);
    glEnd();


    // border top
    glBegin(GL_POLYGON);
    set_color("White");
    glVertex2f(20.75,6.25);
    glVertex2f(20.75,6.00);
    glVertex2f(24.50,6.0);
    glVertex2f(24.50,6.25);
    glEnd();

    // top side border
    glBegin(GL_POLYGON);
    set_color("White");
    glVertex2f(24.50,6.25);
    glVertex2f(24.50,6.0);
    glVertex2f(26,6.75);
    glVertex2f(26,7);
    glEnd();


    // new 4
    glBegin(GL_POLYGON);
    set_color("Tango");
    glVertex2f(26,7);
    glVertex2f(26,3.75);
    glVertex2f(30.50,3.75);
    glVertex2f(30.50,7);
    glEnd();


    // border bottom
    glBegin(GL_POLYGON);
    set_color("Tango_Dark");
    glVertex2f(26,4);
    glVertex2f(26,3.75);
    glVertex2f(30.50,3.75);
    glVertex2f(30.50,4);
    glEnd();

    // top
    glBegin(GL_POLYGON);
    set_color("White");
    glVertex2f(26,7);
    glVertex2f(26,6.75);
    glVertex2f(30.50,6.75);
    glVertex2f(30.50,7);
    glEnd();

    // border bottom 2 & 3
    glBegin(GL_POLYGON);
    set_color("Tango_Dark");
    glVertex2f(23.25,2.50);
    glVertex2f(23.25,2.25);
    glVertex2f(26,3.75);
    glVertex2f(26,4);
    glEnd();

    // new 4 3d effect side

    glBegin(GL_POLYGON);
    set_color("Hairy Heath");
    glVertex2f(30.50,7);
    glVertex2f(30.50,3.75);
    glVertex2f(31,4);
    glVertex2f(31,6.75);
    glEnd();

    // bottom border
    glBegin(GL_POLYGON);
    set_color("Tango_Dark");
    glVertex2f(30.50,4);
    glVertex2f(30.50,3.75);
    glVertex2f(31,4);
    glVertex2f(31,4.25);
    glEnd();


    // top border
    glBegin(GL_POLYGON);
    set_color("White");
    glVertex2f(30.50,7);
    glVertex2f(30.50,6.75);
    glVertex2f(31,6.50);
    glVertex2f(31,6.75);
    glEnd();


    // yard
    glBegin(GL_POLYGON);
    set_color("Emperor");
    glVertex2f(23.25,2.25);
    glVertex2f(30.50,3.75);
    glVertex2f(26,3.75);
    glEnd();


    // roof 1
    glBegin(GL_POLYGON);
    glColor3ub(20, 90, 50);
    glVertex2f(21.25,5.0);
    glVertex2f(20.0,4.25);
    glColor3ub(25, 111, 61);
    glVertex2f(23.25,4.25);
    glColor3ub(30, 132, 73);
    glVertex2f(24.50,5.0);

    glEnd();

    // roof 2

    glBegin(GL_POLYGON);
    glColor3ub(20, 90, 50);
    glVertex2f(20.75,6.25);
    glColor3ub(25, 111, 61);
    glVertex2f(24.50,6.25);
    glColor3ub(30, 132, 73);
    glVertex2f(26.0,7.0);
    glColor3ub(34, 153, 84);
    glVertex2f(22.0,7.0);
    glEnd();

    Wh_door();
    Warehouse_shadow();

    // dark to light
   // glColor3ub(20, 90, 50);
   // glColor3ub(25, 111, 61);
   // glColor3ub(30, 132, 73);
   // glColor3ub(34, 153, 84);
}


void Truck_1(){

    //Object: Truck

    // Back site of the truck

	glBegin(GL_POLYGON);
    glColor3ub(46, 134, 193 );
   // glColor3ub(33, 97, 140);
    glVertex2f(-9.75,-3.75);
    glVertex2f(-9.75,-0.50);
    glVertex2f(-4.00,-0.50);
    glVertex2f(-4.00,-3.75);
    glVertex2f(-9.75,-3.75);
    glEnd();

    glBegin(GL_POLYGON);
   // glColor3ub(20, 148, 242 );
    glColor3ub(0,125,218);
    glVertex2f(-9.50,-1.50);
    glVertex2f(-9.50,-0.75);
    glVertex2f(-4.25,-0.75);
    glVertex2f(-4.25,-1.50);
    glVertex2f(-9.50,-1.50);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(48, 183, 229);
    glColor3ub(3,168,224);
    glVertex2f(-9.50,-2.50);
    glVertex2f(-9.50,-1.50);
    glVertex2f(-4.25,-1.50);
    glVertex2f(-4.25,-2.50);
    glVertex2f(-9.50,-2.50);
    glEnd();

    glBegin(GL_POLYGON);
   // glColor3ub(38, 176, 183);
    glColor3ub(0,125,218);
    glVertex2f(-9.50,-2.50);
    glVertex2f(-9.50,-2.50);
    glVertex2f(-4.25,-2.50);
    glVertex2f(-4.25,-3.50);
    glVertex2f(-9.50,-3.50);
    glEnd();

    //Front side of the Truck
    glBegin(GL_POLYGON);
    glColor3ub(27, 38, 49);
    glVertex2f(-4.00,-1.75);
    glVertex2f(-3.75,-1.75);
    glVertex2f(-3.75,-4.25);
    glVertex2f(-4.00,-4.25);
    glVertex2f(-4.00,-1.75);
    glEnd();

    glBegin(GL_POLYGON);
  //  glColor3ub( 241, 196, 15);// Yellow-1
    glColor3ub(0,92,188);
    glVertex2f(-3.75,-3.00);
    glVertex2f(-3.75,-1.50);
    glVertex2f(-1.75,-1.50);
    glVertex2f(-1.00,-2.75);
    glVertex2f(-1.00,-3.00);
    glVertex2f(-3.75,-3.00);
    glEnd();
    glBegin(GL_POLYGON);
  //  glColor3ub( 241, 196, 15);// Yellow-2
    glColor3ub(0,92,188);
    glVertex2f(-3.75,-4.25);
    glVertex2f(-3.75,-3.00);
    glVertex2f(-2.75,-3.00);
    glVertex2f(-2.75,-3.25);
    glVertex2f(-3.25,-3.50);
    glVertex2f(-3.50,-3.75);
    glVertex2f(-3.50,-4.25);
    glVertex2f(-3.75,-4.25);
    glEnd();
    glBegin(GL_POLYGON);
    //glColor3ub( 241, 196, 15);// Yellow-3
    glColor3ub(0,92,188);
    glVertex2f(-2.75,-3.00);
    glVertex2f(-1.00,-3.00);
    glVertex2f(-1.00,-4.00);
    glVertex2f(-2.00,-4.00);
    glVertex2f(-2.00,-3.75);
    glVertex2f(-2.25,-3.50);
    glVertex2f(-2.75,-3.25);
    glVertex2f(-2.75,-3.00);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(27, 38, 49);
    glVertex2f(-2.00,-4.25);
    glVertex2f(-2.00,-4.00);
    glVertex2f(-1.00,-4.00);
    glVertex2f(-1.00,-4.25);
    glVertex2f(-2.00,-4.25);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(234, 236, 238); //Light
    glVertex2f(-1.25,-3.50);
    glVertex2f(-1.25,-3.25);
    glVertex2f(-1.00,-3.25);
    glVertex2f(-1.00,-3.50);
    glVertex2f(-1.25,-3.50);
    glEnd();

    //Under container
    glBegin(GL_POLYGON);
    glColor3ub(93, 109, 126);
    glVertex2f(-4.75,-4.00);
    glVertex2f(-4.75,-3.75);
    glVertex2f(-4.00,-3.75);
    glVertex2f(-4.00,-4.00);
    glVertex2f(-4.75,-4.00);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(44, 62, 80 );
    glVertex2f(-7.50,-3.75);
    glVertex2f(-4.75,-3.75);
    glVertex2f(-4.75,-4.25);
    glVertex2f(-7.25,-4.25);
    glVertex2f(-7.25,-4.00);
    glVertex2f(-7.50,-3.75);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(178, 186, 187);//1
    glVertex2f(-7.00,-3.75);
    glVertex2f(-6.50,-3.75);
    glVertex2f(-6.50,-4.00);
    glVertex2f(-7.00,-4.00);
    glVertex2f(-7.00,-3.75);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(178, 186, 187);//2
    glVertex2f(-6.25,-4.00);
    glVertex2f(-6.25,-3.75);
    glVertex2f(-5.00,-3.75);
    glVertex2f(-5.00,-4.00);
    glVertex2f(-6.25,-4.00);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(229, 35, 29);// red
    glVertex2f(-9.50,-4.25);
    glVertex2f(-9.50,-3.75);
    glVertex2f(-9.25,-3.75);
    glVertex2f(-9.25,-4.25);
    glVertex2f(-9.50,-4.25);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(93, 109, 126);
    glVertex2f(-9.25,-4.25);
    glVertex2f(-9.25,-3.75);
    glVertex2f(-8.75,-3.75);
    glVertex2f(-8.75,-4.25);
    glVertex2f(-9.25,-4.25);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(44, 62, 80 );
    glVertex2f(-8.75,-4.00);
    glVertex2f(-8.75,-3.75);
    glVertex2f(-8.50,-3.75);
    glVertex2f(-8.75,-4.00);
    glEnd();

    // Truck window
     glBegin(GL_POLYGON);
    glColor3ub(213, 216, 220 );
    glVertex2f(-3.25,-2.50);
    glVertex2f(-3.25,-1.75);
    glVertex2f(-2.00,-1.75);
    glVertex2f(-1.25,-2.75);
    glVertex2f(-3.25,-2.50);
    glEnd();



    circle(0.59,-2.75,-4.00,28, 40, 51 ); //front big
    circle(0.33,-2.75,-4.00,128,139,150);// front small
    circle(0.59,-8.00,-4.00,28,40,51);// back big
    circle(0.33,-8.00,-4.00,128, 139, 150);//back small

}

void Adjust_Truck(){

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(0.5,0.5,1);
    glTranslatef(50+truckX,5,0);
    Truck_1();
    glPopMatrix();
}

void background_2(){


    Road_1();
    Warehouse_2();
    Ship_1();
    Container_2();
    Crane2();
    Container_4();
    Container_3();

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(moveXh,0.0f,0.0f);
    hook();
    glPopMatrix();

    Magnet();
    Crane1();
    Crane1Design();

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(moveShip,0.0f,0.0f);
    Adjust_ship();
    glPopMatrix();

    Adjust_Truck();
}

void display1() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    background_1();
    background_2();

    glutSwapBuffers();
    glFlush();
}

void Cranekeyboard(int key, int x, int y) {

    switch (key) {
        case GLUT_KEY_UP:

            if(moveY <= 0){

                moveY += speed ;
                stringY += speed ;


                if(pick == true){
                    if(movecY <= 2.5){
                        movecY += speed ;
                    }
                }
            }

            break;
        case GLUT_KEY_DOWN:

             if(moveY >= -2.5){
                moveY -= speed ;
                stringY -= speed ;

                if(movecY > 0 && pick == true){
                    movecY -=speed ;
                }
            }

            break;
        case GLUT_KEY_LEFT:

             if(moveY >= 0 && moveXh >= 0){

                    moveXh -= speed ;
                    if(pick == true){
                        movecX -= speed ;
                    }

                }

            break;
        case GLUT_KEY_RIGHT:
                if(moveY >= 0 && moveXh <= 12.5){

                    moveXh += speed ;
                    if(pick == true){
                        movecX += speed ;
                    }
                }
            break;
    }
    glutPostRedisplay();
}

void shipAnimation(int value) {

    if(ship_start == true){

     moveShip += shipSpeed;



      if(moveShip  > 31.5f  ){

            moveShip = 31.5;
            ship_start2 = true;
            train_start2 = true;
            currentDisplay = 2;

       }
    }else{
            moveShip = moveShip;
    }

    glutPostRedisplay();
    glutTimerFunc(20, shipAnimation, 0);
}

void CloudMovement(int value){

    cloudX -= 0.02;
    if(cloudX <= -45){
        cloudX = 45;
    }

    glutPostRedisplay();
    glutTimerFunc(20, CloudMovement, 0);

}

void truckMovement(int value){

    if(truckStart == true){

        truckX += 0.05;
        if(truckX >= 35){
            truckX = 50;
        }

    }

    glutPostRedisplay();
    glutTimerFunc(20,truckMovement, 0);

}





//----------------------------------------------------Start of Scenario 2-----------------------------------------------------------------------------


float Ship_position = -105;
float Ship_speed = 0.18;
float Dew_position= -10;
float Dew_speed=0.006;
float cloud_position= -10;
float cloud_speed=0.01;
float train_position = -70;
float train_speed=0.15;


void Sun(){
    if(isDayScene==true)

    {


        glPushMatrix();
        glScalef(7,6,1);
        glTranslatef(2,4.9,0);

        glBegin(GL_POLYGON);

        for(int i=0; i<200; i++)
        {
            set_color("SunC");
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.85;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }


        glEnd();

        glPopMatrix();
    }

}

void Moon(){

    if (isDayScene==false)

    {


    glPushMatrix();
    glScalef(4,4,1);
    glTranslatef(-6,6,0);

    glBegin(GL_POLYGON);

    for(int i=0; i<200; i++)
    {
        set_color("MoonD");
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.85;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y );
    }


    glEnd();

    glPopMatrix();

    }

}

void Dew(){
    glBegin(GL_POLYGON);            // Buildings
	set_color("DewC"); // Yellow
	glVertex2f(8.0f, -6.50f);
	glVertex2f(8.0f, -6.75f);
	glVertex2f(9.0f, -7.25f);
	glVertex2f(10.75f, -7.50f);
	glVertex2f(12.50f, -7.25f);
	glVertex2f(13.25f, -6.75f);
	glVertex2f(10.50f, -6.25f);
	glVertex2f(8.50f, -6.25f);
	glVertex2f(12.50f, -7.25f);
	glEnd();
}

void adjust_dew(){

    glPushMatrix();
    glScalef(5,0.5,0);
    glTranslatef(-5,-12,0);
    Dew();
    glPopMatrix();

    glPushMatrix();
    glScalef(5,0.5,0);
    glTranslatef(-3,-25,0);
    Dew();
    glPopMatrix();

    glPushMatrix();
    glScalef(5,0.5,0);
    glTranslatef(-17,-25,0);
    Dew();
    glPopMatrix();

    glPushMatrix();
    glScalef(5,0.5,0);
    glTranslatef(-10,-29,0);
    Dew();
    glPopMatrix();

    glPushMatrix();
    glScalef(3,0.3,0);
    glTranslatef(-12,-8.6,0);
    Dew();
    glPopMatrix();

    glPushMatrix();
    glScalef(3,0.3,0);
    glTranslatef(-19,-8,0);
    Dew();
    glPopMatrix();


    //

    glPushMatrix();
    glScalef(1,0.3,0);
    glTranslatef(-10,10,0);
    Dew();
    glPopMatrix();

    glPushMatrix();
    glScalef(1.2,0.3,0);
    glTranslatef(-17,8,0);
    Dew();
    glPopMatrix();

    glPushMatrix();
    glScalef(1.2,0.3,0);
    glTranslatef(-32,9,0);
    Dew();
    glPopMatrix();

    glPushMatrix();
    glScalef(1.2,0.3,0);
    glTranslatef(0,10,0);
    Dew();
    glPopMatrix();

    glPushMatrix();
    glScalef(1.2,0.3,0);
    glTranslatef(6,8,0);
    Dew();
    glPopMatrix();

    glPushMatrix();
    glScalef(2,0.3,0);
    glTranslatef(-2,-3,0);
    Dew();
    glPopMatrix();

    glPushMatrix();
    glScalef(2,0.3,0);
    glTranslatef(6,-6,0);
    Dew();
    glPopMatrix();

    glPushMatrix();
    glScalef(3,0.3,0);
    glTranslatef(-28,-6,0);
    Dew();
    glPopMatrix();

     glPushMatrix();
    glScalef(3,0.3,0);
    glTranslatef(-35,-12,0);
    Dew();
    glPopMatrix();

    glPushMatrix();
    glScalef(6,0.5,0);
    glTranslatef(-10,-16,0);
    Dew();
    glPopMatrix();

    glPushMatrix();
    glScalef(6,0.5,0);
    glTranslatef(-15,-12,0);
    Dew();
    glPopMatrix();
}

void Full_Dew(){
    adjust_dew();
}

void Animation_dew(){
    glPushMatrix();
    glTranslatef(Dew_position,0,0);
    Full_Dew();
    glPopMatrix();
}

void buildingwindow(float Sx, float Sy, float Tx, float Ty){
    glPushMatrix();
    glScalef(Sx, Sy,1);
    glTranslatef(Tx,Ty,0);
    glBegin(GL_QUADS);
    set_color("buildingglass");
    glVertex3f(-5.0f, 3.0f, 0.0f);
    glVertex3f(5.0f, 3.0f, 0.0f);
    glVertex3f(5.0f, 5.0f, 0.0f);
    glVertex3f(-5.0f, 5.0f, 0.0f);
    glEnd();
    glPopMatrix();

}

void stars(){
        if (isDayScene==false)

        {


    glBegin(GL_POINTS);
	set_color("nightstars");
	glVertex2f(35.0f, 20.0f);

	glEnd();

    }

    }

void adjust_stars(){

    glPushMatrix();
    glScalef(0.2,0.2,1);
    glTranslatef(130,90,0);
    stars();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.2,0.2,1);
    glTranslatef(90,110,0);
    stars();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.2,0.2,1);
    glTranslatef(20,115,0);
    stars();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.2,0.2,1);
    glTranslatef(37,100,0);
    stars();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.2,0.2,1);
    glTranslatef(50,85,0);
    stars();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.2,0.2,1);
    glTranslatef(70,100,0);
    stars();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.2,0.2,1);
    glTranslatef(60,60,0);
    stars();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.2,0.2,1);
    glTranslatef(110,100,0);
    stars();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.2,0.2,1);
    glTranslatef(100,70,0);
    stars();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.2,0.2,1);
    glTranslatef(140,100,0);
    stars();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.2,0.2,1);
    glTranslatef(80,82,0);
    stars();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.2,0.2,1);
    glTranslatef(10,82,0);
    stars();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.2,0.2,1);
    glTranslatef(0,95,0);
    stars();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.2,0.2,1);
    glTranslatef(160,110,0);
    stars();
    glPopMatrix();


    // Left stars

    glPushMatrix();
    glScalef(0.2,0.2,1);
    glTranslatef(-30,90,0);
    stars();
    glPopMatrix();

   glPushMatrix();
    glScalef(0.2,0.2,1);
    glTranslatef(-50,120,0);
    stars();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.2,0.2,1);
    glTranslatef(-45,70,0);
    stars();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.2,0.2,1);
    glTranslatef(-55,95,0);
    stars();
    glPopMatrix();


   glPushMatrix();
    glScalef(0.2,0.2,1);
    glTranslatef(-90,80,0);
    stars();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.2,0.2,1);
    glTranslatef(-140,95,0);
    stars();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.2,0.2,1);
    glTranslatef(-110,120,0);
    stars();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.2,0.2,1);
    glTranslatef(-180,115,0);
    stars();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.2,0.2,1);
    glTranslatef(-130,75,0);
    stars();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.2,0.2,1);
    glTranslatef(-150,125,0);
    stars();
    glPopMatrix();

   glPushMatrix();
    glScalef(0.2,0.2,1);
    glTranslatef(-170,70,0);
    stars();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.2,0.2,1);
    glTranslatef(-190,85,0);
    stars();
    glPopMatrix();

   glPushMatrix();
    glScalef(0.2,0.2,1);
    glTranslatef(-210,100,0);
    stars();
    glPopMatrix();

   glPushMatrix();
    glScalef(0.2,0.2,1);
    glTranslatef(-230,110,0);
    stars();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.2,0.2,1);
    glTranslatef(-225,70,0);
    stars();
    glPopMatrix();



}

void buildingwindowtwo(float Sx, float Sy, float Tx, float Ty){
    glPushMatrix();
    glScalef(Sx, Sy,1);
    glTranslatef(Tx,Ty,0);
    glBegin(GL_QUADS);
    set_color("buildingglass");
    glVertex3f(1.0f, 2.0f, 0.0f);
    glVertex3f(2.0f, 2.0f, 0.0f);
    glVertex3f(2.0f, 4.0f, 0.0f);
    glVertex3f(1.0f, 4.0f, 0.0f);
    glEnd();
    glPopMatrix();

}

void twintowerwindow(float Sx, float Sy, float Tx, float Ty){
    glPushMatrix();
    glScalef(Sx, Sy,1);
    glTranslatef(Tx,Ty,0);
    glBegin(GL_QUADS);
    set_color("buildingglass");
    glVertex3f(1.0f, 1.0f, 0.0f);
    glVertex3f(3.0f, 1.0f, 0.0f);
    glVertex3f(3.0f, 2.0f, 0.0f);
    glVertex3f(1.0f, 2.0f, 0.0f);
    glEnd();
    glPopMatrix();

}

void bridgeBrike(float Sx, float Sy, float Tx, float Ty){
    glPushMatrix();
    glScalef(Sx, Sy,1);
    glTranslatef(Tx,Ty,0);
    glBegin(GL_QUADS);
    set_color("brick");
    glVertex3f(1.0f, 0.50f, 0.0f);
    glVertex3f(2.0f, 0.50f, 0.0f);
    glVertex3f(2.0f, 0.75f, 0.0f);
    glVertex3f(1.0f, 0.75f, 0.0f);
    glEnd();
    glPopMatrix();

}

void bridgenut(float Sx, float Sy, float Tx, float Ty){
    glPushMatrix();
    glScalef(Sx, Sy,1);
    glTranslatef(Tx,Ty,0);
    glBegin(GL_QUADS);
    set_color("brick");
    glVertex3f(1.0f, 0.25f, 0.0f);
    glVertex3f(1.25f, 0.25f, 0.0f);
    glVertex3f(1.25f, 0.50f, 0.0f);
    glVertex3f(1.0f, 0.50f, 0.0f);
    glEnd();
    glPopMatrix();

}

void drawBuilding(){
    glBegin(GL_POLYGON);            // Buildings
	set_color("bulidingcolor"); // Yellow
	glVertex2f(40.0f, 3.0f);
	glVertex2f(40.0f, 11.0f);
	glVertex2f(36.0f, 11.0f);
	glVertex2f(36.0f, 3.0f);
	glEnd();

    buildingwindow(0.3,0.2,127,50);
    buildingwindow(0.3,0.2,127,45);
    buildingwindow(0.3,0.2,127,40);
    buildingwindow(0.3,0.2,127,35);
    buildingwindow(0.3,0.2,127,30);
    buildingwindow(0.3,0.2,127,25);
    buildingwindow(0.3,0.2,127,20);

	glBegin(GL_POLYGON);            // Buildings
	set_color("frontBuilding"); // Yellow
	glVertex2f(34.0f, 3.0f);
	glVertex2f(34.0f, 14.0f);
	glVertex2f(29.0f, 14.0f);
	glVertex2f(29.0f, 3.0f);
	glEnd();
    buildingwindowtwo(0.5,0.5,60,10);
    buildingwindowtwo(0.5,0.5,62,10);
    buildingwindowtwo(0.5,0.5,60,14);
    buildingwindowtwo(0.5,0.5,62,14);
    buildingwindowtwo(0.5,0.5,60,18);
    buildingwindowtwo(0.5,0.5,62,18);
	glBegin(GL_POLYGON);            // Buildings
	set_color("midBuilding"); // Yellow
	glVertex2f(36.0f, 3.0f);
	glVertex2f(36.0f, 8.0f);
	glVertex2f(32.0f, 8.0f);
	glVertex2f(32.0f, 3.0f);
	glEnd();
    buildingwindow(0.3,0.2,114,35);
    buildingwindow(0.3,0.2,114,30);
    buildingwindow(0.3,0.2,114,25);
    buildingwindow(0.3,0.2,114,20);
    buildingwindow(0.3,0.2,114,15);
// Render now
//upore sob right side ar building
	glBegin(GL_POLYGON);            // Buildings
	set_color("bulidingcolor"); // Yellow
	glVertex2f(28.0f, 3.0f);
	glVertex2f(28.0f, 11.0f);
	glVertex2f(23.0f, 11.0f);
	glVertex2f(23.0f, 3.0f);
	glEnd();
    buildingwindow(0.3,0.2,83,45);
    buildingwindow(0.3,0.2,83,40);
    buildingwindow(0.3,0.2,83,35);
    buildingwindow(0.3,0.2,83,30);
    buildingwindow(0.3,0.2,83,25);
    buildingwindow(0.3,0.2,83,20);
    buildingwindow(0.3,0.2,83,15);
	glBegin(GL_POLYGON);            // Buildings
	set_color("midBuilding"); // Yellow
	glVertex2f(30.0f, 3.0f);
	glVertex2f(30.0f, 9.0f);
	glVertex2f(26.0f, 9.0f);
	glVertex2f(26.0f, 3.0f);
	glEnd();
    buildingwindow(0.3,0.2,93,35);
    buildingwindow(0.3,0.2,93,30);
    buildingwindow(0.3,0.2,93,25);
    buildingwindow(0.3,0.2,93,20);
    buildingwindow(0.3,0.2,93,15);
//right 2nd
    glBegin(GL_POLYGON);            // Buildings
	set_color("bulidingcolor"); // Yellow
	glVertex2f(23.0f, 3.0f);
	glVertex2f(23.0f, 10.0f);
	glVertex2f(18.0f, 10.0f);
	glVertex2f(18.0f, 3.0f);
	glEnd();
    buildingwindowtwo(0.5,0.5,39,10);
    buildingwindowtwo(0.5,0.5,41,14);
    buildingwindowtwo(0.5,0.5,41,6);
	glBegin(GL_POLYGON);            // Buildings
	set_color("frontBuilding"); // Yellow
	glVertex2f(19.0f, 3.0f);
	glVertex2f(19.0f, 9.0f);
	glVertex2f(14.0f, 9.0f);
	glVertex2f(14.0f, 3.0f);
	glEnd();
    buildingwindow(0.3,0.2,55,35);
    buildingwindow(0.3,0.2,55,30);
    buildingwindow(0.3,0.2,55,25);
    buildingwindow(0.3,0.2,55,20);
    buildingwindow(0.3,0.2,55,15);

	glBegin(GL_POLYGON);            // Buildings
	set_color("bulidingcolor"); // Yellow
	glVertex2f(14.0f, 3.0f);
	glVertex2f(14.0f, 12.0f);
	glVertex2f(9.0f, 12.0f);
	glVertex2f(9.0f, 3.0f);
	glEnd();
    buildingwindow(0.3,0.2,39,45);
    buildingwindow(0.3,0.2,39,40);
    buildingwindow(0.3,0.2,39,35);
    buildingwindow(0.3,0.2,39,30);
    buildingwindow(0.3,0.2,39,25);
    buildingwindow(0.3,0.2,39,20);
    buildingwindow(0.3,0.2,39,15);
    glBegin(GL_POLYGON);            // Buildings
	set_color("frontBuilding"); // Yellow
	glVertex2f(10.0f, 3.0f);
	glVertex2f(10.0f, 11.0f);
	glVertex2f(5.0f, 11.0f);
	glVertex2f(5.0f, 3.0f);
	glEnd();
    buildingwindowtwo(0.5,0.5,15,10);
    buildingwindowtwo(0.5,0.5,15,14);
    buildingwindowtwo(0.5,0.5,15,6);
    buildingwindowtwo(0.5,0.5,13,10);
    buildingwindowtwo(0.5,0.5,13,14);
    buildingwindowtwo(0.5,0.5,13,6);
    buildingwindowtwo(0.5,0.5,11,10);
    buildingwindowtwo(0.5,0.5,11,14);
    buildingwindowtwo(0.5,0.5,11,6);


// NEW BUILDINGS

glBegin(GL_POLYGON);            // Buildings
	set_color("bulidingcolor"); // Yellow
	glVertex2f(-40.0f, 3.0f);
	glVertex2f(-40.0f, 11.0f);
	glVertex2f(-36.0f, 11.0f);
	glVertex2f(-36.0f, 3.0f);
	glEnd();
    buildingwindow(0.3,0.2,-127,50);
    buildingwindow(0.3,0.2,-127,45);
    buildingwindow(0.3,0.2,-127,40);
    buildingwindow(0.3,0.2,-127,35);
    buildingwindow(0.3,0.2,-127,30);
    buildingwindow(0.3,0.2,-127,25);
    buildingwindow(0.3,0.2,-127,20);

	glBegin(GL_POLYGON);            // Buildings
	set_color("frontBuilding"); // Yellow
	set_color("frontBuilding"); // Yellow
	glVertex2f(-34.0f, 3.0f);
	glVertex2f(-34.0f, 13.0f);
	glVertex2f(-29.0f, 13.0f);
	glVertex2f(-29.0f, 3.0f);
	glEnd();
    buildingwindowtwo(0.5,0.5,-65,10);
    buildingwindowtwo(0.5,0.5,-62,10);
    buildingwindowtwo(0.5,0.5,-65,14);
    buildingwindowtwo(0.5,0.5,-62,14);
    buildingwindowtwo(0.5,0.5,-65,18);
    buildingwindowtwo(0.5,0.5,-62,18);

//left bildig 1st
    glBegin(GL_POLYGON);            // Buildings
	set_color("bulidingcolor"); // Yellow
	glVertex2f(-36.0f, 3.0f);
	glVertex2f(-36.0f, 8.0f);
	glVertex2f(-32.0f, 8.0f);
	glVertex2f(-32.0f, 3.0f);
	glEnd();
    buildingwindow(0.3,0.2,-114,35);
    buildingwindow(0.3,0.2,-114,30);
    buildingwindow(0.3,0.2,-114,25);
    buildingwindow(0.3,0.2,-114,20);
    buildingwindow(0.3,0.2,-114,15);

	glBegin(GL_POLYGON);            // Buildings
	set_color("bulidingcolor"); // Yellow
	glVertex2f(-28.0f, 3.0f);
	glVertex2f(-28.0f, 11.0f);
	glVertex2f(-23.0f, 11.0f);
	glVertex2f(-23.0f, 3.0f);
	glEnd();
    buildingwindow(0.3,0.2,-83,45);
    buildingwindow(0.3,0.2,-83,40);
    buildingwindow(0.3,0.2,-83,35);
    buildingwindow(0.3,0.2,-83,30);
    buildingwindow(0.3,0.2,-83,25);
    buildingwindow(0.3,0.2,-83,20);
    buildingwindow(0.3,0.2,-83,15);


	glBegin(GL_POLYGON);            // Buildings
	set_color("bulidingcolor");// Yellow
	glVertex2f(-30.0f, 3.0f);
	glVertex2f(-30.0f, 9.0f);
	glVertex2f(-26.0f, 9.0f);
	glVertex2f(-26.0f, 3.0f);
	glEnd();
    buildingwindow(0.3,0.2,-93,35);
    buildingwindow(0.3,0.2,-93,30);
    buildingwindow(0.3,0.2,-93,25);
    buildingwindow(0.3,0.2,-93,20);
    buildingwindow(0.3,0.2,-93,15);

	glBegin(GL_POLYGON);            // Buildings
	set_color("midBuilding"); // Yellow
	glVertex2f(-23.0f, 3.0f);
	glVertex2f(-23.0f, 10.0f);
	glVertex2f(-18.0f, 10.0f);
	glVertex2f(-18.0f, 3.0f);
	glEnd();
    buildingwindowtwo(0.5,0.5,-43,10);
    buildingwindowtwo(0.5,0.5,-41,14);
    buildingwindowtwo(0.5,0.5,-41,6);

	glBegin(GL_POLYGON);            // Buildings
	set_color("bulidingcolor"); // Yellow
	glVertex2f(-19.0f, 3.0f);
	glVertex2f(-19.0f, 9.0f);
	glVertex2f(-14.0f, 9.0f);
	glVertex2f(-14.0f, 3.0f);
	glEnd();
    buildingwindow(0.3,0.2,-55,35);
    buildingwindow(0.3,0.2,-55,30);
    buildingwindow(0.3,0.2,-55,25);
    buildingwindow(0.3,0.2,-55,20);
    buildingwindow(0.3,0.2,-55,15);


	glBegin(GL_POLYGON);            // Buildings
	set_color("midBuilding");// Yellow
	glVertex2f(-14.0f, 3.0f);
	glVertex2f(-14.0f, 12.0f);
	glVertex2f(-9.0f, 12.0f);
	glVertex2f(-9.0f, 3.0f);
	glEnd();
    buildingwindowtwo(0.5,0.5,-25,10);
    buildingwindowtwo(0.5,0.5,-25,14);
    buildingwindowtwo(0.5,0.5,-25,6);
    buildingwindowtwo(0.5,0.5,-23,10);
    buildingwindowtwo(0.5,0.5,-23,14);
    buildingwindowtwo(0.5,0.5,-23,6);
    buildingwindowtwo(0.5,0.5,-21,10);
    buildingwindowtwo(0.5,0.5,-21,14);
    buildingwindowtwo(0.5,0.5,-21,6);
}

void drawBuildingL(){
     glBegin(GL_POLYGON);            // Buildings
	set_color("buildingShadow"); // Yellow
	glVertex2f(40.0f, 3.0f);
	glVertex2f(40.0f, 11.0f);
	glVertex2f(36.0f, 11.0f);
	glVertex2f(36.0f, 3.0f);
	glEnd();
    buildingwindow(0.3,0.2,127,50);
    buildingwindow(0.3,0.2,127,45);
    buildingwindow(0.3,0.2,127,40);
    buildingwindow(0.3,0.2,127,35);
    buildingwindow(0.3,0.2,127,30);
    buildingwindow(0.3,0.2,127,25);
    buildingwindow(0.3,0.2,127,20);

	glBegin(GL_POLYGON);            // Buildings
	set_color("buildingShadow"); // Yellow
	glVertex2f(34.0f, 3.0f);
	glVertex2f(34.0f, 14.0f);
	glVertex2f(29.0f, 14.0f);
	glVertex2f(29.0f, 3.0f);
	glEnd();
    buildingwindowtwo(0.5,0.5,60,10);
    buildingwindowtwo(0.5,0.5,62,10);
    buildingwindowtwo(0.5,0.5,60,14);
    buildingwindowtwo(0.5,0.5,62,14);
    buildingwindowtwo(0.5,0.5,60,18);
    buildingwindowtwo(0.5,0.5,62,18);
	glBegin(GL_POLYGON);            // Buildings
	set_color("buildingShadow"); // Yellow
	glVertex2f(36.0f, 3.0f);
	glVertex2f(36.0f, 8.0f);
	glVertex2f(32.0f, 8.0f);
	glVertex2f(32.0f, 3.0f);
	glEnd();
    buildingwindow(0.3,0.2,114,35);
    buildingwindow(0.3,0.2,114,30);
    buildingwindow(0.3,0.2,114,25);
    buildingwindow(0.3,0.2,114,20);
    buildingwindow(0.3,0.2,114,15);

	glBegin(GL_POLYGON);            // Buildings
	set_color("buildingShadow"); // Yellow
	glVertex2f(28.0f, 3.0f);
	glVertex2f(28.0f, 11.0f);
	glVertex2f(23.0f, 11.0f);
	glVertex2f(23.0f, 3.0f);
	glEnd();
    buildingwindow(0.3,0.2,83,45);
    buildingwindow(0.3,0.2,83,40);
    buildingwindow(0.3,0.2,83,35);
    buildingwindow(0.3,0.2,83,30);
    buildingwindow(0.3,0.2,83,25);
    buildingwindow(0.3,0.2,83,20);
    buildingwindow(0.3,0.2,83,15);
	glBegin(GL_POLYGON);            // Buildings
	set_color("buildingShadow"); // Yellow
	glVertex2f(30.0f, 3.0f);
	glVertex2f(30.0f, 9.0f);
	glVertex2f(26.0f, 9.0f);
	glVertex2f(26.0f, 3.0f);
	glEnd();
    buildingwindow(0.3,0.2,93,35);
    buildingwindow(0.3,0.2,93,30);
    buildingwindow(0.3,0.2,93,25);
    buildingwindow(0.3,0.2,93,20);
    buildingwindow(0.3,0.2,93,15);
//right 2nd
    glBegin(GL_POLYGON);            // Buildings
	set_color("buildingShadow"); // Yellow
	glVertex2f(23.0f, 3.0f);
	glVertex2f(23.0f, 10.0f);
	glVertex2f(18.0f, 10.0f);
	glVertex2f(18.0f, 3.0f);
	glEnd();
    buildingwindowtwo(0.5,0.5,39,10);
    buildingwindowtwo(0.5,0.5,41,14);
    buildingwindowtwo(0.5,0.5,41,6);
	glBegin(GL_POLYGON);            // Buildings
	set_color("buildingShadow"); // Yellow
	glVertex2f(19.0f, 3.0f);
	glVertex2f(19.0f, 9.0f);
	glVertex2f(14.0f, 9.0f);
	glVertex2f(14.0f, 3.0f);
	glEnd();
    buildingwindow(0.3,0.2,55,35);
    buildingwindow(0.3,0.2,55,30);
    buildingwindow(0.3,0.2,55,25);
    buildingwindow(0.3,0.2,55,20);
    buildingwindow(0.3,0.2,55,15);

	glBegin(GL_POLYGON);            // Buildings
	set_color("buildingShadow"); // Yellow
	glVertex2f(14.0f, 3.0f);
	glVertex2f(14.0f, 12.0f);
	glVertex2f(9.0f, 12.0f);
	glVertex2f(9.0f, 3.0f);
	glEnd();
    buildingwindow(0.3,0.2,39,45);
    buildingwindow(0.3,0.2,39,40);
    buildingwindow(0.3,0.2,39,35);
    buildingwindow(0.3,0.2,39,30);
    buildingwindow(0.3,0.2,39,25);
    buildingwindow(0.3,0.2,39,20);
    buildingwindow(0.3,0.2,39,15);
    glBegin(GL_POLYGON);            // Buildings
	set_color("buildingShadow"); // Yellow
	glVertex2f(10.0f, 3.0f);
	glVertex2f(10.0f, 11.0f);
	glVertex2f(5.0f, 11.0f);
	glVertex2f(5.0f, 3.0f);
	glEnd();
    buildingwindowtwo(0.5,0.5,15,10);
    buildingwindowtwo(0.5,0.5,15,14);
    buildingwindowtwo(0.5,0.5,15,6);
    buildingwindowtwo(0.5,0.5,13,10);
    buildingwindowtwo(0.5,0.5,13,14);
    buildingwindowtwo(0.5,0.5,13,6);
    buildingwindowtwo(0.5,0.5,11,10);
    buildingwindowtwo(0.5,0.5,11,14);
    buildingwindowtwo(0.5,0.5,11,6);


// NEW BUILDINGS

glBegin(GL_POLYGON);            // Buildings
	set_color("buildingShadow"); // Yellow
	glVertex2f(-40.0f, 3.0f);
	glVertex2f(-40.0f, 11.0f);
	glVertex2f(-36.0f, 11.0f);
	glVertex2f(-36.0f, 3.0f);
	glEnd();
    buildingwindow(0.3,0.2,-127,50);
    buildingwindow(0.3,0.2,-127,45);
    buildingwindow(0.3,0.2,-127,40);
    buildingwindow(0.3,0.2,-127,35);
    buildingwindow(0.3,0.2,-127,30);
    buildingwindow(0.3,0.2,-127,25);
    buildingwindow(0.3,0.2,-127,20);

	glBegin(GL_POLYGON);            // Buildings
	set_color("buildingShadow"); // Yellow
	glVertex2f(-34.0f, 3.0f);
	glVertex2f(-34.0f, 13.0f);
	glVertex2f(-29.0f, 13.0f);
	glVertex2f(-29.0f, 3.0f);
	glEnd();
    buildingwindowtwo(0.5,0.5,-65,10);
    buildingwindowtwo(0.5,0.5,-62,10);
    buildingwindowtwo(0.5,0.5,-65,14);
    buildingwindowtwo(0.5,0.5,-62,14);
    buildingwindowtwo(0.5,0.5,-65,18);
    buildingwindowtwo(0.5,0.5,-62,18);

//left bildig 1st
    glBegin(GL_POLYGON);            // Buildings
	set_color("buildingShadow"); // Yellow
	glVertex2f(-36.0f, 3.0f);
	glVertex2f(-36.0f, 8.0f);
	glVertex2f(-32.0f, 8.0f);
	glVertex2f(-32.0f, 3.0f);
	glEnd();
    buildingwindow(0.3,0.2,-114,35);
    buildingwindow(0.3,0.2,-114,30);
    buildingwindow(0.3,0.2,-114,25);
    buildingwindow(0.3,0.2,-114,20);
    buildingwindow(0.3,0.2,-114,15);

	glBegin(GL_POLYGON);            // Buildings
	set_color("buildingShadow");// Yellow
	glVertex2f(-28.0f, 3.0f);
	glVertex2f(-28.0f, 11.0f);
	glVertex2f(-23.0f, 11.0f);
	glVertex2f(-23.0f, 3.0f);
	glEnd();
    buildingwindow(0.3,0.2,-83,45);
    buildingwindow(0.3,0.2,-83,40);
    buildingwindow(0.3,0.2,-83,35);
    buildingwindow(0.3,0.2,-83,30);
    buildingwindow(0.3,0.2,-83,25);
    buildingwindow(0.3,0.2,-83,20);
    buildingwindow(0.3,0.2,-83,15);


	glBegin(GL_POLYGON);            // Buildings
	set_color("buildingShadow"); // Yellow
	glVertex2f(-30.0f, 3.0f);
	glVertex2f(-30.0f, 9.0f);
	glVertex2f(-26.0f, 9.0f);
	glVertex2f(-26.0f, 3.0f);
	glEnd();
    buildingwindow(0.3,0.2,-93,35);
    buildingwindow(0.3,0.2,-93,30);
    buildingwindow(0.3,0.2,-93,25);
    buildingwindow(0.3,0.2,-93,20);
    buildingwindow(0.3,0.2,-93,15);

	glBegin(GL_POLYGON);            // Buildings
	set_color("buildingShadow"); // Yellow
	glVertex2f(-23.0f, 3.0f);
	glVertex2f(-23.0f, 10.0f);
	glVertex2f(-18.0f, 10.0f);
	glVertex2f(-18.0f, 3.0f);
	glEnd();
    buildingwindowtwo(0.5,0.5,-43,10);
    buildingwindowtwo(0.5,0.5,-41,14);
    buildingwindowtwo(0.5,0.5,-41,6);

	glBegin(GL_POLYGON);            // Buildings
	set_color("buildingShadow"); // Yellow
	glVertex2f(-19.0f, 3.0f);
	glVertex2f(-19.0f, 9.0f);
	glVertex2f(-14.0f, 9.0f);
	glVertex2f(-14.0f, 3.0f);
	glEnd();
    buildingwindow(0.3,0.2,-55,35);
    buildingwindow(0.3,0.2,-55,30);
    buildingwindow(0.3,0.2,-55,25);
    buildingwindow(0.3,0.2,-55,20);
    buildingwindow(0.3,0.2,-55,15);


	glBegin(GL_POLYGON);            // Buildings
	set_color("buildingShadow"); // Yellow
	glVertex2f(-14.0f, 3.0f);
	glVertex2f(-14.0f, 12.0f);
	glVertex2f(-9.0f, 12.0f);
	glVertex2f(-9.0f, 3.0f);
	glEnd();
    buildingwindowtwo(0.5,0.5,-25,10);
    buildingwindowtwo(0.5,0.5,-25,14);
    buildingwindowtwo(0.5,0.5,-25,6);
    buildingwindowtwo(0.5,0.5,-23,10);
    buildingwindowtwo(0.5,0.5,-23,14);
    buildingwindowtwo(0.5,0.5,-23,6);
    buildingwindowtwo(0.5,0.5,-21,10);
    buildingwindowtwo(0.5,0.5,-21,14);
    buildingwindowtwo(0.5,0.5,-21,6);
}

void drawWater(){

	glBegin(GL_POLYGON);

	//set_color("waterCU")
	glColor3ub(18, 146, 173);//uporer color
	glVertex2f(-41.0f, -8.0f);
	glVertex2f(41.0f, -8.0f);
	glVertex2f(41.0f, 3.0f);
	glVertex2f(-41.0f, 3.0f);
	glEnd();

	glBegin(GL_POLYGON);
	//set_color("waterCD")
	glColor3ub(89,207,230);//nicher color
	glVertex2f(-41.0f, -25.0f);
	glVertex2f(41.0f, -25.0f);
    glColor3ub(18,146,173);//uporer color
	glVertex2f(41.0f, 3.0f);
	glVertex2f(-41.0f, 3.0f);
	glEnd();
}

void drawWaterNight(){
    if (isDayScene == false)

    {

    glBegin(GL_POLYGON);

    //set_color("waterCU")
    glColor3ub(89,207,230);//uporer color
    glVertex2f(-41.0f, -8.0f);
    glVertex2f(41.0f, -8.0f);
    glVertex2f(41.0f, 3.0f);
    glVertex2f(-41.0f, 3.0f);
    glEnd();

    glBegin(GL_POLYGON);
    //set_color("waterCD")
    glColor3ub(18, 146, 173);//nicher color
    glVertex2f(-41.0f, -25.0f);
    glVertex2f(41.0f, -25.0f);
    glColor3ub(18,146,173);//uporer color
    glVertex2f(41.0f, 3.0f);
    glVertex2f(-41.0f, 3.0f);
    glEnd();

    }
}

void skybackground(){

    glBegin(GL_POLYGON);
    set_color("skyCU");
    glVertex2f(-41.0,0.0);
    glVertex2f(41.0,0.0);
    set_color("skyCD");
    glVertex2f(41.0,30);
    glVertex2f(-41.0,30.0);
    glEnd();
}

void BridgeBox(){
	glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(1,-5,0);
    glColor3ub (142, 44, 33);
    glBegin(GL_QUADS);
    glVertex2f(4,0);
    glVertex2f(6,0);
    glVertex2f(6,5);
    glVertex2f(4,5);
    glEnd();
    bridgeBrike(1,1,3,0);
    bridgeBrike(1,1,3,1.5);
    bridgeBrike(1,1,4,1);
    bridgeBrike(1,1,4,2);

    glBegin(GL_QUADS);
    glColor3ub (104,104,104);
    glVertex2f(4,0);
    glColor3ub(47,171,196);
    glVertex2f(7,-4);
    glColor3ub(47,171,196);
    glVertex2f(9,-4);
    glColor3ub (104,104,104);
    glVertex2f(6,0);
    glEnd();

    glColor3ub (66, 56, 54);
    glBegin(GL_QUADS);
    glVertex2f(3,5);
    glVertex2f(7,5);
    glVertex2f(7,6);
    glVertex2f(3,6);
    glEnd();
    glColor3ub (50, 40, 39);
    glBegin(GL_QUADS);
    glVertex2f(2,6);
    glVertex2f(8,6);
    glVertex2f(8,7);
    glVertex2f(2,7);
    glEnd();
	glPopMatrix();

}

void BridgeBoxNight(){

    if (isDayScene == false){

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(1,-5,0);
    glColor3ub (142, 44, 33);
    glBegin(GL_QUADS);
    glVertex2f(4,0);
    glVertex2f(6,0);
    glVertex2f(6,5);
    glVertex2f(4,5);
    glEnd();
    bridgeBrike(1,1,3,0);
    bridgeBrike(1,1,3,1.5);
    bridgeBrike(1,1,4,1);
    bridgeBrike(1,1,4,2);

    glBegin(GL_QUADS);
    glColor3ub (104,104,104);
    glVertex2f(4,0);
    glColor3ub(18,146,173);
    glVertex2f(7,-4);
    glColor3ub(18,146,173);
    glVertex2f(9,-4);
    glColor3ub (104,104,104);
    glVertex2f(6,0);
    glEnd();

    glColor3ub (66, 56, 54);
    glBegin(GL_QUADS);
    glVertex2f(3,5);
    glVertex2f(7,5);
    glVertex2f(7,6);
    glVertex2f(3,6);
    glEnd();
    glColor3ub (50, 40, 39);
    glBegin(GL_QUADS);
    glVertex2f(2,6);
    glVertex2f(8,6);
    glVertex2f(8,7);
    glVertex2f(2,7);
    glEnd();
    glPopMatrix();

}

  }

void temp(int x){
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(x,0,0);
    BridgeBox();
    BridgeBoxNight();
    glPopMatrix();

}

void bridge(){
    temp(-40);
    temp(-20);
    temp(0);
    temp(20);
    temp(35);
}

void tempbuild(){
	glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(1,1.5,0);
    drawBuildingL();
    glPopMatrix();

}

void twintower(){
	glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
	glTranslatef(-7,3,0);
	glBegin(GL_POLYGON);
	set_color("twintower"); // Yellow
	glVertex2f(-2.50, 0.0f);
	glVertex2f(2.50, 0.0f);
	glVertex2f(2.50f, 10.0f);
	glVertex2f(-2.50f, 10.0f);
	glEnd();
    twintowerwindow(0.5,0.5,-1,16);
    twintowerwindow(0.5,0.5,-4,16);
    twintowerwindow(0.5,0.5,1.75,16);
    twintowerwindow(0.5,0.5,-1,14);
    twintowerwindow(0.5,0.5,-4,14);
    twintowerwindow(0.5,0.5,1.75,14);
    twintowerwindow(0.5,0.5,-1,12);
    twintowerwindow(0.5,0.5,-4,12);
    twintowerwindow(0.5,0.5,1.75,12);
    twintowerwindow(0.5,0.5,-1,10);
    twintowerwindow(0.5,0.5,-4,10);
    twintowerwindow(0.5,0.5,1.75,10);
    twintowerwindow(0.5,0.5,1.75,8);
    twintowerwindow(0.5,0.5,-1,8);
    twintowerwindow(0.5,0.5,-4,8);
    twintowerwindow(0.5,0.5,1.75,6);
    twintowerwindow(0.5,0.5,-1,6);
    twintowerwindow(0.5,0.5,-4,6);
    twintowerwindow(0.5,0.5,1.75,4);
    twintowerwindow(0.5,0.5,-1,4);
    twintowerwindow(0.5,0.5,-4,4);
    twintowerwindow(0.5,0.5,1.75,2);
    twintowerwindow(0.5,0.5,-1,2);
    twintowerwindow(0.5,0.5,-4,2);
	glBegin(GL_POLYGON);
	set_color("twintower"); // Yellow
	glVertex2f(-2.00, 10.0f);
	glVertex2f(2.00, 10.0f);
	glVertex2f(2.00f, 16.0f);
	glVertex2f(-2.00f, 16.0f);
	glEnd();
    twintowerwindow(0.5,0.5,-1.50,18);
    twintowerwindow(0.5,0.5,-4,18);
    twintowerwindow(0.5,0.5,1,18);
    twintowerwindow(0.5,0.5,-1.50,20);
    twintowerwindow(0.5,0.5,-4,20);
    twintowerwindow(0.5,0.5,1,20);
    twintowerwindow(0.5,0.5,-1.50,22);
    twintowerwindow(0.5,0.5,-4,22);
    twintowerwindow(0.5,0.5,1,22);
    twintowerwindow(0.5,0.5,-1.50,24);
    twintowerwindow(0.5,0.5,-4,24);
    twintowerwindow(0.5,0.5,1,24);
    twintowerwindow(0.5,0.5,-1.50,26);
    twintowerwindow(0.5,0.5,-4,26);
    twintowerwindow(0.5,0.5,1,26);
    twintowerwindow(0.5,0.5,-1.50,28);
    twintowerwindow(0.5,0.5,-4,28);
    twintowerwindow(0.5,0.5,1,28);
    twintowerwindow(0.5,0.5,-1.50,30);
    twintowerwindow(0.5,0.5,-4,30);
    twintowerwindow(0.5,0.5,1,30);

	glBegin(GL_POLYGON);
    set_color("twintower"); // Yellow
	glVertex2f(-1.50, 16.0f);
	glVertex2f(1.50, 16.0f);
	glVertex2f(1.50f, 23.0f);
	glVertex2f(-1.50f, 23.0f);
	glEnd();
    twintowerwindow(0.5,0.5,-1.50,32);
    twintowerwindow(0.5,0.5,-4,32);
    twintowerwindow(0.5,0.5,-1.50,34);
    twintowerwindow(0.5,0.5,-4,34);
    twintowerwindow(0.5,0.5,-1.50,36);
    twintowerwindow(0.5,0.5,-4,36);
    twintowerwindow(0.5,0.5,-1.50,38);
    twintowerwindow(0.5,0.5,-4,38);
    twintowerwindow(0.5,0.5,-1.50,40);
    twintowerwindow(0.5,0.5,-4,40);
    twintowerwindow(0.5,0.5,-1.50,42);
    twintowerwindow(0.5,0.5,-4,42);
    twintowerwindow(0.5,0.5,-1.50,44);
    twintowerwindow(0.5,0.5,-4,44);
	glBegin(GL_POLYGON);
	set_color("twintower");// Yellow
	glVertex2f(-1.00, 23.0f);
	glVertex2f(1.00, 23.0f);
	glVertex2f(1.00f, 26.0f);
	glVertex2f(-1.00f, 26.0f);
	glEnd();
    twintowerwindow(0.5,0.5,-1.50,46);
    twintowerwindow(0.5,0.5,-1.50,48);
    twintowerwindow(0.5,0.5,-1.50,50);
	glBegin(GL_POLYGON);
	set_color("twintower"); // Yellow
	glVertex2f(2.50, 5.0f);
	glVertex2f(12.5f, 5.0f);
	glVertex2f(12.5f, 6.0f);
	glVertex2f(2.50, 6.0f);
	glEnd();
    buildingwindow(0.3,0.2,16,22);
    buildingwindow(0.3,0.2,16,23);
    glBegin(GL_POLYGON);
	set_color("twintower"); // Yellow
	glVertex2f(2.50, 6.0f);
	glVertex2f(12.5f, 6.0f);
	glVertex2f(12.5f, 8.0f);
	glVertex2f(2.50, 8.0f);
	glEnd();
    buildingwindow(0.3,0.2,16,35);
    buildingwindow(0.3,0.2,16,34);
	glPopMatrix();


	int x=10;
    int y=20;

	glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
	glTranslatef(-7,3,0);
	glBegin(GL_POLYGON);
	set_color("twintower"); // Yellow
	glVertex2f(-2.50+x, 0.0f);
	glVertex2f(2.50+x, 0.0f);
	glVertex2f(2.50f+x, 10.0f);
	glVertex2f(-2.50f+x, 10.0f);
	glEnd();
     twintowerwindow(0.5,0.5,-1.5+y,16);
    twintowerwindow(0.5,0.5,-5+y,16);
    twintowerwindow(0.5,0.5,1.3+y,16);
    twintowerwindow(0.5,0.5,-1.5+y,14);
    twintowerwindow(0.5,0.5,-5+y,14);
    twintowerwindow(0.5,0.5,1.3+y,14);
    twintowerwindow(0.5,0.5,-1.5+y,12);
    twintowerwindow(0.5,0.5,-5+y,12);
    twintowerwindow(0.5,0.5,1.3+y,12);
    twintowerwindow(0.5,0.5,-1.5+y,10);
    twintowerwindow(0.5,0.5,-5+y,10);
    twintowerwindow(0.5,0.5,1.3+y,10);
    twintowerwindow(0.5,0.5,1.3+y,8);
    twintowerwindow(0.5,0.5,-1.5+y,8);
    twintowerwindow(0.5,0.5,-5+y,8);
    twintowerwindow(0.5,0.5,1.3+y,6);
    twintowerwindow(0.5,0.5,-1.5+y,6);
    twintowerwindow(0.5,0.5,-5+y,6);
    twintowerwindow(0.5,0.5,1.3+y,4);
    twintowerwindow(0.5,0.5,-1.5+y,4);
    twintowerwindow(0.5,0.5,-5+y,4);
    twintowerwindow(0.5,0.5,1.3+y,2);
    twintowerwindow(0.5,0.5,-1.5+y,2);
    twintowerwindow(0.5,0.5,-5+y,2);
	glBegin(GL_POLYGON);
	set_color("twintower");// Yellow
	glVertex2f(-2.00+x, 10.0f);
	glVertex2f(2.00+x, 10.0f);
	glVertex2f(2.00f+x, 16.0f);
	glVertex2f(-2.00f+x, 16.0f);
	glEnd();
    twintowerwindow(0.5,0.5,-1.50+y,18);
    twintowerwindow(0.5,0.5,-4+y,18);
    twintowerwindow(0.5,0.5,1+y,18);
    twintowerwindow(0.5,0.5,-1.50+y,20);
    twintowerwindow(0.5,0.5,-4+y,20);
    twintowerwindow(0.5,0.5,1+y,20);
    twintowerwindow(0.5,0.5,-1.50+y,22);
    twintowerwindow(0.5,0.5,-4+y,22);
    twintowerwindow(0.5,0.5,1+y,22);
    twintowerwindow(0.5,0.5,-1.50+y,24);
    twintowerwindow(0.5,0.5,-4+y,24);
    twintowerwindow(0.5,0.5,1+y,24);
    twintowerwindow(0.5,0.5,-1.50+y,26);
    twintowerwindow(0.5,0.5,-4+y,26);
    twintowerwindow(0.5,0.5,1+y,26);
    twintowerwindow(0.5,0.5,-1.50+y,28);
    twintowerwindow(0.5,0.5,-4+y,28);
    twintowerwindow(0.5,0.5,1+y,28);
    twintowerwindow(0.5,0.5,-1.50+y,30);
    twintowerwindow(0.5,0.5,-4+y,30);
    twintowerwindow(0.5,0.5,1+y,30);
	glBegin(GL_POLYGON);
	set_color("twintower");// Yellow
	glVertex2f(-1.50+x, 16.0f);
	glVertex2f(1.50+x, 16.0f);
	glVertex2f(1.50f+x, 23.0f);
	glVertex2f(-1.50f+x, 23.0f);
	glEnd();
    twintowerwindow(0.5,0.5,-1.50+y,32);
    twintowerwindow(0.5,0.5,-4+y,32);
    twintowerwindow(0.5,0.5,-1.50+y,34);
    twintowerwindow(0.5,0.5,-4+y,34);
    twintowerwindow(0.5,0.5,-1.50+y,36);
    twintowerwindow(0.5,0.5,-4+y,36);
    twintowerwindow(0.5,0.5,-1.50+y,38);
    twintowerwindow(0.5,0.5,-4+y,38);
    twintowerwindow(0.5,0.5,-1.50+y,40);
    twintowerwindow(0.5,0.5,-4+y,40);
    twintowerwindow(0.5,0.5,-1.50+y,42);
    twintowerwindow(0.5,0.5,-4+y,42);
    twintowerwindow(0.5,0.5,-1.50+y,44);
    twintowerwindow(0.5,0.5,-4+y,44);
	glBegin(GL_POLYGON);
	set_color("twintower");// Yellow
	glVertex2f(-1.00+x, 23.0f);
	glVertex2f(1.00+x, 23.0f);
	glVertex2f(1.00f+x, 26.0f);
	glVertex2f(-1.00f+x, 26.0f);
	glEnd();
    twintowerwindow(0.5,0.5,-1.50+y,46);
    twintowerwindow(0.5,0.5,-1.50+y,48);
    twintowerwindow(0.5,0.5,-1.50+y,50);
	glPopMatrix();


}

void trainLine(){
	glBegin(GL_POLYGON);
	glColor3ub(82, 71, 67); // Yellow
	glVertex2f(-41.0f, 0.0f);
	glVertex2f(41.0f, 0.0f);
	glVertex2f(41.0f, -1.00f);
	glVertex2f(-41.0f, -1.0f);
	glEnd();

}

void tempTrainLine(){
	glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0,3,0);
    trainLine();
    glPopMatrix();

}

void BridgeRaling(){
    glBegin(GL_POLYGON);
	glColor3ub(2, 42, 50); // Yellow
	glVertex2f(-4.0f, 7.0f);
	glVertex2f(-7.0f, 7.0f);
	glVertex2f(-7.0f, 8.0f);
	glVertex2f(-4.0f, 8.0f);
	glEnd();
    glBegin(GL_POLYGON);
	glColor3ub(2, 42, 50); // Yellow
	glVertex2f(-5.0f, 0.0f);
	glVertex2f(-5.0f, 7.0f);
	glVertex2f(-6.0f, 7.0f);
	glVertex2f(-6.0f, 0.0f);
	glEnd();

    int x=4;
	glBegin(GL_LINES);
    glLineWidth(20);
    glColor3ub(127, 18, 18);
    glVertex2f(-5.0f, 7.0f);
	glVertex2f(0.0f+x, 0.0f);
    glEnd();
    glBegin(GL_LINES);
    glLineWidth(20);
    glColor3ub(127, 18, 18);
    glVertex2f(-5.0f, 5.0f);
	glVertex2f(-1.0f+x, 0.0f);
    glEnd();
    glBegin(GL_LINES);
    glLineWidth(20);
    glColor3ub(125, 14, 14);
    glVertex2f(-5.0f, 4.0f);
	glVertex2f(-1.50f+x, 0.0f);
    glEnd();
    glBegin(GL_LINES);
    glLineWidth(20);
    glColor3ub(125, 14, 14);
    glVertex2f(-5.0f, 2.0f);
	glVertex2f(-2.0f+x, 0.0f);
    glEnd();
    int y=-4;
	glBegin(GL_LINES);
    glLineWidth(20);
    glColor3ub(125, 14, 14);
    glVertex2f(-6.0f, 7.0f);
	glVertex2f(-10.0f+y, 0.0f);
    glEnd();
    glBegin(GL_LINES);
    glLineWidth(20);
    glColor3ub(125, 14, 14);
    glVertex2f(-6.0f, 5.0f);
	glVertex2f(-9.50f+y, 0.0f);
    glEnd();
    glBegin(GL_LINES);
    glLineWidth(20);
    glColor3ub(125, 14, 14);
    glVertex2f(-6.0f, 4.0f);
	glVertex2f(-9.0f+y, 0.0f);
    glEnd();
    glBegin(GL_LINES);
    glLineWidth(20);
    glColor3ub(125, 14, 14);
    glVertex2f(-6.0f, 2.0f);
	glVertex2f(-8.0f+y, 0.0f);
    glEnd();


}

void tempRail(int x){
	glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(x,2,0);
    BridgeRaling();
    glPopMatrix();

}

void tempRailing(){
	tempRail(40);
	tempRail(20);
    tempRail(0);
	tempRail(-20);
	tempRail(-40);

}

void drawTrainrail(){

	glBegin(GL_POLYGON);
	glColor3ub(52, 52, 52 ); // Yellow
	glVertex2f(-41.0f, 2.0f);
	glVertex2f(41.0f, 2.0f);
	glVertex2f(41.0f, 4.50f);
	glVertex2f(-41.0f, 4.50f);
	glEnd();

}

void traindoor(){

    glBegin(GL_POLYGON);
	set_color("traindoor");
	glVertex2f(3.0f, 4.0f);
	glVertex2f(5.0f, 4.0f);
	glVertex2f(5.0f, 6.0f);
	glVertex2f(3.0f, 6.0f);

	glEnd();

    }

void adjustdoor(){

        //middle door

        glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(0.6,1.4,1);
    glTranslatef(11.50,-2,0);
    traindoor();
    glPopMatrix();

    //front door

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(0.6,1.4,1);
    glTranslatef(25.50,-2,0);
    traindoor();
    glPopMatrix();

    //back door

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(0.6,1.4,1);
    glTranslatef(-3.50,-2,0);
    traindoor();
    glPopMatrix();

    }

void windowstrain(){

	glBegin(GL_POLYGON);
	set_color("trainwindow");
	glVertex2f(3.0f, 4.0f);
	glVertex2f(5.0f, 4.0f);
	glVertex2f(5.0f, 6.0f);
	glVertex2f(3.0f, 6.0f);

	glEnd();

}

void adjustwindow(){
    //middle boggy

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(0.6,0.6,1);
    glTranslatef(2,3,0);
    windowstrain();
    glPopMatrix();

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(0.6,0.6,1);
    glTranslatef(5,3,0);
    windowstrain();
    glPopMatrix();

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(0.6,0.6,1);
    glTranslatef(8,3,0);
    windowstrain();
    glPopMatrix();



    //front boggy

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(0.6,0.6,1);
    glTranslatef(16.50,3,0);
    windowstrain();
    glPopMatrix();

     glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(0.6,0.6,1);
    glTranslatef(19.50,3,0);
    windowstrain();
    glPopMatrix();

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(0.6,0.6,1);
    glTranslatef(22.50,3,0);
    windowstrain();
    glPopMatrix();


    //back boggy

     glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(0.6,0.6,1);
    glTranslatef(-7,3,0);
    windowstrain();
    glPopMatrix();

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(0.6,0.6,1);
    glTranslatef(-10,3,0);
    windowstrain();
    glPopMatrix();


    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(0.6,0.6,1);
    glTranslatef(-13,3,0);
    windowstrain();
    glPopMatrix();


}

void reflect_windowstrain(){

    if (isDayScene==false)

    {

	glBegin(GL_POLYGON);
	set_color("nightTwindow");
	glVertex2f(3.0f, 4.0f);
	glVertex2f(5.0f, 4.0f);
	glVertex2f(5.0f, 6.0f);
	glVertex2f(3.0f, 6.0f);

	glEnd();

}

    }

void reflectwindow_night(){

    if (isDayScene==false)


    {
     //middle boggy

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(0.6,0.6,1);
    glTranslatef(2,-15,0);
    reflect_windowstrain();
    glPopMatrix();

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(0.6,0.6,1);
    glTranslatef(5,-15,0);
    reflect_windowstrain();
    glPopMatrix();

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(0.6,0.6,1);
    glTranslatef(8,-15,0);
    reflect_windowstrain();
    glPopMatrix();



    //front boggy

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(0.6,0.6,1);
    glTranslatef(16.50,-15,0);
    reflect_windowstrain();
    glPopMatrix();

     glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(0.6,0.6,1);
    glTranslatef(19.50,-15,0);
    reflect_windowstrain();
    glPopMatrix();

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(0.6,0.6,1);
    glTranslatef(22.50,-15,0);
    reflect_windowstrain();
    glPopMatrix();


    //back boggy

     glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(0.6,0.6,1);
    glTranslatef(-7,-15,0);
    reflect_windowstrain();
    glPopMatrix();

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(0.6,0.6,1);
    glTranslatef(-10,-15,0);
    reflect_windowstrain();
    glPopMatrix();


    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(0.6,0.6,1);
    glTranslatef(-13,-15,0);
    reflect_windowstrain();
    glPopMatrix();
}
     }

void drawTrain(){

    glBegin(GL_POLYGON);
	glColor3ub(227,223,209); // Yellow
	glVertex2f(2.0f, 0.75f+2);
	glVertex2f(10.50f, 0.75f+2);
	glVertex2f(11.0f, 4.0f+2);
	glVertex2f(10.50f, 4.50f+2);
	glVertex2f(2.50f, 4.50f+2);
	glVertex2f(2.0f, 4.0f+2);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(191,171,151); // Yellow
	glVertex2f(2.0f-9, 0.75f+2);
	glVertex2f(11.0f-9, 0.75f+2);
	glVertex2f(11.0f-9, 4.0f+2);
	glVertex2f(10.50f-9, 4.50f+2);
	glVertex2f(2.50f-9, 4.50f+2);
	glVertex2f(2.0f-9, 4.0f+2);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(214,214,222); // Yellow
	glVertex2f(10.50f, 0.75f+2);
	glVertex2f(22.50f, 0.75f+2);
	glVertex2f(21.0f, 3.50f+2);
	glVertex2f(19.0f, 4.50f+2);
	glVertex2f(11.50f, 4.50f+2);
	glVertex2f(11.0f, 4.0f+2);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(199,129,104); // Yellow
	glVertex2f(-7.0f, 2.75f);
	glVertex2f(21.25f, 2.75f);
	glVertex2f(21.0f, 3.60f);
	glVertex2f(-7.0f, 3.60f);

	glEnd();




	//windows

	glBegin(GL_POLYGON);
	glColor3ub(46,68,86); // Yellow
	glVertex2f(19.0f, 4.0f);
	glVertex2f(20.25f, 4.0f);
	glVertex2f(20.25f, 5.0f);
	glVertex2f(20.0f, 5.50f);
	glVertex2f(19.0f, 6.0f);

	glEnd();

	adjustwindow();
	adjustdoor();

}

void railline2(){
    glBegin(GL_POLYGON);
	glColor3ub(142,141,140); // Yellow
	glVertex2f(-41.0f, 2.0f);
	glVertex2f(41.0f, 2.0f);
	glVertex2f(41.0f, 2.75f);
	glVertex2f(-41.0f, 2.75f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(142,141,140); // Yellow
	glVertex2f(-41.0f, 2.0f+2);
	glVertex2f(41.0f, 2.0f+2);
	glVertex2f(41.0f, 2.75f+2);
	glVertex2f(-41.0f, 2.75f+2);

	glEnd();

}

void bridgerail(){

	glBegin(GL_POLYGON);
	set_color("bridgerailc");
	glVertex2f(-6.0f, -5.0f);
	glVertex2f(-4.25f, -2.50f);
	glVertex2f(-5.0f, -2.0f);
	glVertex2f(-7.0f, -5.0f);

	glEnd();

	glBegin(GL_POLYGON);
	set_color("bridgerailc");
	glVertex2f(-4.25f, -2.50f);
	glVertex2f(0.0f, -1.0f);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(-5.0f, -2.0f);

	glEnd();

	glBegin(GL_POLYGON);
	set_color("bridgerailc");
	glVertex2f(0.0f, -1.0f);
	glVertex2f(4.25f, -2.50f);
	glVertex2f(5.0f, -2.0f);
	glVertex2f(0.0f, 0.0f);

	glEnd();

	glBegin(GL_POLYGON);
	set_color("bridgerailc");
	glVertex2f(4.25f, -2.50f);
	glVertex2f(6.0f, -5.0f);
	glVertex2f(7.0f, -5.0f);
	glVertex2f(5.0f, -2.0f);

	glEnd();

}

void adjustbridge(){

        //middle
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(1.499,0.8,1);
    glTranslatef(-2.7,0,0);
    bridgerail();
    glPopMatrix();

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(1.499,0.8,1);
    glTranslatef(-16.0,0,0);
    bridgerail();
    glPopMatrix();

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(1.499,0.8,1);
    glTranslatef(-29.3,0,0);
    bridgerail();
    glPopMatrix();

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(1.499,0.8,1);
    glTranslatef(10.7,0,0);
    bridgerail();
    glPopMatrix();

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(1.499,0.8,1);
    glTranslatef(23.9,0,0);
    bridgerail();
    glPopMatrix();

    }


void container6(){
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(3,3,1);
    glTranslatef(4,-10.25,0);
    containerModel_1();
    glPopMatrix();
}

void ship(){

    container6();

	glBegin(GL_POLYGON);
    set_color("ship_side");
    glVertex2f(-12.0,7.0);
    glVertex2f(-1.0,7.0);
    glVertex2f(1.50,3.25);
    glVertex2f(3.00,3.25);
    glVertex2f(3.0,-1.0);
    glVertex2f(-12.0,-1.0);
    glVertex2f(-12.0,7.0);
    glEnd();


    glBegin(GL_POLYGON);
    set_color("ship_side");
    glVertex2f(3.0,3.25);
    glVertex2f(36.75,3.25);
    glVertex2f(36.75,-1.0);
    glVertex2f(3.0,-1.0);
    glVertex2f(3.0,3.25);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("ship_side");
    glVertex2f(36.75,3.25);
    glVertex2f(38.0,6.0);
    glVertex2f(44.0,6.0);
    glVertex2f(40.0,-1.00);
    glVertex2f(36.75,-1.00);
    glVertex2f(36.75,3.25);
    glEnd();

    // bottom border

    glBegin(GL_POLYGON);
    set_color("Ship_Border");
    glVertex2f(-12.0,-1.0);
    glVertex2f(40.0,-1.0);
    glVertex2f(39.0,-2.00);
    glVertex2f(-11.0,-2.0);
    glVertex2f(-12.0,-1.0);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("ship_side1");//yellow
    glVertex2f(-12.0,6.0);
    glVertex2f(-2.50,6.0);
    glVertex2f(-2.50,5.50);
    glVertex2f(-12.0,5.50);
    glVertex2f(-12.0,6.0);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("ship_side1");//yellow
    glVertex2f(-2.50,6.0);
    glVertex2f(-2.00,6.0);
    glVertex2f(0.50,2.50);
    glVertex2f(0.25,2.00);
    glVertex2f(-2.25,5.50);
    glVertex2f(-2.50,5.50);
    glVertex2f(-2.50,6.0);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("ship_side1");//yellow
    glVertex2f(0.50,2.50);
    glVertex2f(3.00,2.50);
    glVertex2f(3.0,2.0);
    glVertex2f(0.25,2.00);
    glVertex2f(0.5,2.50);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("ship_side1");//yellow
    glVertex2f(0.50,2.50);
    glVertex2f(37.50,2.50);
    glVertex2f(38.0,2.0);
    glVertex2f(0.25,2.00);
    glVertex2f(0.5,2.50);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("ship_side1");//yellow
    glVertex2f(37.50,2.50);
    glVertex2f(38.75,5.50);
    glVertex2f(39.25,5.0);
    glVertex2f(38.0,2.00);
    glVertex2f(37.50,2.50);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("ship_side1");//yellow
    glVertex2f(38.75,5.50);
    glVertex2f(43.75,5.50);
    glVertex2f(43.45,4.99);
    glVertex2f(39.25,5.00);
    glVertex2f(38.75,5.50);
    glEnd();

    glBegin(GL_POLYGON);//white
    set_color("Firefly");
    glVertex2f(-11.50,7.00);
    glVertex2f(-11.50,8.75);
    glVertex2f(-6.75,8.75);
    glVertex2f(-6.75,7.00);
    glVertex2f(-11.50,7.00);
    glEnd();
    glBegin(GL_POLYGON); //white
    set_color("chimney");
    glVertex2f(-11.00,8.75);
    glVertex2f(-9.25,16.25);
    glVertex2f(-6.75,16.25);
    glVertex2f(-6.75,8.75);
    glVertex2f(-11.00,8.75);
    glEnd();
    glBegin(GL_POLYGON);
   // glColor3ub(5, 156, 65); //green
    set_color("Firefly");
    glVertex2f(-9.50,15.25);
    glVertex2f(-6.75,15.25);
    glVertex2f(-6.75,15.00);
    glVertex2f(-9.55,15.00);
    glVertex2f(-9.50,15.25);
    glEnd();
    glBegin(GL_POLYGON);
   // glColor3ub(5, 156, 65); //green
    set_color("Firefly");
    glVertex2f(-9.96,13.25);
    glVertex2f(-6.75,13.25);
    glVertex2f(-6.75,13.00);
    glVertex2f(-10.00,13.00);
    glVertex2f(-9.96,13.25);
    glEnd();
    glBegin(GL_POLYGON);
   // glColor3ub(232, 239, 16); //yellow
    set_color("White");
    glVertex2f(-9.55,15.00);
    glVertex2f(-6.75,15.00);
    glVertex2f(-6.75,13.25);
    glVertex2f(-9.96,13.25);
    glVertex2f(-9.55,15.00);
    glEnd();

    glBegin(GL_POLYGON);//ash chimney duck 1
    glColor3ub(97, 106, 107);
    glVertex2f(-8.00,16.25);
    glVertex2f(-8.00,17.25);
    glVertex2f(-8.50,17.75);
    glVertex2f(-8.25,18.25);
    glVertex2f(-7.50,17.50);
    glVertex2f(-7.25,17.00);
    glVertex2f(-7.00,16.75);
    glVertex2f(-7.00,16.25);
    glVertex2f(-8.00,16.25);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("ship_body");// off-white
    glVertex2f(-6.00,7.00);
    glVertex2f(-6.00,13.00);
    glVertex2f(-1.00,13.00);
    glVertex2f(-1.00,7.00);
    glVertex2f(-6.00,7.00);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("Off white"); // off-white
    glVertex2f(-1.00,11.75);
    glVertex2f(4.00,11.75);
    glVertex2f(4.00,3.25);
    glVertex2f(1.50,3.25);
    glVertex2f(-1.00,7.00);
    glVertex2f(-1.00,11.75);
    glEnd();

    // Minor details
    glBegin(GL_POLYGON);
    glColor3ub(229, 232, 232);
    glVertex2f(-1.00,13.00);
    glVertex2f(3.00,13.00);
    glVertex2f(3.00,11.75);
    glVertex2f(-1.00,11.75);
    glVertex2f(-1.00,13.00);
    glEnd();


    //T
    glBegin(GL_POLYGON);
    glColor3ub(178, 186, 187);
    glVertex2f(3.00,11.75);
    glVertex2f(3.00,13.00);
    glVertex2f(4.00,13.00);
    glVertex2f(4.00,11.75);
    glVertex2f(3.00,11.75);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("ship_body2");
    glVertex2f(4.00,10.75);
    glVertex2f(4.00,13.00);
    glVertex2f(9.50,13.00);
    glVertex2f(9.50,10.75);
    glVertex2f(4.00,10.75);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("ship_body2");
    glVertex2f(9.50,11.50);
    glVertex2f(9.50,13.00);
    glVertex2f(11.50,13.00);
    glVertex2f(11.50,11.50);
    glVertex2f(9.50,11.50);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("ship_body2");
    glVertex2f(4.00,9.00);
    glVertex2f(4.00,10.75);
    glVertex2f(9.50,10.75);
    glVertex2f(9.50,9.00);
    glVertex2f(4.00,9.00);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("ship_body2");
    glVertex2f(4.00,3.25);
    glVertex2f(4.00,9.00);
    glVertex2f(9.50,9.00);
    glVertex2f(9.50,3.25);
    glVertex2f(4.00,3.25);
    glEnd();

    // Railing
    glBegin(GL_POLYGON);
    set_color("Railing");
    glVertex2f(-5.75,13.00);
    glVertex2f(-5.75,14.50);
    glVertex2f(12.50,14.50);
    glVertex2f(11.50,13.00);
    glVertex2f(-5.75,13.00);
    glEnd();
    ///

    glBegin(GL_POLYGON);
    set_color("chimney"); // chimney 2
    glVertex2f(-5.50,14.50);
    glVertex2f(-3.50,14.50);
    glVertex2f(-3.50,15.25);
    glVertex2f(-5.25,15.25);
    glVertex2f(-5.50,14.50);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("chimney");  // chimney 2
    glVertex2f(-5.22,15.50);
    glVertex2f(-5.00,16.25);
    glVertex2f(-3.50,16.25);
    glVertex2f(-3.50,15.50);
    glVertex2f(-5.22,15.50);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("Firefly"); //yellow // chimney 2
    glVertex2f(-5.22,15.50);
    glVertex2f(-3.50,15.50);
    glVertex2f(-3.50,15.25);
    glVertex2f(-5.29,15.25);
    glVertex2f(-5.22,15.50);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(81, 90, 90); // chimney duck 2
    glVertex2f(-4.50,16.25);
    glVertex2f(-4.50,17.00);
    glVertex2f(-5.00,17.50);
    glVertex2f(-4.75,18.00);
    glVertex2f(-4.00,17.25);
    glVertex2f(-3.75,16.75);
    glVertex2f(-3.75,16.25);
    glVertex2f(-4.50,16.25);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("Top_floor"); // building
    glVertex2f(-3.00,14.50);
    glVertex2f(-3.00,16.00);
    glVertex2f(10.85,15.99);
    glVertex2f(10.00,14.50);
    glVertex2f(-3.00,14.50);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(93, 64, 55 );
    glVertex2f(-3.00,16.00);
    glVertex2f(-3.00,16.25);
    glVertex2f(11.00,16.25);
    glVertex2f(10.85,15.99);
    glVertex2f(-3.00,16.00);
    glEnd();

    glBegin(GL_POLYGON);
    //glColor3ub(0, 150, 136 );//green-Cw-1
    set_color("ship_window");
    glVertex2f(-2.50,15.50);
    glVertex2f(-0.50,15.50);
    glVertex2f(-0.50,15.00);
    glVertex2f(-2.50,15.00);
    glEnd();

    glBegin(GL_POLYGON);
    //glColor3ub(0, 150, 136 );//green-CW-2
    set_color("ship_window");
    glVertex2f(0.50,15.00);
    glVertex2f(0.50,15.50);
    glVertex2f(2.00,15.50);
    glVertex2f(2.00,15.00);
    glVertex2f(0.50,15.00);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("ship_window");//green-CW-3
    glVertex2f(4.00,15.25);
    glVertex2f(3.75,15.75);
    glVertex2f(4.75,15.75);
    glVertex2f(4.75,15.25);
    glVertex2f(4.00,15.25);
    glEnd();

    glBegin(GL_POLYGON);    //green-CW-4
    set_color("ship_window");
    glVertex2f(5.50,15.25);
    glVertex2f(5.50,15.75);
    glVertex2f(6.75,15.75);
    glVertex2f(6.75,15.25);
    glVertex2f(5.50,15.25);
    glEnd();
    glBegin(GL_POLYGON);

    set_color("ship_window");    //green-CW-5
    glVertex2f(7.50,15.25);
    glVertex2f(7.50,15.75);
    glVertex2f(9.00,15.75);
    glVertex2f(9.00,15.25);
    glVertex2f(7.50,15.25);
    glEnd();
    glBegin(GL_POLYGON);

    //green-CW-6'
    set_color("ship_window");
    glVertex2f(9.50,15.25);
    glVertex2f(9.50,15.75);
    glVertex2f(10.50,15.75);
    glVertex2f(10.00,15.25);
    glVertex2f(9.50,15.25);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(189, 189, 189);//stand-W
    glVertex2f(3.50,16.25);
    glVertex2f(3.50,18.50);
    glVertex2f(4.50,18.50);
    glVertex2f(4.50,16.25);
    glVertex2f(3.50,16.25);
    glEnd();
    glBegin(GL_POLYGON);//Gray
    glColor3ub(158, 158, 158);
    glVertex2f(3.50,18.50);
    glVertex2f(3.50,18.75);
    glVertex2f(5.50,18.75);
    glVertex2f(5.50,18.50);
    glVertex2f(3.50,18.50);
    glEnd();

    glBegin(GL_POLYGON);//W
    glColor3ub(189, 189, 189);
    glVertex2f(3.75,18.75);
    glVertex2f(3.75,21.25);
    glVertex2f(4.50,21.25);
    glVertex2f(4.50,18.75);
    glVertex2f(3.75,18.75);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(158, 158, 158);//Gray
    glVertex2f(3.25,21.25);
    glVertex2f(3.25,21.75);
    glVertex2f(6.25,21.75);
    glVertex2f(6.25,21.25);
    glVertex2f(3.25,21.25);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(189, 189, 189);//W
    glVertex2f(3.75,21.75);
    glVertex2f(3.75,26.00);
    glVertex2f(4.50,26.00);
    glVertex2f(4.50,21.75);
    glVertex2f(3.75,21.75);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(158, 158, 158);//Gray-CM TOP

    glVertex2f(3.75,26.00);
    glVertex2f(3.25,26.50);
    glVertex2f(5.00,26.50);
    glVertex2f(4.50,26.00);
    glVertex2f(3.75,26.00);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(158, 158, 158);//Gray-CM
    glVertex2f(3.75,26.50);
    glVertex2f(3.25,27.00);
    glVertex2f(5.00,27.00);
    glVertex2f(4.50,26.50);
    glVertex2f(3.75,26.50);
    glEnd();

    glBegin(GL_POLYGON);
   // glColor3ub(247, 8, 8 );//Flag-Red
    set_color("Maroon");
    glVertex2f(3.75,24.50);
    glVertex2f(1.75,24.50);
    glVertex2f(1.75,25.50);
    glVertex2f(3.75,25.50);
    glVertex2f(3.75,24.50);
    glEnd();

    glBegin(GL_POLYGON);
    //glColor3ub(0, 150, 136 );//green-W-1
    set_color("ship_window");
    glVertex2f(-5.50,11.75);
    glVertex2f(-5.00,11.75);
    glVertex2f(-5.00,12.25);
    glVertex2f(-5.50,12.25);
    glVertex2f(-5.50,11.75);
    glEnd();

    glBegin(GL_POLYGON);
    //glColor3ub(0, 150, 136 );//green-W-2
    set_color("ship_window");
    glVertex2f(-2.75,11.75);
    glVertex2f(-2.25,11.75);
    glVertex2f(-2.25,12.25);
    glVertex2f(-2.75,12.25);
    glVertex2f(-2.75,11.75);
    glEnd();

    glBegin(GL_POLYGON);
   // glColor3ub(0, 150, 136 );//green-W-3
    set_color("ship_window");
    glVertex2f(-4.75,9.50);
    glVertex2f(-4.25,9.50);
    glVertex2f(-4.25,10.00);
    glVertex2f(-4.75,10.00);
    glVertex2f(-4.75,9.50);
    glEnd();

    glBegin(GL_POLYGON);
   // glColor3ub(0, 150, 136 );//green-W-4
    set_color("ship_window");
    glVertex2f(-1.75,9.50);
    glVertex2f(-1.25,9.50);
    glVertex2f(-1.25,10.00);
    glVertex2f(-1.75,10.00);
    glVertex2f(-1.75,9.50);
    glEnd();

    glBegin(GL_POLYGON);
  //  glColor3ub(0, 150, 136 );//green-W-5
    set_color("ship_window");
    glVertex2f(-5.50,7.25);
    glVertex2f(-5.00,7.25);
    glVertex2f(-5.00,7.75);
    glVertex2f(-5.50,7.75);
    glVertex2f(-5.50,7.25);
    glEnd();

    glBegin(GL_POLYGON);
  //  glColor3ub(0, 150, 136 );//green-W-6
     set_color("ship_window");
    glVertex2f(-3.50,7.25);
    glVertex2f(-3.00,7.25);
    glVertex2f(-3.00,7.75);
    glVertex2f(-3.50,7.75);
    glVertex2f(-3.50,7.25);
    glEnd();

    glBegin(GL_POLYGON);
   // glColor3ub(0, 150, 136 );//green-W-7
    set_color("ship_window");
    glVertex2f(-1.75,7.25);
    glVertex2f(-1.25,7.25);
    glVertex2f(-1.25,7.75);
    glVertex2f(-1.75,7.75);
    glVertex2f(-1.75,7.25);
    glEnd();

    glBegin(GL_POLYGON);
   // glColor3ub(0, 150, 136 );//green-W-8
     set_color("ship_window");
    glVertex2f(0.50,9.50);
    glVertex2f(1.25,9.50);
    glVertex2f(1.25,10.00);
    glVertex2f(0.50,10.00);
    glVertex2f(0.50,9.50);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("ship_window");
    glVertex2f(2.75,9.50);
    glVertex2f(3.25,9.50);
    glVertex2f(3.25,10.00);
    glVertex2f(2.75,10.00);
    glVertex2f(2.75,9.50);
    glEnd();
    glBegin(GL_POLYGON);
     set_color("ship_window");//green-W-10
    glVertex2f(0.75,7.25);
    glVertex2f(1.25,7.25);
    glVertex2f(1.25,7.75);
    glVertex2f(0.75,7.75);
    glVertex2f(0.75,7.25);
    glEnd();
    glBegin(GL_POLYGON);
     set_color("ship_window");//green-W-11
    glVertex2f(2.75,7.25);
    glVertex2f(3.25,7.25);
    glVertex2f(3.25,7.75);
    glVertex2f(2.75,7.75);
    glVertex2f(2.75,7.25);
    glEnd();
    glBegin(GL_POLYGON);
    set_color("ship_window");//green-W-12
    glVertex2f(4.25,12.00);
    glVertex2f(4.75,12.00);
    glVertex2f(4.75,12.50);
    glVertex2f(4.25,12.50);
    glVertex2f(4.25,12.00);
    glEnd();
    glBegin(GL_POLYGON);
    set_color("ship_window");//green-W-13
    glVertex2f(5.75,12.00);
    glVertex2f(7.25,12.00);
    glVertex2f(7.25,12.50);
    glVertex2f(5.75,12.50);
    glVertex2f(7.75,12.00);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("ship_window");//green-W-14
    glVertex2f(8.25,12.00);
    glVertex2f(8.75,12.00);
    glVertex2f(8.75,12.50);
    glVertex2f(8.25,12.50);
    glVertex2f(8.25,12.00);
    glEnd();

    glBegin(GL_POLYGON);
     set_color("ship_window");//green-W-15
    glVertex2f(4.50,9.50);
    glVertex2f(5.50,9.50);
    glVertex2f(5.50,10.00);
    glVertex2f(4.50,10.00);
    glVertex2f(4.50,9.50);
    glEnd();

    glBegin(GL_POLYGON);
     set_color("ship_window");//green-W-16
    glVertex2f(6.75,9.50);
    glVertex2f(8.00,9.50);
    glVertex2f(8.00,10.00);
    glVertex2f(6.75,10.00);
    glVertex2f(6.75,9.50);
    glEnd();

    glBegin(GL_POLYGON);
     set_color("ship_window");//green-W-17
    glVertex2f(8.50,9.50);
    glVertex2f(9.25,9.50);
    glVertex2f(9.25,10.00);
    glVertex2f(8.50,10.00);
    glVertex2f(8.50,9.50);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("ship_window");//green-W-18
    glVertex2f(5.25,7.25);
    glVertex2f(5.75,7.25);
    glVertex2f(5.75,7.75);
    glVertex2f(5.25,7.75);
    glVertex2f(5.25,7.25);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("ship_window");//green-W-19
    glVertex2f(6.50,7.25);
    glVertex2f(7.00,7.25);
    glVertex2f(7.00,7.75);
    glVertex2f(6.50,7.75);
    glVertex2f(6.50,7.25);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("ship_window");//green-W-20
    glVertex2f(7.75,7.25);
    glVertex2f(8.25,7.25);
    glVertex2f(8.25,7.75);
    glVertex2f(7.75,7.75);
    glVertex2f(7.75,7.25);
    glEnd();

    // floor lines
    glBegin(GL_POLYGON);
    glColor3ub(208, 211, 212);
    glVertex2f(-6.00,10.75);
    glVertex2f(-6.00,11.00);
    glVertex2f(9.50,11.00);
    glVertex2f(9.50,10.75);
    glVertex2f(-6.00,10.75);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(208, 211, 212);
    glVertex2f(-6.00,8.75);
    glVertex2f(-6.00,9.00);
    glVertex2f(9.50,9.00);
    glVertex2f(9.50,8.75);
    glVertex2f(-6.00,8.75);
    glEnd();

}

void Adjust_ship_shajid(){


    glPushMatrix();
    glScalef(0.70,0.90,1);
    glTranslatef(Ship_position,-20,0);
    ship();
    glPopMatrix();

}

void drawCircle(float radius, float cX, float cY){

    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            glColor3ub(194,214,246);
            float pi=3.1416;
            float A=(i*2*pi)/400;
            float r=radius;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+cX,y+cY);
        }
    glEnd();

}

void cloud(){
    drawCircle(4,20,25);
    drawCircle(4,15,25);
    drawCircle(4,11,25);
    drawCircle(4,-20,20);
    drawCircle(4,-15,20);
    drawCircle(4,-11,20);

    //

    drawCircle(4,70,30);
    drawCircle(4,65,30);
    drawCircle(4,61,30);
    drawCircle(4,90,22);
    drawCircle(4,85,22);
    drawCircle(4,81,22);

    //

    drawCircle(4,-60,25);
    drawCircle(4,-55,25);
    drawCircle(4,-51,25);
    drawCircle(4,-80,20);
    drawCircle(4,-75,20);
    drawCircle(4,-71,20);

    //

    drawCircle(4,-110,30);
    drawCircle(4,-105,30);
    drawCircle(4,-101,30);
    drawCircle(4,-130,27);
    drawCircle(4,-125,27);
    drawCircle(4,-121,27);

}

void adjust_cloud(){
    glPushMatrix();
    glScalef(0.50,0.60,1);
    glTranslatef(-40,12,0);
    cloud();
    glPopMatrix();
}

void Full_cloud(){
    adjust_cloud();
}

void Animation_cloud(){
    glPushMatrix();
    glTranslatef(cloud_position,0,0);
    Full_cloud();
    glPopMatrix();
}

void Full_train(){
    traindoor();
    adjustdoor();
    windowstrain();
    adjustwindow();
    reflectwindow_night();
    reflect_windowstrain();
    drawTrain();

}

void Animation_train(){
    glPushMatrix();
    glTranslatef(train_position,0,0);
    Full_train();
    glPopMatrix();
}


void update(int){
    glutPostRedisplay();
    glutTimerFunc(1000/60,update,0);

    if(cloud_position >= +80) cloud_position = -70;
    cloud_position += cloud_speed;

    if(Dew_position >= +80) Dew_position = -90;
    Dew_position += Dew_speed;

}

void shipAnimation2(int value) {

    if(ship_start2 == true){

     Ship_position += Ship_speed;

      if(Ship_position  > 74 ){

            Ship_position = 74;
            ship_start3 = true;
            currentDisplay = 3;

       }
    }else{
            Ship_position = Ship_position;
    }



    if(train_start2 == true){

     train_position += train_speed;

      if(train_position  > 50 ){

            train_position = -70;
       }
    }else{
            train_position = train_position;
    }




    glutPostRedisplay();
    glutTimerFunc(20, shipAnimation2, 0);
}

void display2() {

    glClear(GL_COLOR_BUFFER_BIT);
    skybackground();
    drawWater();
    drawWaterNight();
    twintower();
    tempbuild();
    drawBuilding();
    adjust_stars();
    Animation_dew();
    adjustbridge();
    bridge();
    drawTrainrail();
    railline2();
    Animation_train();
    tempTrainLine();
    tempRailing();
    Adjust_ship_shajid();
    Moon();
    Sun();
    Animation_cloud();
    glFlush();
    glutSwapBuffers();
}




//----------------------------------------------------------End of Scenario 2 ------------------------------------------------------------------

//----------------------------------------------------------Start of Scenario 3--------------------------------------------------------------------


void sky_4(){

    glBegin(GL_POLYGON);
    set_color("S3_sky1");
    glVertex2f(0,11);
    glVertex2f(32,11);
    set_color("S3_sky2");
    glVertex2f(32,14);
    glVertex2f(0,14);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("S3_sky2");
    glVertex2f(0,14);
    glVertex2f(32,14);
    set_color("S3_sky3");
    glVertex2f(32,16);
    glVertex2f(0,16);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("S3_sky3");
    glVertex2f(0,16);
    glVertex2f(32,16);
    set_color("S3_sky4");
    glVertex2f(32,18);
    glVertex2f(0,18);
    glEnd();
}


void sea_4(){

// Light area

    glBegin(GL_POLYGON);
    set_color("S3_sea1");
    glVertex2f(0,0.0);
    glVertex2f(32,0.00);
    set_color("S3_sea2");
    glVertex2f(32,4.25);
    glVertex2f(0,4.25);
    glEnd();


    glBegin(GL_POLYGON);
    set_color("S3_sea2");
    glVertex2f(0,4.25);
    glVertex2f(32,4.25);
    set_color("S3_sea3");
    glVertex2f(32,6);
    glVertex2f(0,6);
    glEnd();


    glBegin(GL_POLYGON);
    set_color("S3_sea3");
    glVertex2f(0,6);
    glVertex2f(32,6);
    set_color("S3_sea4");
    glVertex2f(32,8);
    glVertex2f(0,8);
    glEnd();


    glBegin(GL_POLYGON);
    set_color("S3_sea4");
    glVertex2f(0,8);
    glVertex2f(32,8);
    set_color("S3_sea5");
    glVertex2f(32,9);
    glVertex2f(0,9);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("S3_sea5");
    glVertex2f(0,9);
    glVertex2f(32,9);
    set_color("S3_sea6");
    glVertex2f(32,10);
    glVertex2f(0,10);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("S3_sea6");
    glVertex2f(0,10);
    glVertex2f(32,10);
    set_color("S3_sea7");
    glVertex2f(32,11);
    glVertex2f(0,11);
    glEnd();
}

void seaSide(){

    // Part 1
    glBegin(GL_POLYGON);
    glColor3ub(241,187,130);
    glVertex2f(0.0,4.0);
    glVertex2f(1.0,3.0);
    glVertex2f(5.0,1.00);
    glVertex2f(5.00,0.00);
    glVertex2f(0.0,0.00);
    glVertex2f(0.0,4.00);
    glEnd();

    // Part-2
    glBegin(GL_POLYGON);
    glColor3ub(241,187,130);
    glVertex2f(5.0,1.0);
    glVertex2f(7.0,1.0);
    glVertex2f(11.0,2.00);
    glVertex2f(11.00,0.00);
    glVertex2f(5.0,0.00);
    glVertex2f(5.0,1.00);
    glEnd();

    // Part-3
    glBegin(GL_POLYGON);
    glColor3ub(241,187,130);
    glVertex2f(11.0,2.0);
    glVertex2f(15.0,2.0);
    glVertex2f(20.0,1.00);
    glVertex2f(20.00,0.00);
    glVertex2f(11.0,0.00);
    glVertex2f(11.0,2.00);
    glEnd();

     // Part-4
    glBegin(GL_POLYGON);
    glColor3ub(241,187,130);
    glVertex2f(20.0,1.0);
    glVertex2f(32.0,0.50);
    glVertex2f(32.0,0.00);
    glVertex2f(20.00,0.00);
    glVertex2f(20.0,1.00);
    glEnd();

}

void Grass(){

       // Grass-1
    glBegin(GL_POLYGON);
    glColor3ub(99,179,1);
    glVertex2f(6.75,9.00);
    glVertex2f(7.75,9.75);
    glVertex2f(8.25,10.50);
    glVertex2f(8.75,10.00);
    glVertex2f(9.75,11.00);
    glVertex2f(9.50,10.25);
    glVertex2f(10.75,10.50);
    glVertex2f(10.50,10.00);
    glVertex2f(11.25,9.50);
    glVertex2f(12.00,9.25);
    glVertex2f(12.50,9.00);
    glVertex2f(6.75,9.00);
    glEnd();

    // Grass-2

    //Part-1
    glBegin(GL_POLYGON);
    glColor3ub(99,179,1);
    glVertex2f(12.50,9.00);
    glVertex2f(13.00,9.25);
    glVertex2f(13.75,9.50);
    glVertex2f(14.75,10.50);
    glVertex2f(15.50,9.75);
    glVertex2f(16.00,10.00);
    glVertex2f(16.00,9.00);
    glVertex2f(12.50,9.00);
    glEnd();

    //Part-2
    glBegin(GL_POLYGON);
    glColor3ub(99,179,1);
    glVertex2f(16.00,10.00);
    glVertex2f(16.75,10.75);
    glVertex2f(17.25,10.25);
    glVertex2f(19.75,9.00);
    glVertex2f(16.00,9.00);
    glVertex2f(16.00,10.00);
    glEnd();

    // Grass-3

    //Part-1
    glBegin(GL_POLYGON);
    glColor3ub(99,179,1);
    glVertex2f(19.75,9.00);
    glVertex2f(21.25,9.25);
    glVertex2f(22.75,10.00);
    glVertex2f(23.00,10.25);
    glVertex2f(23.75,9.75);
    glVertex2f(23.75,9.00);
    glVertex2f(19.75,9.00);
    glEnd();


    //Part-2
    glBegin(GL_POLYGON);
    glColor3ub(99,179,1);
    glVertex2f(23.75,9.00);
    glVertex2f(23.75,9.75);
    glVertex2f(23.50,10.25);
    glVertex2f(24.25,9.75);
    glVertex2f(24.25,9.00);
    glVertex2f(23.75,9.00);
    glEnd();

     //Part-3
    glBegin(GL_POLYGON);
    glColor3ub(99,179,1);
    glVertex2f(24.25,9.00);
    glVertex2f(24.25,10.00);
    glVertex2f(24.75,9.50);
    glVertex2f(25.25,9.25);
    glVertex2f(26.50,9.00);
    glVertex2f(24.25,9.00);
    glEnd();




}

void sun_atun(float radius, float cX, float cY){
    if(isDayScene==true)
    {


    glPushMatrix();
    glScalef(1,1,0);
    glTranslatef(0,11,0);
   glBegin(GL_POLYGON);

    for(int i=0;i<200;i++)
        {
            glColor3ub(213, 124, 61 );
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=radius;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+cX,y+cY);
        }

        glEnd();
        glPopMatrix();
    }
}

void Shed(){

    // Mountain-Shed-1
    glBegin(GL_POLYGON);
    glColor3ub(200,160,110);
    glVertex2f(11.25,10.25);
    glVertex2f(12.75,11.75);
    glVertex2f(15.00,13.00);
    glVertex2f(14.75,12.00);
    glVertex2f(14.00,11.50);
    glVertex2f(13.25,10.50);
    glVertex2f(11.25,10.25);
    glEnd();


    // Mountain-Shed-2
    glBegin(GL_POLYGON);
    glColor3ub(200,160,110);
    glVertex2f(14.75,11.00);
    glVertex2f(15.00,11.75);
    glVertex2f(15.50,12.50);
    glVertex2f(15.25,11.25);
    glVertex2f(14.75,11.00);
    glEnd();


    // Mountain-Shed-3
    //Part-1
    glBegin(GL_POLYGON);
    glColor3ub(200,160,110);
    glVertex2f(16.50,14.00);
    glVertex2f(15.75,12.50);
    glVertex2f(16.25,11.50);
    glVertex2f(17.50,12.50);
    glVertex2f(17.50,13.25);
    glVertex2f(16.75,13.75);
    glVertex2f(16.50,14.00);
    glEnd();
    //Part-2
    glBegin(GL_POLYGON);
    glColor3ub(200,160,110);
    glVertex2f(17.50,12.50);
    glVertex2f(16.25,11.50);
    glVertex2f(18.00,10.50);
    glVertex2f(19.50,10.25);
    glVertex2f(19.00,11.25);
    glVertex2f(18.25,12.00);
    glVertex2f(17.50,12.50);
    glEnd();



    // Mountain-Shed-4
    glBegin(GL_POLYGON);
    glColor3ub(200,160,110);
    glVertex2f(19.75,11.25);
    glVertex2f(20.50,10.75);
    glVertex2f(21.00,10.25);
    glVertex2f(21.00,10.00);
    glVertex2f(20.25,10.25);
    glVertex2f(19.75,10.75);
    glVertex2f(19.75,11.25);
    glEnd();





}

void MountainO(){

    glPushMatrix();
    glScalef(0.85,0.85,1);
    glTranslatef(3.5,1.8,0);
    // part-1
    glBegin(GL_POLYGON);
    glColor3ub(117,78,57);
    glVertex2f(7.0,9.0);
    glVertex2f(8.50,9.25);
    glVertex2f(9.0,9.50);
    glVertex2f(9.75,10.00);
    glVertex2f(10.0,10.25);
    glVertex2f(10.50,10.75);
    glVertex2f(10.50,9.00);
    glVertex2f(7.00,9.00);
    glEnd();

    // part-2
    glBegin(GL_POLYGON);
    glColor3ub(117,78,57);
    glVertex2f(10.50,10.75);
    glVertex2f(11.50,11.25);
    glVertex2f(12.50,12.00);
    glVertex2f(13.00,12.25);
    glVertex2f(14.50,13.00);
    glVertex2f(14.50,9.00);
    glVertex2f(10.50,9.00);
    glVertex2f(10.50,10.75);
    glEnd();

    // Part-3
    glBegin(GL_POLYGON);
    glColor3ub(117,78,57);
    glVertex2f(14.50,13.00);
    glVertex2f(15.75,13.75);
    glVertex2f(16.50,14.00);
    glVertex2f(16.50,9.00);
    glVertex2f(14.50,9.00);
    glVertex2f(14.50,13.00);
    glEnd();

    // Part-4
    glBegin(GL_POLYGON);
    glColor3ub(117,78,57);
    glVertex2f(16.50,14.00);
    glVertex2f(16.75,13.75);
    glVertex2f(17.50,13.25);
    glVertex2f(17.75,12.75);
    glVertex2f(18.75,12.00);
    glVertex2f(18.75,9.00);
    glVertex2f(16.50,9.00);
    glVertex2f(16.50,14.00);
    glEnd();

    // Part-5
    glBegin(GL_POLYGON);
    glColor3ub(117,78,57);
    glVertex2f(18.75,12.00);
    glVertex2f(20.25,11.25);
    glVertex2f(21.25,10.50);
    glVertex2f(22.25,10.00);
    glVertex2f(22.25,9.00);
    glVertex2f(18.75,9.00);
    glVertex2f(18.75,12.00);
    glEnd();


    // Part-6
    glBegin(GL_POLYGON);
    glColor3ub(117,78,57);
    glVertex2f(22.25,10.00);
    glVertex2f(23.00,9.75);
    glVertex2f(23.50,9.50);
    glVertex2f(24.50,9.25);
    glVertex2f(26.00,9.00);
    glVertex2f(22.25,9.00);
    glVertex2f(22.25,10.00);
    glEnd();

    Grass();
    Shed();
    glPopMatrix();

}

void Boat(){

    glBegin(GL_POLYGON);
    glColor3ub(228,40,5);
    glVertex2f(1.00,2.75);
    glVertex2f(3.00,2.50);
    glVertex2f(8.00,2.25);
    glVertex2f(10.00,2.75);
    glVertex2f(8.00,1.00);
    glVertex2f(3.00,1.00);
    glVertex2f(1.00,2.75);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(83,40,5);
    glVertex2f(1.00,2.75);
    glVertex2f(10.00,2.75);
    glVertex2f(8.00,2.25);
    glVertex2f(3.00,2.25);
    glVertex2f(1.00,2.75);
    glEnd();


    float dx = 1.25;
    //Dar-1

    glBegin(GL_POLYGON);
    glColor3ub(203,184,144);
    glVertex2f(3.00,2.75);
    glVertex2f(3.50,2.25);
    glVertex2f(3.75,2.25);
    glVertex2f(3.25,2.75);
    glEnd();

    // Dar-2

    glBegin(GL_POLYGON);
    glColor3ub(203,184,144);
    glVertex2f(4.25,2.75);
    glVertex2f(4.75,2.25);
    glVertex2f(5,2.25);
    glVertex2f(4.50,2.75);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(203,184,144);
    glVertex2f(4.25+dx,2.75);
    glVertex2f(4.75+dx,2.25);
    glVertex2f(5+dx,2.25);
    glVertex2f(4.50+dx,2.75);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(203,184,144);
    glVertex2f(4.25+2*dx,2.75);
    glVertex2f(4.75+2*dx,2.25);
    glVertex2f(5+2*dx,2.25);
    glVertex2f(4.50+2*dx,2.75);
    glEnd();





    // Boat-Shed-1
    glBegin(GL_POLYGON);
    glColor3ub(239,76,7);
    glVertex2f(2.50,2.00);
    glVertex2f(8.75,2.00);
    glVertex2f(8.50,1.75);
    glVertex2f(3.00,1.75);
    glVertex2f(2.50,2.00);
    glEnd();

    // Boat-Shed-1
    glBegin(GL_POLYGON);
    glColor3ub(239,76,7);
    glVertex2f(3.25,1.50);
    glVertex2f(8.00,1.50);
    glVertex2f(7.50,1.25);
    glVertex2f(3.75,1.25);
    glVertex2f(3.25,1.50);
    glEnd();







}

void container7(){

    glPushMatrix();
    glScalef(3,3,1);
    glTranslatef(4,-10.25,0);

    containerModel_1();

    glPopMatrix();

}

void Ship_Ocean(){

    container7();

	glBegin(GL_POLYGON);
    set_color("ship_side");
    glVertex2f(-12.0,7.0);
    glVertex2f(-1.0,7.0);
    glVertex2f(1.50,3.25);
    glVertex2f(3.00,3.25);
    glVertex2f(3.0,-1.0);
    glVertex2f(-12.0,-1.0);
    glVertex2f(-12.0,7.0);
    glEnd();


    glBegin(GL_POLYGON);
    set_color("ship_side");
    glVertex2f(3.0,3.25);
    glVertex2f(36.75,3.25);
    glVertex2f(36.75,-1.0);
    glVertex2f(3.0,-1.0);
    glVertex2f(3.0,3.25);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("ship_side");
    glVertex2f(36.75,3.25);
    glVertex2f(38.0,6.0);
    glVertex2f(44.0,6.0);
    glVertex2f(40.0,-1.00);
    glVertex2f(36.75,-1.00);
    glVertex2f(36.75,3.25);
    glEnd();

    // bottom border

    glBegin(GL_POLYGON);
    set_color("Ship_Border");
    glVertex2f(-12.0,-1.0);
    glVertex2f(40.0,-1.0);
    glVertex2f(39.0,-2.00);
    glVertex2f(-11.0,-2.0);
    glVertex2f(-12.0,-1.0);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("ship_side1");//yellow
    glVertex2f(-12.0,6.0);
    glVertex2f(-2.50,6.0);
    glVertex2f(-2.50,5.50);
    glVertex2f(-12.0,5.50);
    glVertex2f(-12.0,6.0);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("ship_side1");//yellow
    glVertex2f(-2.50,6.0);
    glVertex2f(-2.00,6.0);
    glVertex2f(0.50,2.50);
    glVertex2f(0.25,2.00);
    glVertex2f(-2.25,5.50);
    glVertex2f(-2.50,5.50);
    glVertex2f(-2.50,6.0);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("ship_side1");//yellow
    glVertex2f(0.50,2.50);
    glVertex2f(3.00,2.50);
    glVertex2f(3.0,2.0);
    glVertex2f(0.25,2.00);
    glVertex2f(0.5,2.50);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("ship_side1");//yellow
    glVertex2f(0.50,2.50);
    glVertex2f(37.50,2.50);
    glVertex2f(38.0,2.0);
    glVertex2f(0.25,2.00);
    glVertex2f(0.5,2.50);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("ship_side1");//yellow
    glVertex2f(37.50,2.50);
    glVertex2f(38.75,5.50);
    glVertex2f(39.25,5.0);
    glVertex2f(38.0,2.00);
    glVertex2f(37.50,2.50);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("ship_side1");//yellow
    glVertex2f(38.75,5.50);
    glVertex2f(43.75,5.50);
    glVertex2f(43.45,4.99);
    glVertex2f(39.25,5.00);
    glVertex2f(38.75,5.50);
    glEnd();

    glBegin(GL_POLYGON);//white
    set_color("Firefly");
    glVertex2f(-11.50,7.00);
    glVertex2f(-11.50,8.75);
    glVertex2f(-6.75,8.75);
    glVertex2f(-6.75,7.00);
    glVertex2f(-11.50,7.00);
    glEnd();
    glBegin(GL_POLYGON); //white
    set_color("chimney");
    glVertex2f(-11.00,8.75);
    glVertex2f(-9.25,16.25);
    glVertex2f(-6.75,16.25);
    glVertex2f(-6.75,8.75);
    glVertex2f(-11.00,8.75);
    glEnd();
    glBegin(GL_POLYGON);
   // glColor3ub(5, 156, 65); //green
    set_color("Firefly");
    glVertex2f(-9.50,15.25);
    glVertex2f(-6.75,15.25);
    glVertex2f(-6.75,15.00);
    glVertex2f(-9.55,15.00);
    glVertex2f(-9.50,15.25);
    glEnd();
    glBegin(GL_POLYGON);
   // glColor3ub(5, 156, 65); //green
    set_color("Firefly");
    glVertex2f(-9.96,13.25);
    glVertex2f(-6.75,13.25);
    glVertex2f(-6.75,13.00);
    glVertex2f(-10.00,13.00);
    glVertex2f(-9.96,13.25);
    glEnd();
    glBegin(GL_POLYGON);
   // glColor3ub(232, 239, 16); //yellow
    set_color("White");
    glVertex2f(-9.55,15.00);
    glVertex2f(-6.75,15.00);
    glVertex2f(-6.75,13.25);
    glVertex2f(-9.96,13.25);
    glVertex2f(-9.55,15.00);
    glEnd();

    glBegin(GL_POLYGON);//ash chimney duck 1
    glColor3ub(97, 106, 107);
    glVertex2f(-8.00,16.25);
    glVertex2f(-8.00,17.25);
    glVertex2f(-8.50,17.75);
    glVertex2f(-8.25,18.25);
    glVertex2f(-7.50,17.50);
    glVertex2f(-7.25,17.00);
    glVertex2f(-7.00,16.75);
    glVertex2f(-7.00,16.25);
    glVertex2f(-8.00,16.25);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("ship_body");// off-white
    glVertex2f(-6.00,7.00);
    glVertex2f(-6.00,13.00);
    glVertex2f(-1.00,13.00);
    glVertex2f(-1.00,7.00);
    glVertex2f(-6.00,7.00);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("Off white"); // off-white
    glVertex2f(-1.00,11.75);
    glVertex2f(4.00,11.75);
    glVertex2f(4.00,3.25);
    glVertex2f(1.50,3.25);
    glVertex2f(-1.00,7.00);
    glVertex2f(-1.00,11.75);
    glEnd();

    // Minor details
    glBegin(GL_POLYGON);
    glColor3ub(229, 232, 232);
    glVertex2f(-1.00,13.00);
    glVertex2f(3.00,13.00);
    glVertex2f(3.00,11.75);
    glVertex2f(-1.00,11.75);
    glVertex2f(-1.00,13.00);
    glEnd();


    //T
    glBegin(GL_POLYGON);
    glColor3ub(178, 186, 187);
    glVertex2f(3.00,11.75);
    glVertex2f(3.00,13.00);
    glVertex2f(4.00,13.00);
    glVertex2f(4.00,11.75);
    glVertex2f(3.00,11.75);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("ship_body2");
    glVertex2f(4.00,10.75);
    glVertex2f(4.00,13.00);
    glVertex2f(9.50,13.00);
    glVertex2f(9.50,10.75);
    glVertex2f(4.00,10.75);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("ship_body2");
    glVertex2f(9.50,11.50);
    glVertex2f(9.50,13.00);
    glVertex2f(11.50,13.00);
    glVertex2f(11.50,11.50);
    glVertex2f(9.50,11.50);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("ship_body2");
    glVertex2f(4.00,9.00);
    glVertex2f(4.00,10.75);
    glVertex2f(9.50,10.75);
    glVertex2f(9.50,9.00);
    glVertex2f(4.00,9.00);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("ship_body2");
    glVertex2f(4.00,3.25);
    glVertex2f(4.00,9.00);
    glVertex2f(9.50,9.00);
    glVertex2f(9.50,3.25);
    glVertex2f(4.00,3.25);
    glEnd();

    // Railing
    glBegin(GL_POLYGON);
    set_color("Railing");
    glVertex2f(-5.75,13.00);
    glVertex2f(-5.75,14.50);
    glVertex2f(12.50,14.50);
    glVertex2f(11.50,13.00);
    glVertex2f(-5.75,13.00);
    glEnd();
    ///

    glBegin(GL_POLYGON);
    set_color("chimney"); // chimney 2
    glVertex2f(-5.50,14.50);
    glVertex2f(-3.50,14.50);
    glVertex2f(-3.50,15.25);
    glVertex2f(-5.25,15.25);
    glVertex2f(-5.50,14.50);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("chimney");  // chimney 2
    glVertex2f(-5.22,15.50);
    glVertex2f(-5.00,16.25);
    glVertex2f(-3.50,16.25);
    glVertex2f(-3.50,15.50);
    glVertex2f(-5.22,15.50);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("Firefly"); //yellow // chimney 2
    glVertex2f(-5.22,15.50);
    glVertex2f(-3.50,15.50);
    glVertex2f(-3.50,15.25);
    glVertex2f(-5.29,15.25);
    glVertex2f(-5.22,15.50);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(81, 90, 90); // chimney duck 2
    glVertex2f(-4.50,16.25);
    glVertex2f(-4.50,17.00);
    glVertex2f(-5.00,17.50);
    glVertex2f(-4.75,18.00);
    glVertex2f(-4.00,17.25);
    glVertex2f(-3.75,16.75);
    glVertex2f(-3.75,16.25);
    glVertex2f(-4.50,16.25);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("Top_floor"); // building
    glVertex2f(-3.00,14.50);
    glVertex2f(-3.00,16.00);
    glVertex2f(10.85,15.99);
    glVertex2f(10.00,14.50);
    glVertex2f(-3.00,14.50);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(93, 64, 55 );
    glVertex2f(-3.00,16.00);
    glVertex2f(-3.00,16.25);
    glVertex2f(11.00,16.25);
    glVertex2f(10.85,15.99);
    glVertex2f(-3.00,16.00);
    glEnd();

    glBegin(GL_POLYGON);
    //glColor3ub(0, 150, 136 );//green-Cw-1
    set_color("ship_window");
    glVertex2f(-2.50,15.50);
    glVertex2f(-0.50,15.50);
    glVertex2f(-0.50,15.00);
    glVertex2f(-2.50,15.00);
    glEnd();

    glBegin(GL_POLYGON);
    //glColor3ub(0, 150, 136 );//green-CW-2
    set_color("ship_window");
    glVertex2f(0.50,15.00);
    glVertex2f(0.50,15.50);
    glVertex2f(2.00,15.50);
    glVertex2f(2.00,15.00);
    glVertex2f(0.50,15.00);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("ship_window");//green-CW-3
    glVertex2f(4.00,15.25);
    glVertex2f(3.75,15.75);
    glVertex2f(4.75,15.75);
    glVertex2f(4.75,15.25);
    glVertex2f(4.00,15.25);
    glEnd();

    glBegin(GL_POLYGON);    //green-CW-4
    set_color("ship_window");
    glVertex2f(5.50,15.25);
    glVertex2f(5.50,15.75);
    glVertex2f(6.75,15.75);
    glVertex2f(6.75,15.25);
    glVertex2f(5.50,15.25);
    glEnd();
    glBegin(GL_POLYGON);

    set_color("ship_window");    //green-CW-5
    glVertex2f(7.50,15.25);
    glVertex2f(7.50,15.75);
    glVertex2f(9.00,15.75);
    glVertex2f(9.00,15.25);
    glVertex2f(7.50,15.25);
    glEnd();
    glBegin(GL_POLYGON);

    //green-CW-6'
    set_color("ship_window");
    glVertex2f(9.50,15.25);
    glVertex2f(9.50,15.75);
    glVertex2f(10.50,15.75);
    glVertex2f(10.00,15.25);
    glVertex2f(9.50,15.25);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(189, 189, 189);//stand-W
    glVertex2f(3.50,16.25);
    glVertex2f(3.50,18.50);
    glVertex2f(4.50,18.50);
    glVertex2f(4.50,16.25);
    glVertex2f(3.50,16.25);
    glEnd();
    glBegin(GL_POLYGON);//Gray
    glColor3ub(158, 158, 158);
    glVertex2f(3.50,18.50);
    glVertex2f(3.50,18.75);
    glVertex2f(5.50,18.75);
    glVertex2f(5.50,18.50);
    glVertex2f(3.50,18.50);
    glEnd();

    glBegin(GL_POLYGON);//W
    glColor3ub(189, 189, 189);
    glVertex2f(3.75,18.75);
    glVertex2f(3.75,21.25);
    glVertex2f(4.50,21.25);
    glVertex2f(4.50,18.75);
    glVertex2f(3.75,18.75);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(158, 158, 158);//Gray
    glVertex2f(3.25,21.25);
    glVertex2f(3.25,21.75);
    glVertex2f(6.25,21.75);
    glVertex2f(6.25,21.25);
    glVertex2f(3.25,21.25);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(189, 189, 189);//W
    glVertex2f(3.75,21.75);
    glVertex2f(3.75,26.00);
    glVertex2f(4.50,26.00);
    glVertex2f(4.50,21.75);
    glVertex2f(3.75,21.75);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(158, 158, 158);//Gray-CM TOP

    glVertex2f(3.75,26.00);
    glVertex2f(3.25,26.50);
    glVertex2f(5.00,26.50);
    glVertex2f(4.50,26.00);
    glVertex2f(3.75,26.00);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(158, 158, 158);//Gray-CM
    glVertex2f(3.75,26.50);
    glVertex2f(3.25,27.00);
    glVertex2f(5.00,27.00);
    glVertex2f(4.50,26.50);
    glVertex2f(3.75,26.50);
    glEnd();

    glBegin(GL_POLYGON);
   // glColor3ub(247, 8, 8 );//Flag-Red
    set_color("Maroon");
    glVertex2f(3.75,24.50);
    glVertex2f(1.75,24.50);
    glVertex2f(1.75,25.50);
    glVertex2f(3.75,25.50);
    glVertex2f(3.75,24.50);
    glEnd();

    glBegin(GL_POLYGON);
    //glColor3ub(0, 150, 136 );//green-W-1
    set_color("ship_window");
    glVertex2f(-5.50,11.75);
    glVertex2f(-5.00,11.75);
    glVertex2f(-5.00,12.25);
    glVertex2f(-5.50,12.25);
    glVertex2f(-5.50,11.75);
    glEnd();

    glBegin(GL_POLYGON);
    //glColor3ub(0, 150, 136 );//green-W-2
    set_color("ship_window");
    glVertex2f(-2.75,11.75);
    glVertex2f(-2.25,11.75);
    glVertex2f(-2.25,12.25);
    glVertex2f(-2.75,12.25);
    glVertex2f(-2.75,11.75);
    glEnd();

    glBegin(GL_POLYGON);
   // glColor3ub(0, 150, 136 );//green-W-3
    set_color("ship_window");
    glVertex2f(-4.75,9.50);
    glVertex2f(-4.25,9.50);
    glVertex2f(-4.25,10.00);
    glVertex2f(-4.75,10.00);
    glVertex2f(-4.75,9.50);
    glEnd();

    glBegin(GL_POLYGON);
   // glColor3ub(0, 150, 136 );//green-W-4
    set_color("ship_window");
    glVertex2f(-1.75,9.50);
    glVertex2f(-1.25,9.50);
    glVertex2f(-1.25,10.00);
    glVertex2f(-1.75,10.00);
    glVertex2f(-1.75,9.50);
    glEnd();

    glBegin(GL_POLYGON);
  //  glColor3ub(0, 150, 136 );//green-W-5
    set_color("ship_window");
    glVertex2f(-5.50,7.25);
    glVertex2f(-5.00,7.25);
    glVertex2f(-5.00,7.75);
    glVertex2f(-5.50,7.75);
    glVertex2f(-5.50,7.25);
    glEnd();

    glBegin(GL_POLYGON);
  //  glColor3ub(0, 150, 136 );//green-W-6
     set_color("ship_window");
    glVertex2f(-3.50,7.25);
    glVertex2f(-3.00,7.25);
    glVertex2f(-3.00,7.75);
    glVertex2f(-3.50,7.75);
    glVertex2f(-3.50,7.25);
    glEnd();

    glBegin(GL_POLYGON);
   // glColor3ub(0, 150, 136 );//green-W-7
    set_color("ship_window");
    glVertex2f(-1.75,7.25);
    glVertex2f(-1.25,7.25);
    glVertex2f(-1.25,7.75);
    glVertex2f(-1.75,7.75);
    glVertex2f(-1.75,7.25);
    glEnd();

    glBegin(GL_POLYGON);
   // glColor3ub(0, 150, 136 );//green-W-8
     set_color("ship_window");
    glVertex2f(0.50,9.50);
    glVertex2f(1.25,9.50);
    glVertex2f(1.25,10.00);
    glVertex2f(0.50,10.00);
    glVertex2f(0.50,9.50);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("ship_window");
    glVertex2f(2.75,9.50);
    glVertex2f(3.25,9.50);
    glVertex2f(3.25,10.00);
    glVertex2f(2.75,10.00);
    glVertex2f(2.75,9.50);
    glEnd();
    glBegin(GL_POLYGON);
     set_color("ship_window");//green-W-10
    glVertex2f(0.75,7.25);
    glVertex2f(1.25,7.25);
    glVertex2f(1.25,7.75);
    glVertex2f(0.75,7.75);
    glVertex2f(0.75,7.25);
    glEnd();
    glBegin(GL_POLYGON);
     set_color("ship_window");//green-W-11
    glVertex2f(2.75,7.25);
    glVertex2f(3.25,7.25);
    glVertex2f(3.25,7.75);
    glVertex2f(2.75,7.75);
    glVertex2f(2.75,7.25);
    glEnd();
    glBegin(GL_POLYGON);
    set_color("ship_window");//green-W-12
    glVertex2f(4.25,12.00);
    glVertex2f(4.75,12.00);
    glVertex2f(4.75,12.50);
    glVertex2f(4.25,12.50);
    glVertex2f(4.25,12.00);
    glEnd();
    glBegin(GL_POLYGON);
    set_color("ship_window");//green-W-13
    glVertex2f(5.75,12.00);
    glVertex2f(7.25,12.00);
    glVertex2f(7.25,12.50);
    glVertex2f(5.75,12.50);
    glVertex2f(7.75,12.00);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("ship_window");//green-W-14
    glVertex2f(8.25,12.00);
    glVertex2f(8.75,12.00);
    glVertex2f(8.75,12.50);
    glVertex2f(8.25,12.50);
    glVertex2f(8.25,12.00);
    glEnd();

    glBegin(GL_POLYGON);
     set_color("ship_window");//green-W-15
    glVertex2f(4.50,9.50);
    glVertex2f(5.50,9.50);
    glVertex2f(5.50,10.00);
    glVertex2f(4.50,10.00);
    glVertex2f(4.50,9.50);
    glEnd();

    glBegin(GL_POLYGON);
     set_color("ship_window");//green-W-16
    glVertex2f(6.75,9.50);
    glVertex2f(8.00,9.50);
    glVertex2f(8.00,10.00);
    glVertex2f(6.75,10.00);
    glVertex2f(6.75,9.50);
    glEnd();

    glBegin(GL_POLYGON);
     set_color("ship_window");//green-W-17
    glVertex2f(8.50,9.50);
    glVertex2f(9.25,9.50);
    glVertex2f(9.25,10.00);
    glVertex2f(8.50,10.00);
    glVertex2f(8.50,9.50);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("ship_window");//green-W-18
    glVertex2f(5.25,7.25);
    glVertex2f(5.75,7.25);
    glVertex2f(5.75,7.75);
    glVertex2f(5.25,7.75);
    glVertex2f(5.25,7.25);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("ship_window");//green-W-19
    glVertex2f(6.50,7.25);
    glVertex2f(7.00,7.25);
    glVertex2f(7.00,7.75);
    glVertex2f(6.50,7.75);
    glVertex2f(6.50,7.25);
    glEnd();

    glBegin(GL_POLYGON);
    set_color("ship_window");//green-W-20
    glVertex2f(7.75,7.25);
    glVertex2f(8.25,7.25);
    glVertex2f(8.25,7.75);
    glVertex2f(7.75,7.75);
    glVertex2f(7.75,7.25);
    glEnd();

    // floor lines
    glBegin(GL_POLYGON);
    glColor3ub(208, 211, 212);
    glVertex2f(-6.00,10.75);
    glVertex2f(-6.00,11.00);
    glVertex2f(9.50,11.00);
    glVertex2f(9.50,10.75);
    glVertex2f(-6.00,10.75);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(208, 211, 212);
    glVertex2f(-6.00,8.75);
    glVertex2f(-6.00,9.00);
    glVertex2f(9.50,9.00);
    glVertex2f(9.50,8.75);
    glVertex2f(-6.00,8.75);
    glEnd();

}

void  adjustShip_S3(){

    glPushMatrix();
    glScalef(0.13,0.13,1);
    glTranslatef(moveShip3,83,0);
    Ship_Ocean();
    glPopMatrix();
}

void display3() {

	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

	sky_4();
    sun_atun(2.5,6,0);
    sea_4();
    seaSide();
    adjustShip_S3();
    MountainO();
    Boat();

	glFlush();
}

void shipAnimation3(int value) {

    if(ship_start3 == true){

        moveShip3 += 0.20;

        if(moveShip3  > 260  ){

            moveShip3 = 260;
            currentDisplay = 4;

       }
    }else{
            moveShip3 = moveShip3;
    }

    glutPostRedisplay();
    glutTimerFunc(20, shipAnimation3, 0);
}





//----------------------------------------------------------End of Scenario 3-------------------------------------------------------


// --------------------------------------------------------- Start of Scenario 4----------------------------------------------------
float move_gate_1=0.0f;
float move_gate_2=0.0f;
float move_gate_3=0.0f;
float move_gate_4=0.0f;
float move_gate_5=0.0f;
float move_gate_6=0.0f;
float move_gate_7=0.0f;
float move_gate_8=0.0f;

float move_ship_x=0;
float move_ship_y=0;

float move_water_1=0;
float move_water_2=0;
float move_water_3=0;
float move_water_4=0;
float move_water_5=0;
float move_water_6=0;
float move_water_7=0;

bool up_1=false;
bool down_1=false;
bool up_2=false;
bool down_2=false;
bool up_3=false;
bool down_3=false;
bool up_4=false;
bool down_4=false;
bool up_5=false;
bool down_5=false;
bool up_6=false;
bool down_6=false;
bool up_7=false;
bool down_7=false;
bool up_8=false;
bool down_8=false;

bool canal_1=false;
bool canal_2=false;
bool canal_3=false;
bool canal_4=false;
bool canal_5=false;
bool canal_6=false;
bool canal_7=false;



bool move_ship1=false;
bool move_ship2=false;
bool move_ship3=false;
bool move_ship4=false;
bool move_ship5=false;
bool move_ship6=false;
bool move_ship7=false;
bool move_ship8=false;
int shipspeed_3 = 25;


void ship1(int value){
    //move_gate_1 +=0.3;

    if(move_ship1==true)
    {
        move_ship_x+=0.1;

    if(move_ship_x>7)
    {
        move_ship_x=7;
        move_ship1=false;
    }

    }





    glutPostRedisplay();
glutTimerFunc(shipspeed_3, ship1, 0);

}

void ship2(int value){
    //move_gate_1 +=0.3;

    if(move_ship2==true)
    {
        move_ship_x+=0.1;

    if(move_ship_x>11)
    {
        move_ship_x=11;
        move_ship2=false;
    }

    }





    glutPostRedisplay();
glutTimerFunc(shipspeed_3, ship2, 0);

}

void ship3(int value){
    //move_gate_1 +=0.3;

    if(move_ship3==true)
    {
        move_ship_x+=0.1;

    if(move_ship_x>18)
    {
        move_ship_x=18;
        move_ship3=false;
    }

    }

    glutPostRedisplay();
glutTimerFunc(shipspeed_3, ship3, 0);

}

void ship4(int value){
    //move_gate_1 +=0.3;

    if(move_ship4==true)
    {
        move_ship_x+=0.1;

    if(move_ship_x>30)
    {
        move_ship_x=30;
        move_ship4=false;
    }

    }

    glutPostRedisplay();
glutTimerFunc(shipspeed_3, ship4, 0);

}

void ship5(int value)
{
    //move_gate_1 +=0.3;

    if(move_ship5==true)
    {
        move_ship_x+=0.1;

    if(move_ship_x>38)
    {
        move_ship_x=38;
        move_ship5=false;
    }

    }

    glutPostRedisplay();
glutTimerFunc(shipspeed_3, ship5, 0);

}

void ship6(int value)
{
    //move_gate_1 +=0.3;

    if(move_ship6==true)
    {
        move_ship_x+=0.1;

    if(move_ship_x>44)
    {
        move_ship_x=44;
        move_ship6=false;
    }

    }

    glutPostRedisplay();
glutTimerFunc(shipspeed_3, ship6, 0);

}

void ship7(int value)
{
    //move_gate_1 +=0.3;

    if(move_ship7==true)
    {
        move_ship_x+=0.1;

    if(move_ship_x>49)
    {
        move_ship_x=49;
        move_ship7=false;
    }

    }

    glutPostRedisplay();
glutTimerFunc(25, ship7, 0);

}

void ship8(int value)
{
    //move_gate_1 +=0.3;

    if(move_ship8==true)
    {
        move_ship_x+=0.1;

    if(move_ship_x>55)
    {
        move_ship_x=55;
        move_ship8=false;
    }

    }

    glutPostRedisplay();
glutTimerFunc(shipspeed_3, ship8, 0);

}

void FIRST_GATE()
{

    // ***************************1ST***** GATE LEFT PART

    glBegin(GL_POLYGON);
    glColor3ub(102, 51, 0);
    glVertex2d(-25,-4);
    glVertex2d(-24.75,-4);
    glVertex2d(-24.75,.50);
    glVertex2d(-25,.50);
    glEnd();

    //*****1ST GATE RIGHT PART******
    glBegin(GL_POLYGON);
    glColor3ub(229, 231, 233);
    glVertex2d(-24.75,-4);
    glVertex2d(-24.50,-4);
    glVertex2d(-24.50,.50);
    glVertex2d(-24.75,.50);
    glEnd();

    //******** STRIPE PART COLOR****




    glPushMatrix();
    glTranslatef(0,move_gate_1,0);


    glBegin(GL_POLYGON);
    glColor3ub(181, 151, 106);

    glVertex2d(-24.75,-1.75);
    glVertex2d(-24.50,-1.75);
    glVertex2d(-24.50,.50);
    glVertex2d(-24.75,.50);

    glEnd();



    // STRIPE LINE
    glBegin(GL_LINES);
    glLineWidth(8);
    glColor3ub(0,0,0);





    glVertex2d(-24.50,-1.75);
    glVertex2d(-24.75,-1.75);

    glVertex2d(-24.50,-1.50);
    glVertex2d(-24.75,-1.50);

    glVertex2d(-24.50,-1.25);
    glVertex2d(-24.75,-1.25);

    glVertex2d(-24.50,-1);
    glVertex2d(-24.75,-1);

    glVertex2d(-24.50,-.75);
    glVertex2d(-24.75,-.75);

    glVertex2d(-24.50,-.50);
    glVertex2d(-24.75,-.50);

    glVertex2d(-24.50,-.25);
    glVertex2d(-24.75,-.25);

    glVertex2d(-24.50,-0);
    glVertex2d(-24.75,-0);

    glVertex2d(-24.50,0.25);
    glVertex2d(-24.75,0.25);

    glVertex2d(-24.50,0.50);
    glVertex2d(-24.75,0.50);
    glEnd();



    // STRIPE LINE BORDER


    glBegin(GL_LINES);
    glLineWidth(2);
    glColor3ub(0,0,0);

    glVertex2d(-24.50,-1.75);
    glVertex2d(-24.50,.5);

    glVertex2d(-24.75,-1.75);
    glVertex2d(-24.75,.5);

    glEnd();

    glPopMatrix();



}

void upgate1_down(int value)
{
    if(down_1==true)
    {

         move_gate_1-=0.1;

    if(move_gate_1<-2.25)
    {
        move_gate_1=-2.25;
        down_1=false;

    }
    }



glutPostRedisplay();
glutTimerFunc(25, upgate1_down, 0);
}

void upgate1_up(int value)
{
    //move_gate_1 +=0.3;

    if(up_1==true)
    {
        move_gate_1+=0.1;

    if(move_gate_1>.25)
    {
        move_gate_1=.25;
        up_1=false;
    }

    }





glutPostRedisplay();
glutTimerFunc(25, upgate1_up, 0);

}

void SECOND_GATE()
{

     //*******************************2ND***** GATE PART

    glBegin(GL_POLYGON);
    glColor3ub(102,51,0);

    glVertex2d(-21,-4);
    glVertex2d(-20.75,-4);
    glVertex2d(-20.75,+2);
    glVertex2d(-21,+2);

    glEnd();


    //***RIGHT GATE RIGHT PART***

    glBegin(GL_POLYGON);
    glColor3ub(215, 219, 221);

    glVertex2d(-20.75,-4);
    glVertex2d(-20.50,-4);
    glVertex2d(-20.50,2);
    glVertex2d(-20.75,2);

    glEnd();


    glPushMatrix();
    glTranslatef(0,move_gate_2,0);


    //STRIPE PART COLOR

    glBegin(GL_POLYGON);
    glColor3ub(181, 151, 106);

    glVertex2d(-20.75,-1);
    glVertex2d(-20.50,-1);
    glVertex2d(-20.50,2);
    glVertex2d(-20.75,2);

    glEnd();


    //STRIPE LINE

    glBegin(GL_LINES);
    glColor3ub(0,0,0);

    glVertex2d(-20.75,-1);
    glVertex2d(-20.50,-1);

    glVertex2d(-20.75,-.75);
    glVertex2d(-20.50,-.75);

    glVertex2d(-20.75,-.50);
    glVertex2d(-20.50,-.50);

    glVertex2d(-20.75,-.25);
    glVertex2d(-20.50,-.25);


    glVertex2d(-20.75,-0);
    glVertex2d(-20.50,-0);

    glVertex2d(-20.75,.25);
    glVertex2d(-20.50,.25);

    glVertex2d(-20.75,.50);
    glVertex2d(-20.50,.50);


    glVertex2d(-20.75,.75);
    glVertex2d(-20.50,.75);

    glVertex2d(-20.75,1);
    glVertex2d(-20.50,1);

    glVertex2d(-20.75,1.25);
    glVertex2d(-20.50,1.25);

    glVertex2d(-20.75,1.5);
    glVertex2d(-20.50,1.5);

    glVertex2d(-20.75,1.75);
    glVertex2d(-20.50,1.75);

    glVertex2d(-20.75,2);
    glVertex2d(-20.50,2);


    glEnd();


    //STRIPE LINE BORDER

    glBegin(GL_LINES);
    glColor3ub(0,0,0);

    glVertex2d(-20.75,-1);
    glVertex2d(-20.75,2);

    glVertex2d(-20.50,-1);
    glVertex2d(-20.50,2);

    glEnd();

    glPopMatrix();



}

void upgate2_down(int value)
{
    if(down_2==true)
    {

         move_gate_2-=0.1;

    if(move_gate_2<-3)
    {
        move_gate_2=-3;
        down_2=false;

    }
    }



glutPostRedisplay();
glutTimerFunc(25, upgate2_down, 0);
}

void upgate2_up(int value)
{
    if(up_2==true)
    {
        move_gate_2+=.1;
        if(move_gate_2>.1)
        {
            move_gate_2=.1;
            up_2=false;
        }
    }
    glutPostRedisplay();
glutTimerFunc(25, upgate2_up, 0);
}

void sewage_canal_1()
{
    glBegin(GL_POLYGON);
    glColor3ub(179, 182, 183);



    //*****************************LOWER FLOOR PART ********
    glVertex2d(-26,-4);
    glVertex2d(-26,-4.25);
    glVertex2d(-20.50,-4.25);
    glVertex2d(-20.50,-4);
    glEnd();

    //BOLD PART
    glBegin(GL_POLYGON);
    glColor3ub(98, 101, 103);
    glVertex2d(-25,-4);
    glVertex2d(-25,-4.25);
    glVertex2d(-24.50,-4.25);
    glVertex2d(-24.50,-4);
    glEnd();

    //BOLD PART
    glBegin(GL_POLYGON);
    glColor3ub(98, 101, 103);
    glVertex2d(-21,-4);
    glVertex2d(-21,-4.25);
    glVertex2d(-20.50,-4.25);
    glVertex2d(-20.50,-4);
    glEnd();




    //************************WATER PART******************

    glBegin(GL_POLYGON);
    //glColor3ub(83, 164, 255 );
    set_color("water");

    glVertex2d(-24.50,-2);
    glVertex2d(-24.50,-4);

    set_color("water-shade");
    glVertex2d(-21,-4);
    glVertex2d(-21,-2);
    set_color("water-shade");

    glEnd();





    //************************ moving water*************************



    glPushMatrix();
    glTranslatef(0,move_water_1,0);
    glBegin(GL_POLYGON);
   // glColor3ub(83, 164, 255);
   set_color("water");


    glVertex2d(-24.50,-2);
    glVertex2d(-24.50,-4);
    set_color("water-shade");
    glVertex2d(-21,-4);
    glVertex2d(-21,-2);
    set_color("water-shade");

    glEnd();
    glPopMatrix();

    //FIRST_GATE();
    //SECOND_GATE();

}

void canal1_up(int value)
{
    //move_gate_1 +=0.3;

    if(canal_1==true)
    {
        move_water_1+=0.1;
        move_ship_y +=.1;

    if(move_water_1>2)
    {
        move_water_1=2;
        canal_1=false;
    }

    }





    glutPostRedisplay();
glutTimerFunc(40, canal1_up, 0);

}

void THIRD_GATE()
{
     //******************3RD GATE LEFT PART

    glBegin(GL_POLYGON);
    glColor3ub(102, 51, 0);

    glVertex2d(-16,-3);
    glVertex2d(-15.75,-3);
    glVertex2d(-15.75,5);
    glVertex2d(-16,5);

    glEnd();


    //******************3RD GATE RIGHT PART

    glBegin(GL_POLYGON);
    glColor3ub(229, 231, 233);

    glVertex2d(-15.75,-3);
    glVertex2d(-15.50,-3);
    glVertex2d(-15.50,3);
    glVertex2d(-15.75,3);

    glEnd();


    //******** STRIPE PART COLOR****

    glPushMatrix();
    glTranslatef(0,move_gate_3,0);

    glBegin(GL_POLYGON);
    glColor3ub(181, 151, 106);

    glVertex2d(-15.75,1.50);
    glVertex2d(-15.50,1.50);
    glVertex2d(-15.50,5);
    glVertex2d(-15.75,5);

    glEnd();

    //*************** STRIPE LINE
    glBegin(GL_LINES);
    glColor3ub(0,0,0);

    glVertex2d(-15.50,1.5);
    glVertex2d(-15.75,1.5);

    glVertex2d(-15.5,1.75);
    glVertex2d(-15.75,1.75);

    glVertex2d(-15.5,2);
    glVertex2d(-15.75,2);

    glVertex2d(-15.5,2.25);
    glVertex2d(-15.75,2.25);

    glVertex2d(-15.5,2.5);
    glVertex2d(-15.75,2.5);

    glVertex2d(-15.5,2.75);
    glVertex2d(-15.75,2.75);

    glVertex2d(-15.5,3);
    glVertex2d(-15.75,3);

    glVertex2d(-15.5,3.25);
    glVertex2d(-15.75,3.25);

    glVertex2d(-15.5,3.5);
    glVertex2d(-15.75,3.5);

    glVertex2d(-15.5,3.75);
    glVertex2d(-15.75,3.75);

    glVertex2d(-15.5,4);
    glVertex2d(-15.75,4);

    glVertex2d(-15.5,4.25);
    glVertex2d(-15.75,4.25);

    glVertex2d(-15.5,4.5);
    glVertex2d(-15.75,4.5);

    glVertex2d(-15.5,4.75);
    glVertex2d(-15.75,4.75);

    glVertex2d(-15.5,5);
    glVertex2d(-15.75,5);

    glEnd();


    //STRIPE LINE BORDER

    glBegin(GL_LINES);
    glColor3ub(0,0,0);

    glVertex2d(-15.75,1.5);
    glVertex2d(-15.75,5);

    glVertex2d(-15.5,1.5);
    glVertex2d(-15.5,5);

    glEnd();

    glPopMatrix();

}

void upgate3_down(int value)
{
    if(down_3==true)
    {

         move_gate_3-=0.1;

    if(move_gate_3<-4.5)
    {
        move_gate_3=-4.5;
        down_3=false;

    }
    }



glutPostRedisplay();
glutTimerFunc(25, upgate3_down, 0);

}

void upgate3_up(int value)
{
    if(up_3==true)
    {
        move_gate_3+=.1;
        if(move_gate_3>.1)
        {
            move_gate_3=.1;
            up_3=false;
        }
    }
    glutPostRedisplay();
glutTimerFunc(25, upgate3_up, 0);
}

void sewage_canal_2()
{

    //*******************%%&%&%&%&%&%&%&%&%&%&% 2ND SWEAGE GATE**********************


    // ***************LOWER FLOOR PART
    glBegin(GL_POLYGON);
    glColor3ub(179, 182, 183);
    glVertex2d(-20.50,-3.25);
    glVertex2d(-15.50,-3.25);
    glVertex2d(-15.50,-3);
    glVertex2d(-20.50,-3);
    glEnd();

    //****BOLD PART*********

    glBegin(GL_POLYGON);
    glColor3ub(98, 101, 103);

    glVertex2d(-16,-3.25);
    glVertex2d(-15.50,-3.25);
    glVertex2d(-15.50,-3);
    glVertex2d(-16,-3);

    glEnd();





    //************************WATER PART******************

    glBegin(GL_POLYGON);
   // glColor3ub(83, 164, 255 );
   set_color("water");
    glVertex2d(-20.5,0);
    glVertex2d(-20.5,-3);
    //glColor3ub(109, 142, 217 );
    set_color("water-shade");
    glVertex2d(-16,-3);
    glVertex2d(-16,-0);
    set_color("water-shade");

    glEnd();



    //**********************************MOVING WATER************************

    glPushMatrix();
    glTranslatef(0,move_water_2,0);
    glBegin(GL_POLYGON);
    //glColor3ub(83, 164, 255);
    set_color("water");

    glVertex2d(-20.5,0);
    glVertex2d(-20.5,-3);
    set_color("water-shade");
    glVertex2d(-16,-3);
    glVertex2d(-16,-0);
    set_color("water-shade");

    glEnd();
    glPopMatrix();


   // THIRD_GATE();



}

void canal2_up(int value)
{
    //move_gate_1 +=0.3;

    if(canal_2==true)
    {
        move_water_2+=0.1;
        move_ship_y +=.1;

    if(move_water_2>2)
    {
        move_water_2=2;
        canal_2=false;
    }

    }

    glutPostRedisplay();
glutTimerFunc(40, canal2_up, 0);

}

void fourth_gate()
{
    //LEFT PART

    glBegin(GL_POLYGON);
    glColor3ub(102, 51, 0);

    glVertex2d(-9,-2);
    glVertex2d(-8.75,-2);
    glVertex2d(-8.75,9);
    glVertex2d(-9,9);
    glEnd();


    //RIGHT PART

    glBegin(GL_POLYGON);
    glColor3ub(229, 231, 233);

    glVertex2d(-8.75,-2);
    glVertex2d(-8.50,-2);
    glVertex2d(-8.50,9);
    glVertex2d(-8.75,9);
    glEnd();

    //stripe part color

    glPushMatrix();
    glTranslatef(0,move_gate_4,0);


    glBegin(GL_POLYGON);
    glColor3ub(181, 151, 106);

    glVertex2d(-8.75,3.50);
    glVertex2d(-8.50,3.50);
    glVertex2d(-8.50,9);
    glVertex2d(-8.75,9);
    glEnd();

    //stripe line

    glBegin(GL_LINES);
    glColor3ub(0,0,0);

    glVertex2d(-8.75,3.50);
    glVertex2d(-8.50,3.50);

    glVertex2d(-8.75,3.75);
    glVertex2d(-8.50,3.75);

    glVertex2d(-8.75,4);
    glVertex2d(-8.50,4);

    glVertex2d(-8.750,4.25);
    glVertex2d(-8.50,4.25);

    glVertex2d(-8.750,4.5);
    glVertex2d(-8.50,4.5);

    glVertex2d(-8.750,4.75);
    glVertex2d(-8.50,4.75);

    glVertex2d(-8.750,5);
    glVertex2d(-8.50,5);

    glVertex2d(-8.750,5.25);
    glVertex2d(-8.50,5.25);

    glVertex2d(-8.750,5.5);
    glVertex2d(-8.50,5.5);

    glVertex2d(-8.750,5.75);
    glVertex2d(-8.50,5.75);

    glVertex2d(-8.750,6);
    glVertex2d(-8.50,6);

    glVertex2d(-8.750,6.25);
    glVertex2d(-8.50,6.25);

    glVertex2d(-8.750,6.5);
    glVertex2d(-8.50,6.5);

    glVertex2d(-8.750,6.75);
    glVertex2d(-8.50,6.75);

    glVertex2d(-8.750,7);
    glVertex2d(-8.50,7);

    glVertex2d(-8.750,7.25);
    glVertex2d(-8.50,7.25);

    glVertex2d(-8.750,7.5);
    glVertex2d(-8.50,7.5);

    glVertex2d(-8.750,7.75);
    glVertex2d(-8.50,7.75);

    glVertex2d(-8.750,8);
    glVertex2d(-8.50,8);

    glVertex2d(-8.750,8.25);
    glVertex2d(-8.50,8.25);

    glVertex2d(-8.750,8.5);
    glVertex2d(-8.50,8.5);

    glVertex2d(-8.750,8.75);
    glVertex2d(-8.50,8.75);

    glVertex2d(-8.750,9);
    glVertex2d(-8.5,9);
    glEnd();

    //STRIPE LINE BORDER

    glBegin(GL_LINES);
    glColor3ub(0,0,0);

    glVertex2d(-8.75,3.50);
    glVertex2d(-8.75,9);

    glVertex2d(-8.5,3.50);
    glVertex2d(-8.5,9);
    glEnd();

    glPopMatrix();

}

void upgate4_down(int value)
{
    if(down_4==true)
    {

         move_gate_4-=0.1;

    if(move_gate_4<-5.5)
    {
        move_gate_4=-5.5;
        down_4=false;

    }
    }



glutPostRedisplay();

glutTimerFunc(25, upgate4_down, 0);

}

void upgate4_up(int value)
{
    if(up_4==true)
    {
        move_gate_4+=.1;
        if(move_gate_4>.1)
        {
            move_gate_4=.1;
            up_4=false;
        }
    }
    glutPostRedisplay();
glutTimerFunc(25, upgate4_up, 0);
}

void sewage_canal_3()
{
    //lower part

    glBegin(GL_POLYGON);
   glColor3ub(179, 182, 183);

   glVertex2d(-15.50,-2);
   glVertex2d(-15.50,-2.25);
   glVertex2d(-9,-2.25);
   glVertex2d(-9,-2);
   glEnd();



   //BOLD PART
    glBegin(GL_POLYGON);
    glColor3ub(98, 101, 103);

    glVertex2d(-9,-2);
    glVertex2d(-9,-2.25);
    glVertex2d(-8.50,-2.25);
    glVertex2d(-8.50,-2);
    glEnd();



   //water part

   glBegin(GL_POLYGON);
   //glColor3ub(83, 164, 255 );
   set_color("water");

    glVertex2d(-15.50,-2);
    glVertex2d(-9,-2);
   // set_color("water-shade");
    glVertex2d(-9,2);
    glVertex2d(-15.50,2);
   // set_color("water-shade");
    glEnd();


    //moving water part

    glPushMatrix();
    glTranslatef(0,move_water_3,0);
    glBegin(GL_POLYGON);
   //glColor3ub(83, 164, 255 );
   set_color("water");

   glVertex2d(-15.50,-1);

   glVertex2d(-8.75,-1);
   set_color("water-shade");
   glVertex2d(-8.75,2);
   set_color("water-shade");
   glVertex2d(-15.5,2);
   set_color("water-shade");
   glEnd();
   glPopMatrix();


}

void canal3_up(int value)
{
    //move_gate_1 +=0.3;

    if(canal_3==true)
    {
        move_water_3+=0.1;
        move_ship_y +=.1;

    if(move_water_3>2)
    {
        move_water_3=2;
        canal_3=false;
    }

    }

    glutPostRedisplay();
glutTimerFunc(40, canal3_up, 0);

}

void fifth_gate()
{

    glPushMatrix();
    glTranslatef(15,0,0);
    //LEFT PART

    glBegin(GL_POLYGON);
    glColor3ub(102, 51, 0);

    glVertex2d(-9,-2);
    glVertex2d(-8.75,-2);
    glVertex2d(-8.75,9);
    glVertex2d(-9,9);
    glEnd();


    //RIGHT PART

    glBegin(GL_POLYGON);
    glColor3ub(229, 231, 233);

    glVertex2d(-8.75,-2);
    glVertex2d(-8.50,-2);
    glVertex2d(-8.50,9);
    glVertex2d(-8.75,9);
    glEnd();

    //stripe part color

    glPushMatrix();
    glTranslatef(0,move_gate_5,0);

    glBegin(GL_POLYGON);
    glColor3ub(181, 151, 106);

    glVertex2d(-8.75,3.50);
    glVertex2d(-8.50,3.50);
    glVertex2d(-8.50,9);
    glVertex2d(-8.75,9);
    glEnd();

    //stripe line

    glBegin(GL_LINES);

    glColor3ub(0,0,0);

    glVertex2d(-8.75,3.50);
    glVertex2d(-8.50,3.50);

    glVertex2d(-8.75,3.75);
    glVertex2d(-8.50,3.75);

    glVertex2d(-8.75,4);
    glVertex2d(-8.50,4);

    glVertex2d(-8.750,4.25);
    glVertex2d(-8.50,4.25);

    glVertex2d(-8.750,4.5);
    glVertex2d(-8.50,4.5);

    glVertex2d(-8.750,4.75);
    glVertex2d(-8.50,4.75);

    glVertex2d(-8.750,5);
    glVertex2d(-8.50,5);

    glVertex2d(-8.750,5.25);
    glVertex2d(-8.50,5.25);

    glVertex2d(-8.750,5.5);
    glVertex2d(-8.50,5.5);

    glVertex2d(-8.750,5.75);
    glVertex2d(-8.50,5.75);

    glVertex2d(-8.750,6);
    glVertex2d(-8.50,6);

    glVertex2d(-8.750,6.25);
    glVertex2d(-8.50,6.25);

    glVertex2d(-8.750,6.5);
    glVertex2d(-8.50,6.5);

    glVertex2d(-8.750,6.75);
    glVertex2d(-8.50,6.75);

    glVertex2d(-8.750,7);
    glVertex2d(-8.50,7);

    glVertex2d(-8.750,7.25);
    glVertex2d(-8.50,7.25);

    glVertex2d(-8.750,7.5);
    glVertex2d(-8.50,7.5);

    glVertex2d(-8.750,7.75);
    glVertex2d(-8.50,7.75);

    glVertex2d(-8.750,8);
    glVertex2d(-8.50,8);

    glVertex2d(-8.750,8.25);
    glVertex2d(-8.50,8.25);

    glVertex2d(-8.750,8.5);
    glVertex2d(-8.50,8.5);

    glVertex2d(-8.750,8.75);
    glVertex2d(-8.50,8.75);

    glVertex2d(-8.750,9);
    glVertex2d(-8.5,9);
    glEnd();

    //STRIPE LINE BORDER

    glBegin(GL_LINES);
    glColor3ub(0,0,0);

    glVertex2d(-8.75,3.50);
    glVertex2d(-8.75,9);

    glVertex2d(-8.5,3.50);
    glVertex2d(-8.5,9);
    glEnd();
    glPopMatrix();
    glPopMatrix();



}

void upgate5_down(int value)
{
     if(down_5==true)
    {

         move_gate_5-=0.1;

    if(move_gate_5<-5.5)
    {
        move_gate_5=-5.5;
        down_5=false;

    }
    }



glutPostRedisplay();

glutTimerFunc(25, upgate5_down, 0);

}

void upgate5_up(int value)
{
      if(up_5==true)
    {
        move_gate_5+=.1;
        if(move_gate_5>.0)
        {
            move_gate_5=.0;
            up_5=false;
        }
    }
    glutPostRedisplay();
glutTimerFunc(25, upgate5_up, 0);
}

void sewage_canal_4()
{
    //fourth_gate();


    //lower part

   glBegin(GL_POLYGON);
   glColor3ub(179, 182, 183);

   glVertex2d(-8.75,-2.25);
   glVertex2d(-8.75,-5.25);
   glVertex2d(-8.5,-5.25);
   glVertex2d(-8.5,-2.25);
   glEnd();



   glBegin(GL_POLYGON);
   glColor3ub(179, 182, 183);

   glVertex2d(-8.75,-5.25);
   glVertex2d(6.25,-5.25);
   glVertex2d(6.25,-5);
   glVertex2d(-8.75,-5);
   glEnd();


   glBegin(GL_POLYGON);
   glColor3ub(179, 182, 183);

   glVertex2d(6,-5);
   glVertex2d(6.25,-5);
   glVertex2d(6.25,-2.25);
   glVertex2d(6,-2.25);
   glEnd();





    // lower water part

    // fifth_gate();




    // water part

    glBegin(GL_POLYGON);
    //glColor3ub(83, 164, 255 );
    set_color("water");

    glVertex2d(-8.50,-2);
    glVertex2d(6,-2);
    set_color("water-shade");
    glVertex2d(6,4);
    glVertex2d(-8.50,4);
    set_color("water-shade");
    glEnd();


    glBegin(GL_POLYGON);
    //glColor3ub(83, 164, 255 );
    set_color("water");

    glVertex2d(-8.5,-5);
    glVertex2d(6,-5);
  //  set_color("water-shade");
    glVertex2d(6,-2);
    glVertex2d(-8.5,-2);
   // set_color("water-shade");
    glEnd();



    //bold part

    glBegin(GL_POLYGON);
    glColor3ub(98, 101, 103);

    glVertex2d(6,-2);
    glVertex2d(6.0,-2.25);
    glVertex2d(6.50,-2.25);
    glVertex2d(6.50,-2);
    glEnd();

}

void sixth_gate()
{
    //left part
    glBegin(GL_POLYGON);
    glColor3ub(102, 51, 0);

    glVertex2d(11,-2);
    glVertex2d(11.25,-2);
    glVertex2d(11.25,4);
    glVertex2d(11,4);
    glEnd();


     //RIGHT PART

    glBegin(GL_POLYGON);
    glColor3ub(229, 231, 233);

    glVertex2d(11.25,-2);
    glVertex2d(11.5,-2);
    glVertex2d(11.5,4);
    glVertex2d(11.25,4);
    glEnd();


    //stripe part color

    glPushMatrix();
    glTranslatef(0,move_gate_6,0);

    glBegin(GL_POLYGON);
    glColor3ub(181, 151, 106);

    glVertex2d(11.25,1);
    glVertex2d(11.5,1);
    glVertex2d(11.5,4);
    glVertex2d(11.25,4);
    glEnd();

    //stripe lines

    glBegin(GL_LINES);
    glColor3b(0,0,0);

    glVertex2d(11.25,1);
    glVertex2d(11.5,1);

    glVertex2d(11.25,1.25);
    glVertex2d(11.5,1.25);

    glVertex2d(11.25,1.5);
    glVertex2d(11.5,1.5);

    glVertex2d(11.25,1.75);
    glVertex2d(11.5,1.75);

    glVertex2d(11.25,2);
    glVertex2d(11.5,2);

    glVertex2d(11.25,2.25);
    glVertex2d(11.5,2.25);

    glVertex2d(11.25,2.5);
    glVertex2d(11.5,2.5);

    glVertex2d(11.25,2.75);
    glVertex2d(11.5,2.75);

    glVertex2d(11.25,3);
    glVertex2d(11.5,3);

    glVertex2d(11.25,3.25);
    glVertex2d(11.5,3.25);

    glVertex2d(11.25,3.5);
    glVertex2d(11.5,3.5);

    glVertex2d(11.25,3.75);
    glVertex2d(11.5,3.75);

    glVertex2d(11.25,4);
    glVertex2d(11.5,4);

    glEnd();


    //BORDER LINES

    glBegin(GL_LINES);
    glColor3b(0,0,0);

    glVertex2d(11.5,1);
    glVertex2d(11.5,4);

    glVertex2d(11.25,1);
    glVertex2d(11.25,4);

    glEnd();
    glPopMatrix();


}

void upgate6_down(int value)
{
    if(down_6==true)
    {

         move_gate_6-=0.1;

    if(move_gate_6<-2.95)
    {
        move_gate_6=-2.95;
        down_6=false;

    }
    }



glutPostRedisplay();

glutTimerFunc(25, upgate6_down, 0);

}

void upgate6_up(int value)
{
    if(up_6==true)
    {
        move_gate_6+=.1;
        if(move_gate_6>.0)
        {
            move_gate_6=.0;
            up_6=false;
        }
    }
    glutPostRedisplay();
glutTimerFunc(25, upgate6_up, 0);
}

void sewage_canal_5()
{

   // sixth_gate();


    //lower part

   glBegin(GL_POLYGON);
   glColor3ub(179, 182, 183);

    glVertex2d(6.50,-2);
    glVertex2d(6.50,-2.25);
    glVertex2d(11,-2.25);
    glVertex2d(11,-2);
    glEnd();

    //BOLD PART

    glBegin(GL_POLYGON);
    glColor3ub(98, 101, 103);

    glVertex2d(11,-2);
    glVertex2d(11,-2.25);
    glVertex2d(11.5,-2.25);
    glVertex2d(11.5,-2);

    glEnd();


    //WATER PART

    glBegin(GL_POLYGON);
    //glColor3ub(83, 164, 255 );
    set_color("water");

    glVertex2d(6.50,-2);
    glVertex2d(11,-2);
    glVertex2d(11,2);

     glVertex2d(6.5,2);
    //set_color("water-shade");

    set_color("water-shade");


    set_color("water-shade");
    glEnd();

    //moving water
    glPushMatrix();
    glTranslatef(0,move_water_5,0);

    glBegin(GL_POLYGON);
    //glColor3ub(83, 164, 255 );
    set_color("water");
    glVertex2d(6.5,2);
    glVertex2d(11,2);
    set_color("water-shade");
    glVertex2d(11,4);
    glVertex2d(6.5,4);
    //set_color("water-shade");
    glEnd();
    glPopMatrix();

}

void canal5_up(int value)
{
    //move_gate_1 +=0.3;

    if(canal_5==true)
    {
        move_water_5 -=0.1;
        move_ship_y  -=.1;

    if(move_water_5<-2)
    {
        move_water_5=-2;
        canal_5=false;
    }

    }

    glutPostRedisplay();
glutTimerFunc(40, canal5_up, 0);

}

void seventh_gate()
{

    //left part
    glBegin(GL_POLYGON);
    glColor3ub(102, 51, 0);

    glVertex2d(17,-4);
    glVertex2d(17.25,-4);

    glVertex2d(17.25,3);
    glVertex2d(17,3);
    glEnd();


    //right part

    glBegin(GL_POLYGON);
    glColor3ub(229, 231, 233);

    glVertex2d(17.25,-4);
    glVertex2d(17.5,-4);
    glVertex2d(17.5,3);
    glVertex2d(17.25,3);
    glEnd();


    glPushMatrix();
    glTranslatef(0,move_gate_7,0);
    //stripe part color

    glBegin(GL_POLYGON);
    glColor3ub(181, 151, 106);

    glVertex2d(17.25,-.50);
    glVertex2d(17.5,-.50);
    glVertex2d(17.5,3);
    glVertex2d(17.25,3);
    glEnd();


    //stripe line

    glBegin(GL_LINES);
    glColor3b(0,0,0);

    glVertex2d(17.25,-.50);
    glVertex2d(17.5,-.50);

    glVertex2d(17.25,-.25);
    glVertex2d(17.5,-.25);


    glVertex2d(17.25,0.0);
    glVertex2d(17.5,0.0);

    glVertex2d(17.25,.25);
    glVertex2d(17.5,.25);

    glVertex2d(17.25,0.50);
    glVertex2d(17.5,0.50);

    glVertex2d(17.25,0.75);
    glVertex2d(17.5,0.75);

    glVertex2d(17.25,1);
    glVertex2d(17.5,1);

    glVertex2d(17.25,1.25);
    glVertex2d(17.5,1.25);

    glVertex2d(17.25,1.5);
    glVertex2d(17.5,1.5);

    glVertex2d(17.25,1.75);
    glVertex2d(17.5,1.75);

    glVertex2d(17.25,2);
    glVertex2d(17.5,2);

    glVertex2d(17.25,2.25);
    glVertex2d(17.5,2.25);

    glVertex2d(17.25,2.5);
    glVertex2d(17.5,2.5);

    glVertex2d(17.25,2.75);
    glVertex2d(17.5,2.75);

    glVertex2d(17.25,3);
    glVertex2d(17.5,3);

    glEnd();

    //BORDER STRIPE LINES

    glBegin(GL_LINES);
    glColor3b(0,0,0);

    glVertex2d(17.5,-.5);
    glVertex2d(17.5,3);

    glEnd();

    glPopMatrix();


}

void upgate7_down(int value)
{
    if(down_7==true)
    {

         move_gate_7-=0.1;

    if(move_gate_7<-3.5)
    {
        move_gate_7=-3.5;
        down_7=false;

    }
    }



glutPostRedisplay();

glutTimerFunc(25, upgate7_down, 0);

}

void upgate7_up(int value)
{
    if(up_7==true)
    {
        move_gate_7+=.1;
        if(move_gate_7>.0)
        {
            move_gate_7=.0;
            up_7=false;
        }
    }
    glutPostRedisplay();
glutTimerFunc(25, upgate7_up, 0);
}

void sewage_canal_6()
{
   // seventh_gate();
    //lower part
   glBegin(GL_POLYGON);
   glColor3ub(179, 182, 183);
   glVertex2d(11.50,-2);
   glVertex2d(11.50,-2.25);
   glVertex2d(12.75,-2.25);
   glVertex2d(12.75,-2);
   glVertex2d(11.50,-2);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(179, 182, 183);
   glVertex2d(12.75,-2);
   glVertex2d(12.75,-4);
   glVertex2d(13,-4);
   glVertex2d(13,-2);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(179, 182, 183);
   glVertex2d(12.75,-4.25);
   glVertex2d(17,-4.25);
   glVertex2d(17,-4);
   glVertex2d(12.75,-4);
   glEnd();

   //bold part


    glBegin(GL_POLYGON);
    glColor3ub(98, 101, 103);
    glVertex2d(17,-4);
    glVertex2d(17,-4.25);
    glVertex2d(17.5,-4.25);
    glVertex2d(17.5,-4);

    glEnd();

    //WATER PART

    glBegin(GL_POLYGON);
    //glColor3ub(83, 164, 255 );
    set_color("water");

    glVertex2d(11.5,-2);
    glVertex2d(17,-2);
    //set_color("water-shade");
    glVertex2d(17,0);
    glVertex2d(11.5,0);
   // set_color("water-shade");
    glEnd();

    glBegin(GL_POLYGON);
    //glColor3ub(83, 164, 255 );
    set_color("water");
    glVertex2d(13,-2);
    glVertex2d(13,-4);
   // set_color("water-shade");
    glVertex2d(17,-4);
    glVertex2d(17,-2);
   // set_color("water-shade");
    glEnd();

    //moving water
    glPushMatrix();
    glTranslatef(0,move_water_6,0);

     glBegin(GL_POLYGON);
    //glColor3ub(83, 164, 255 );
    set_color("water");

    glVertex2d(11.5,0);
    glVertex2d(17,0);
    set_color("water-shade");
    glVertex2d(17,2);
    glVertex2d(11.5,2);
    set_color("water-shade");
    glEnd();
    glPopMatrix();

}

void canal6_up(int value)
{
    //move_gate_1 +=0.3;

    if(canal_6==true)
    {
        move_water_6 -=0.1;
        move_ship_y  -=.1;

    if(move_water_6<-2)
    {
        move_water_6=-2;
        canal_6=false;
    }

    }

    glutPostRedisplay();
glutTimerFunc(40, canal6_up, 0);

}

void eight_gate()
{
    //left part
    glBegin(GL_POLYGON);
    glColor3ub(102, 51, 0);

    glVertex2d(23,-4);
    glVertex2d(23.25,-4);
    glVertex2d(23.25,2);
    glVertex2d(23,2);
    glEnd();


     //right part

    glBegin(GL_POLYGON);
    glColor3ub(229, 231, 233);

    glVertex2d(23.25,-4);
    glVertex2d(23.5,-4);
    glVertex2d(23.5,2);
    glVertex2d(23.25,2);
    glEnd();

    glPushMatrix();
    glTranslatef(0,move_gate_8,0);

    //stripe part color

    glBegin(GL_POLYGON);
    glColor3ub(181, 151, 106);

    glVertex2d(23.25,-1);
    glVertex2d(23.5,-1);
    glVertex2d(23.5,2);
    glVertex2d(23.25,2);
    glEnd();

    //stripe line
    glBegin(GL_LINES);
    glColor3b(0,0,0);

    glVertex2d(23.25,-1);
    glVertex2d(23.5,-1);

    glVertex2d(23.25,-.75);
    glVertex2d(23.5,-.75);

    glVertex2d(23.25,-.5);
    glVertex2d(23.5,-.5);

    glVertex2d(23.25,-.25);
    glVertex2d(23.5,-.25);

    glVertex2d(23.25,-0);
    glVertex2d(23.5,-0);

    glVertex2d(23.25,.25);
    glVertex2d(23.5,0.25);

    glVertex2d(23.25,0.5);
    glVertex2d(23.5,0.5);

    glVertex2d(23.25,0.75);
    glVertex2d(23.5,0.75);

    glVertex2d(23.25,1);
    glVertex2d(23.5,1);

    glVertex2d(23.25,1.25);
    glVertex2d(23.5,1.25);

    glVertex2d(23.25,1.5);
    glVertex2d(23.5,1.5);

    glVertex2d(23.25,1.75);
    glVertex2d(23.5,1.75);

    glVertex2d(23.25,2);
    glVertex2d(23.5,2);


    glEnd();


    //BORDER LINE

    glBegin(GL_LINES);
    glColor3b(0,0,0);

    glVertex2d(23.5,-1);
    glVertex2d(23.5,2);
    glEnd();
    glPopMatrix();


}

void upgate8_down(int value)
{
    if(down_8==true)
    {

         move_gate_8-=0.1;

    if(move_gate_8<-3)
    {
        move_gate_8=-3;
        down_8=false;

    }
    }



glutPostRedisplay();

glutTimerFunc(25, upgate8_down, 0);

}

void upgate8_up(int value)
{
    if(up_8==true)
    {
        move_gate_8+=.1;
        if(move_gate_8>.0)
        {
            move_gate_8=.0;
            up_8=false;
        }
    }
    glutPostRedisplay();
glutTimerFunc(25, upgate8_up, 0);
}

void sewage_canal_7()
{
   // eigth_gate();

    //lower part

   glBegin(GL_POLYGON);
   glColor3ub(179, 182, 183);

   glVertex2d(17.50,-4);
   glVertex2d(17.50,-4.25);
   glVertex2d(23,-4.25);
   glVertex2d(23,-4);

   glEnd();

   //bold part


    glBegin(GL_POLYGON);
    glColor3ub(98, 101, 103);

    glVertex2d(23,-4);
    glVertex2d(23,-4.25);
    glVertex2d(23.5,-4.25);
    glVertex2d(23.5,-4);

    glEnd();

    //WATER PART

    glBegin(GL_POLYGON);
    //glColor3ub(83, 164, 255 );
    set_color("water");

    glVertex2d(17.5,-4);
    glVertex2d(23,-4);
   // set_color("water-shade");
    glVertex2d(23,-2);
    glVertex2d(17.5,-2);
   // set_color("water-shade");
    glEnd();

    //moving water part
    glPushMatrix();
    glTranslatef(0,move_water_7,0);

    glBegin(GL_POLYGON);
    //glColor3ub(83, 164, 255 );
    set_color("water");

    glVertex2d(17.5,-2);
    glVertex2d(23,-2);
    set_color("water-shade");
    glVertex2d(23,0);
    glVertex2d(17.5,0);
    set_color("water-shade");
    glEnd();
    glPopMatrix();

}

void canal7_up(int value)
{
    //move_gate_1 +=0.3;

    if(canal_7==true)
    {
        move_water_7 -=0.1;
        move_ship_y  -=.1;

    if(move_water_7<-2)
    {
        move_water_7=-2;
        canal_7=false;
    }

    }

    glutPostRedisplay();
glutTimerFunc(40, canal7_up, 0);

}

void mountain_front()
{
    glPushMatrix();

    //mountain part
    glTranslatef(0,3,0);
    glScalef(32,18,0);
    glBegin(GL_TRIANGLE_FAN);

            glColor3ub(152, 217, 12);
            glVertex2f(-0.960f, 0.033f);
            glVertex2f(-0.905f, 0.231f);
            glVertex2f(-0.854f, 0.223f);
            glVertex2f(-0.836f, 0.168f);
            glVertex2f(-0.838f, -0.303f);
            glVertex2f(-1.000f, -0.303f);
            glVertex2f(-1.000f, 0.049f);
            glVertex2f(-1.000f, 0.053f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            //glColor3ub(34,112,0);
            set_color("frontmountaingreen");

            glVertex2f(-0.960f, 0.033f);
            glVertex2f(-0.905f, 0.231f);
            glVertex2f(-0.854f, 0.223f);
            glVertex2f(-0.836f, 0.168f);
            glVertex2f(-0.838f, -0.303f);
            glVertex2f(-1.000f, -0.303f);
            glVertex2f(-1.000f, 0.049f);
            glVertex2f(-1.000f, 0.053f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
           // glColor3ub(34,112,0);
            set_color("frontmountaingreen");
            glVertex2f(-0.794f, 0.207f);
            glVertex2f(-0.703f, 0.413f);
            glVertex2f(-0.627f, 0.326f);
            glVertex2f(-0.629f, -0.311f);
            glVertex2f(-0.843f, -0.303f);
            glVertex2f(-0.843f, 0.168f);
            glVertex2f(-0.796f, 0.247f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            //glColor3ub(34,112,0);
            set_color("frontmountaingreen");
            glVertex2f(-0.794f, 0.207f);
            glVertex2f(-0.703f, 0.413f);
            glVertex2f(-0.627f, 0.326f);
            glVertex2f(-0.629f, -0.311f);
            glVertex2f(-0.843f, -0.303f);
            glVertex2f(-0.843f, 0.168f);
            glVertex2f(-0.796f, 0.247f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            //glColor3ub(34,112,0);
            set_color("frontmountaingreen");
            glVertex2f(-0.403f, 0.456f);
            glVertex2f(-0.389f, 0.468f);
            glVertex2f(-0.360f, 0.421f);
            glVertex2f(-0.338f, 0.432f);
            glVertex2f(-0.287f, 0.361f);
            glVertex2f(-0.269f, 0.306f);
            glVertex2f(-0.269f, -0.275f);
            glVertex2f(-0.636f, -0.307f);
            glVertex2f(-0.629f, 0.326f);
            glVertex2f(-0.565f, 0.413f);
            glVertex2f(-0.569f, 0.369f);
            glVertex2f(-0.452f, 0.543f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
           // glColor3ub(34,112,0);
           set_color("frontmountaingreen");
            glVertex2f(-0.403f, 0.456f);
            glVertex2f(-0.389f, 0.468f);
            glVertex2f(-0.360f, 0.421f);
            glVertex2f(-0.338f, 0.432f);
            glVertex2f(-0.287f, 0.361f);
            glVertex2f(-0.269f, 0.306f);
            glVertex2f(-0.269f, -0.275f);
            glVertex2f(-0.636f, -0.307f);
            glVertex2f(-0.629f, 0.326f);
            glVertex2f(-0.565f, 0.413f);
            glVertex2f(-0.569f, 0.369f);
            glVertex2f(-0.452f, 0.543f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            //glColor3ub(34,112,0);
            set_color("frontmountaingreen");
            glVertex2f(-0.274f, -0.303f);
            glVertex2f(-0.643f, -0.303f);
            glVertex2f(-0.272f, -0.263f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
           // glColor3ub(34,112,0);
           set_color("frontmountaingreen");
            glVertex2f(-0.274f, -0.303f);
            glVertex2f(-0.643f, -0.303f);
            glVertex2f(-0.272f, -0.263f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
           // glColor3ub(34,112,0);
           set_color("frontmountaingreen");
            glVertex2f(-0.154f, 0.231f);
            glVertex2f(-0.132f, 0.258f);
            glVertex2f(0.000f, 0.187f);
            glVertex2f(0.017f, 0.152f);
            glVertex2f(0.017f, -0.326f);
            glVertex2f(-0.307f, -0.303f);
            glVertex2f(-0.269f, 0.302f);
            glVertex2f(-0.256f, 0.33f);
            glVertex2f(-0.176f, 0.278f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
           // glColor3ub(34,112,0);
           set_color("frontmountaingreen");
            glVertex2f(-0.154f, 0.231f);
            glVertex2f(-0.132f, 0.258f);
            glVertex2f(0.000f, 0.187f);
            glVertex2f(0.017f, 0.152f);
            glVertex2f(0.017f, -0.326f);
            glVertex2f(-0.307f, -0.303f);
            glVertex2f(-0.269f, 0.302f);
            glVertex2f(-0.256f, 0.33f);
            glVertex2f(-0.176f, 0.278f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
           // glColor3ub(34,112,0);
           set_color("frontmountaingreen");
            glVertex2f(0.077f, -0.224f);
            glVertex2f(0.017f, 0.148f);
            glVertex2f(0.224f, 0.239f);
            glVertex2f(0.388f, 0.112f);
            glVertex2f(0.393f, -0.362f);
            glVertex2f(0.008f, -0.323f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
           // glColor3ub(34,112,0);
           set_color("frontmountaingreen");
            glVertex2f(0.077f, -0.224f);
            glVertex2f(0.017f, 0.148f);
            glVertex2f(0.224f, 0.239f);
            glVertex2f(0.388f, 0.112f);
            glVertex2f(0.393f, -0.362f);
            glVertex2f(0.008f, -0.323f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
           // glColor3ub(34,112,0);
           set_color("frontmountaingreen");
            glVertex2f(0.022f, 0.14f);
            glVertex2f(0.006f, 0.14f);
            glVertex2f(0.035f, 0.148f);
            glVertex2f(0.095f, -0.291f);
            glVertex2f(-0.018f, -0.311f);
            glVertex2f(-0.009f, 0.144f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            //glColor3ub(107, 207, 94);
            set_color("frontmountaingreen");
            glVertex2f(0.022f, 0.14f);
            glVertex2f(0.006f, 0.14f);
            glVertex2f(0.035f, 0.148f);
            glVertex2f(0.095f, -0.291f);
            glVertex2f(-0.018f, -0.311f);
            glVertex2f(-0.009f, 0.144f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
           // glColor3ub(23, 129, 8);
           set_color("frontmountaingreen");
            glVertex2f(0.391f, 0.108f);
            glVertex2f(0.468f, 0.172f);
            glVertex2f(0.497f, 0.144f);
            glVertex2f(0.506f, -0.358f);
            glVertex2f(0.388f, -0.354f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            //glColor3ub(34,112,0);
            set_color("frontmountaingreen");
            glVertex2f(0.391f, 0.108f);
            glVertex2f(0.468f, 0.172f);
            glVertex2f(0.497f, 0.144f);
            glVertex2f(0.506f, -0.358f);
            glVertex2f(0.388f, -0.354f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            //glColor3ub(23, 129, 8);
            set_color("frontmountaingreen");
            glVertex2f(0.382f, 0.104f);
            glVertex2f(0.404f, 0.108f);
            glVertex2f(0.400f, 0.045f);
            glVertex2f(0.375f, 0.065f);
            glVertex2f(0.377f, 0.104f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            //glColor3ub(34,112,0);
            set_color("frontmountaingreen");
            glVertex2f(0.382f, 0.104f);
            glVertex2f(0.404f, 0.108f);
            glVertex2f(0.400f, 0.045f);
            glVertex2f(0.375f, 0.065f);
            glVertex2f(0.377f, 0.104f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
           // glColor3ub(34,112,0);
           set_color("frontmountaingreen");
            glVertex2f(0.846f, 0.314f);
            glVertex2f(0.868f, 0.33f);
            glVertex2f(0.926f, 0.258f);
            glVertex2f(0.940f, 0.207f);
            glVertex2f(0.955f, 0.243f);
            glVertex2f(0.995f, 0.215f);
            glVertex2f(1.000f, -0.366f);
            glVertex2f(0.497f, -0.354f);
            glVertex2f(0.491f, 0.148f);
            glVertex2f(0.757f, 0.425f);
            glVertex2f(0.806f, 0.345f);
            glVertex2f(0.822f, 0.361f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
          //  glColor3ub(34,112,0);
          set_color("frontmountaingreen");
            glVertex2f(0.846f, 0.314f);
            glVertex2f(0.868f, 0.33f);
            glVertex2f(0.926f, 0.258f);
            glVertex2f(0.940f, 0.207f);
            glVertex2f(0.955f, 0.243f);
            glVertex2f(0.995f, 0.215f);
            glVertex2f(1.000f, -0.366f);
            glVertex2f(0.497f, -0.354f);
            glVertex2f(0.491f, 0.148f);
            glVertex2f(0.757f, 0.425f);
            glVertex2f(0.806f, 0.345f);
            glVertex2f(0.822f, 0.361f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
           // glColor3ub(34,112,0);
           set_color("frontmountaingreen");
            glVertex2f(0.373f, 0.092f);
            glVertex2f(0.424f, 0.096f);
            glVertex2f(0.424f, -0.153f);
            glVertex2f(0.337f, -0.125f);
            glVertex2f(0.355f, 0.096f);
            glEnd();


            //********shadow part


             glBegin(GL_TRIANGLE_FAN);
            //glColor3ub(133,221,95);
            set_color("frontmountainshadow");
            glVertex2f(-0.836f, 0.128f);
            glVertex2f(-0.743f, 0.231f);
            glVertex2f(-0.780f, 0.164f);
            glVertex2f(-0.798f, 0.049f);
            glVertex2f(-0.918f, 0.033f);
            glVertex2f(-0.918f, 0.033f);
            glVertex2f(-0.909f, 0.195f);
            glVertex2f(-0.892f, 0.156f);
            glVertex2f(-0.876f, 0.211f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            //glColor3ub(133,221,95);
            set_color("frontmountainshadow");
            glVertex2f(-0.672f, 0.203f);
            glVertex2f(-0.660f, 0.187f);
            glVertex2f(-0.709f, 0.124f);
            glVertex2f(-0.707f, 0.128f);
            glVertex2f(-0.740f, 0.152f);
            glVertex2f(-0.654f, 0.266f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            //glColor3ub(133,221,95);
            set_color("frontmountainshadow");
            glVertex2f(-0.467f, 0.373f);
            glVertex2f(-0.467f, 0.353f);
            glVertex2f(-0.467f, 0.345f);
            glVertex2f(-0.467f, 0.342f);
            glVertex2f(-0.494f, 0.274f);
            glVertex2f(-0.494f, 0.27f);
            glVertex2f(-0.518f, 0.239f);
            glVertex2f(-0.532f, 0.219f);
            glVertex2f(-0.645f, 0.235f);
            glVertex2f(-0.645f, 0.231f);
            glVertex2f(-0.454f, 0.523f);
            glVertex2f(-0.454f, 0.472f);
            glVertex2f(-0.467f, 0.448f);
            glVertex2f(-0.467f, 0.448f);
            glVertex2f(-0.469f, 0.44f);
            glVertex2f(-0.469f, 0.44f);
            glVertex2f(-0.469f, 0.432f);
            glVertex2f(-0.469f, 0.428f);
            glVertex2f(-0.469f, 0.417f);
            glVertex2f(-0.469f, 0.405f);
            glVertex2f(-0.469f, 0.397f);
            glVertex2f(-0.467f, 0.393f);
            glVertex2f(-0.467f, 0.381f);
            glVertex2f(-0.467f, 0.381f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            //glColor3ub(133,221,95);
            set_color("frontmountainshadow");
            glVertex2f(-0.392f, 0.16f);
            glVertex2f(-0.445f, 0.318f);
            glVertex2f(-0.449f, 0.247f);
            glVertex2f(-0.429f, 0.172f);
            glVertex2f(-0.458f, -0.066f);
            glVertex2f(-0.447f, -0.109f);
            glVertex2f(-0.438f, -0.105f);
            glVertex2f(-0.360f, -0.089f);
            glVertex2f(-0.292f, -0.022f);
            glVertex2f(-0.327f, 0.085f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
           // glColor3ub(133,221,95);
           set_color("frontmountainshadow");
            glVertex2f(-0.332f, 0.338f);
            glVertex2f(-0.289f, 0.298f);
            glVertex2f(-0.298f, 0.247f);
            glVertex2f(-0.369f, 0.255f);
            glVertex2f(-0.367f, 0.251f);
            glVertex2f(-0.389f, 0.334f);
            glVertex2f(-0.383f, 0.401f);
            glVertex2f(-0.387f, 0.432f);
            glVertex2f(-0.358f, 0.381f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            //glColor3ub(133,221,95);
            set_color("frontmountainshadow");
            glVertex2f(-0.285f, 0.243f);
            glVertex2f(-0.263f, 0.306f);
            glVertex2f(-0.249f, 0.255f);
            glVertex2f(-0.294f, 0.179f);
            glVertex2f(-0.352f, 0.164f);
            glVertex2f(-0.352f, 0.164f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
          //  glColor3ub(133,221,95);
          set_color("frontmountainshadow");
            glVertex2f(-0.143f, 0.168f);
            glVertex2f(-0.209f, 0.1f);
            glVertex2f(-0.209f, 0.104f);
            glVertex2f(-0.165f, 0.215f);
            glVertex2f(-0.134f, 0.239f);
            glVertex2f(-0.112f, 0.215f);
            glVertex2f(-0.112f, 0.168f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
           // glColor3ub(133,221,95);
           set_color("frontmountainshadow");
            glVertex2f(-0.176f, -0.018f);
            glVertex2f(-0.156f, 0.021f);
            glVertex2f(-0.152f, 0.112f);
            glVertex2f(-0.138f, 0.14f);
            glVertex2f(-0.134f, 0.092f);
            glVertex2f(-0.123f, 0.057f);
            glVertex2f(-0.123f, -0.006f);
            glVertex2f(-0.147f, -0.085f);
            glVertex2f(-0.145f, -0.105f);
            glVertex2f(-0.263f, -0.097f);
            glVertex2f(-0.267f, -0.097f);
            glVertex2f(-0.205f, -0.05f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            //glColor3ub(133,221,95);
            set_color("frontmountainshadow");
            glVertex2f(0.040f, 0.128f);
            glVertex2f(0.155f, 0.175f);
            glVertex2f(0.180f, 0.116f);
            glVertex2f(0.257f, 0.136f);
            glVertex2f(0.291f, -0.042f);
            glVertex2f(0.128f, 0.017f);
            glVertex2f(0.082f, -0.117f);
            glVertex2f(-0.043f, -0.097f);
            glVertex2f(-0.040f, -0.097f);
            glVertex2f(-0.058f, -0.034f);
            glVertex2f(-0.036f, 0.037f);
            glVertex2f(-0.074f, 0.081f);
            glVertex2f(-0.060f, 0.12f);
            glVertex2f(-0.034f, 0.096f);
            glVertex2f(-0.083f, 0.215f);
            glVertex2f(0.008f, 0.164f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
           // glColor3ub(133,221,95);
           set_color("frontmountainshadow");
            glVertex2f(0.404f, 0.092f);
            glVertex2f(0.340f, 0.073f);
            glVertex2f(0.333f, 0.069f);
            glVertex2f(0.462f, 0.152f);
            glVertex2f(0.413f, 0.069f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            //glColor3ub(133,221,95);
            set_color("frontmountainshadow");
            glVertex2f(0.673f, 0.243f);
            glVertex2f(0.573f, 0.16f);
            glVertex2f(0.568f, 0.16f);
            glVertex2f(0.633f, 0.239f);
            glVertex2f(0.635f, 0.266f);
            glVertex2f(0.753f, 0.413f);
            glVertex2f(0.755f, 0.365f);
            glVertex2f(0.737f, 0.33f);
            glVertex2f(0.737f, 0.302f);
            glVertex2f(0.744f, 0.286f);
            glVertex2f(0.742f, 0.239f);
            glVertex2f(0.715f, 0.183f);
            glVertex2f(0.677f, 0.148f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            //glColor3ub(133,221,95);
            set_color("frontmountainshadow");
            glVertex2f(0.646f, -0.002f);
            glVertex2f(0.528f, -0.105f);
            glVertex2f(0.526f, -0.105f);
            glVertex2f(0.520f, -0.038f);
            glVertex2f(0.548f, -0.018f);
            glVertex2f(0.566f, 0.037f);
            glVertex2f(0.631f, 0.096f);
            glVertex2f(0.688f, 0.1f);
            glVertex2f(0.728f, 0.164f);
            glVertex2f(0.728f, 0.124f);
            glVertex2f(0.688f, 0.033f);
            glVertex2f(0.753f, 0.033f);
            glVertex2f(0.740f, 0.021f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            //glColor3ub(133,221,95);
            set_color("frontmountainshadow");
            glVertex2f(0.815f, 0.089f);
            glVertex2f(0.886f, 0.013f);
            glVertex2f(0.920f, -0.074f);
            glVertex2f(0.840f, -0.125f);
            glVertex2f(0.844f, -0.121f);
            glVertex2f(0.777f, -0.018f);
            glVertex2f(0.771f, -0.042f);
            glVertex2f(0.751f, 0.021f);
            glVertex2f(0.780f, 0.108f);
            glVertex2f(0.760f, 0.172f);
            glVertex2f(0.764f, 0.239f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            //glColor3ub(133,221,95);
            set_color("frontmountainshadow");
            glVertex2f(0.853f, 0.282f);
            glVertex2f(0.922f, 0.215f);
            glVertex2f(0.908f, 0.168f);
            glVertex2f(0.908f, 0.172f);
            glVertex2f(0.840f, 0.179f);
            glVertex2f(0.820f, 0.243f);
            glVertex2f(0.826f, 0.298f);
            glVertex2f(0.820f, 0.349f);
            glVertex2f(0.844f, 0.31f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            //glColor3ub(133,221,95);
            set_color("frontmountainshadow");
            glVertex2f(0.915f, 0.156f);
            glVertex2f(0.948f, 0.227f);
            glVertex2f(0.960f, 0.179f);
            glVertex2f(0.915f, 0.108f);
            glVertex2f(0.857f, 0.096f);
            glVertex2f(0.857f, 0.092f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
           // glColor3ub(133,221,95);
           set_color("frontmountainshadow");
            glVertex2f(0.997f, 0.136f);
            glVertex2f(0.997f, 0.199f);
            glVertex2f(0.977f, 0.211f);
            glVertex2f(0.995f, 0.179f);
            glVertex2f(0.960f, 0.092f);
            glVertex2f(0.960f, 0.1f);
            glVertex2f(0.962f, 0.049f);
            glEnd();


            // GREEN SHADE

            glPushMatrix();
            glTranslatef(0,-0.06,0);


              glBegin(GL_TRIANGLE_FAN);
           // glColor3ub(16,85,2);
           set_color("frontmountaingreenshade");
            glVertex2f(-0.663f, 0.405f);
            glVertex2f(-0.658f, 0.393f);
            glVertex2f(-0.656f, 0.389f);
            glVertex2f(-0.647f, 0.373f);
            glVertex2f(-0.643f, 0.369f);
            glVertex2f(-0.640f, 0.369f);
            glVertex2f(-0.636f, 0.369f);
            glVertex2f(-0.629f, 0.369f);
            glVertex2f(-0.627f, 0.369f);
            glVertex2f(-0.627f, 0.369f);
            glVertex2f(-0.623f, 0.369f);
            glVertex2f(-0.618f, 0.369f);
            glVertex2f(-0.623f, 0.377f);
            glVertex2f(-0.625f, 0.377f);
            glVertex2f(-0.629f, 0.385f);
            glVertex2f(-0.634f, 0.393f);
            glVertex2f(-0.638f, 0.397f);
            glVertex2f(-0.640f, 0.405f);
            glVertex2f(-0.652f, 0.413f);
            glVertex2f(-0.656f, 0.417f);
            glVertex2f(-0.660f, 0.421f);
            glVertex2f(-0.665f, 0.421f);
            glVertex2f(-0.674f, 0.428f);
            glVertex2f(-0.678f, 0.44f);
            glVertex2f(-0.683f, 0.448f);
            glVertex2f(-0.687f, 0.456f);
            glVertex2f(-0.689f, 0.46f);
            glVertex2f(-0.694f, 0.464f);
            glVertex2f(-0.696f, 0.464f);
            glVertex2f(-0.698f, 0.464f);
            glVertex2f(-0.698f, 0.464f);
            glVertex2f(-0.700f, 0.46f);
            glVertex2f(-0.700f, 0.444f);
            glVertex2f(-0.700f, 0.444f);
            glVertex2f(-0.698f, 0.428f);
            glVertex2f(-0.698f, 0.425f);
            glVertex2f(-0.696f, 0.417f);
            glVertex2f(-0.692f, 0.417f);
            glVertex2f(-0.687f, 0.417f);
            glVertex2f(-0.683f, 0.413f);
            glVertex2f(-0.674f, 0.409f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
           // glColor3ub(16,85,2);
           set_color("frontmountaingreenshade");
            glVertex2f(-0.849f, 0.013f);
            glVertex2f(-0.803f, 0.033f);
            glVertex2f(-0.780f, 0.073f);
            glVertex2f(-0.752f, 0.112f);
            glVertex2f(-0.723f, 0.124f);
            glVertex2f(-0.732f, 0.053f);
            glVertex2f(-0.754f, 0.037f);
            glVertex2f(-0.812f, -0.018f);
            glVertex2f(-0.840f, -0.101f);
            glVertex2f(-0.863f, -0.125f);
            glVertex2f(-0.889f, -0.137f);
            glVertex2f(-0.912f, -0.153f);
            glVertex2f(-0.920f, -0.16f);
            glVertex2f(-0.925f, -0.16f);
            glVertex2f(-0.934f, -0.149f);
            glVertex2f(-0.927f, -0.141f);
            glVertex2f(-0.889f, -0.089f);
            glVertex2f(-0.885f, -0.05f);
            glVertex2f(-0.889f, -0.002f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
           // glColor3ub(16,85,2);
           set_color("frontmountaingreenshade");
            glVertex2f(-0.414f, 0.492f);
            glVertex2f(-0.405f, 0.48f);
            glVertex2f(-0.400f, 0.476f);
            glVertex2f(-0.394f, 0.472f);
            glVertex2f(-0.392f, 0.476f);
            glVertex2f(-0.392f, 0.48f);
            glVertex2f(-0.392f, 0.492f);
            glVertex2f(-0.394f, 0.5f);
            glVertex2f(-0.396f, 0.5f);
            glVertex2f(-0.398f, 0.504f);
            glVertex2f(-0.452f, 0.587f);
            glVertex2f(-0.445f, 0.559f);
            glVertex2f(-0.445f, 0.535f);
            glVertex2f(-0.436f, 0.515f);
            glVertex2f(-0.423f, 0.5f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            //glColor3ub(16,85,2);
            set_color("frontmountaingreenshade");
            glVertex2f(0.582f, 0.258f);
            glVertex2f(0.595f, 0.27f);
            glVertex2f(0.611f, 0.29f);
            glVertex2f(0.624f, 0.302f);
            glVertex2f(0.631f, 0.326f);
            glVertex2f(0.635f, 0.338f);
            glVertex2f(0.635f, 0.338f);
            glVertex2f(0.508f, 0.199f);
            glVertex2f(0.520f, 0.199f);
            glVertex2f(0.531f, 0.199f);
            glVertex2f(0.542f, 0.203f);
            glVertex2f(0.551f, 0.223f);
            glVertex2f(0.566f, 0.243f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            //glColor3ub(16,85,2);
            set_color("frontmountaingreenshade");
            glVertex2f(0.551f, 0.251f);
            glVertex2f(0.568f, 0.274f);
            glVertex2f(0.582f, 0.286f);
            glVertex2f(0.588f, 0.29f);
            glVertex2f(0.595f, 0.29f);
            glVertex2f(0.606f, 0.298f);
            glVertex2f(0.511f, 0.199f);
            glVertex2f(0.511f, 0.199f);
            glVertex2f(0.511f, 0.207f);
            glVertex2f(0.513f, 0.219f);
            glVertex2f(0.520f, 0.223f);
            glVertex2f(0.526f, 0.223f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            //glColor3ub(16,85,2);
            set_color("frontmountaingreenshade");
            glVertex2f(0.975f, -0.042f);
            glVertex2f(0.988f, -0.038f);
            glVertex2f(0.991f, -0.038f);
            glVertex2f(0.993f, -0.034f);
            glVertex2f(0.993f, -0.03f);
            glVertex2f(0.993f, -0.014f);
            glVertex2f(0.993f, -0.006f);
            glVertex2f(0.995f, -0.006f);
            glVertex2f(1.000f, -0.006f);
            glVertex2f(0.895f, -0.204f);
            glVertex2f(0.895f, -0.204f);
            glVertex2f(0.928f, -0.153f);
            glVertex2f(0.951f, -0.105f);
            glVertex2f(0.951f, -0.062f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            //glColor3ub(16,85,2);
            set_color("frontmountaingreenshade");
            glVertex2f(0.304f, 0.215f);
            glVertex2f(0.322f, 0.199f);
            glVertex2f(0.326f, 0.199f);
            glVertex2f(0.326f, 0.199f);
            glVertex2f(0.337f, 0.199f);
            glVertex2f(0.342f, 0.199f);
            glVertex2f(0.342f, 0.199f);
            glVertex2f(0.342f, 0.183f);
            glVertex2f(0.357f, 0.164f);
            glVertex2f(0.368f, 0.164f);
            glVertex2f(0.373f, 0.168f);
            glVertex2f(0.373f, 0.168f);
            glVertex2f(0.391f, 0.172f);
            glVertex2f(0.395f, 0.172f);
            glVertex2f(0.395f, 0.172f);
            glVertex2f(0.233f, 0.29f);
            glVertex2f(0.235f, 0.278f);
            glVertex2f(0.240f, 0.266f);
            glVertex2f(0.242f, 0.266f);
            glVertex2f(0.244f, 0.262f);
            glVertex2f(0.251f, 0.262f);
            glVertex2f(0.257f, 0.251f);
            glVertex2f(0.268f, 0.239f);
            glVertex2f(0.286f, 0.231f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            //glColor3ub(16,85,2);
            set_color("frontmountaingreenshade");
            glVertex2f(0.473f, 0.045f);
            glVertex2f(0.473f, 0.092f);
            glVertex2f(0.482f, 0.112f);
            glVertex2f(0.500f, 0.112f);
            glVertex2f(0.500f, 0.112f);
            glVertex2f(0.491f, 0.096f);
            glVertex2f(0.491f, 0.057f);
            glVertex2f(0.480f, 0.033f);
            glVertex2f(0.466f, 0.013f);
            glVertex2f(0.464f, 0.013f);
            glVertex2f(0.455f, 0.013f);
            glVertex2f(0.448f, 0.013f);
            glVertex2f(0.448f, 0.009f);
            glVertex2f(0.442f, -0.014f);
            glVertex2f(0.435f, -0.03f);
            glVertex2f(0.435f, -0.03f);
            glVertex2f(0.435f, 0.009f);
            glVertex2f(0.435f, 0.021f);
            glVertex2f(0.444f, 0.021f);
            glVertex2f(0.446f, 0.021f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            //glColor3ub(16,85,2);
            set_color("frontmountaingreenshade");
            glVertex2f(-0.600f, 0.152f);
            glVertex2f(-0.580f, 0.164f);
            glVertex2f(-0.576f, 0.183f);
            glVertex2f(-0.569f, 0.203f);
            glVertex2f(-0.563f, 0.258f);
            glVertex2f(-0.563f, 0.258f);
            glVertex2f(-0.558f, 0.239f);
            glVertex2f(-0.558f, 0.219f);
            glVertex2f(-0.567f, 0.179f);
            glVertex2f(-0.576f, 0.164f);
            glVertex2f(-0.585f, 0.152f);
            glVertex2f(-0.596f, 0.136f);
            glVertex2f(-0.614f, 0.1f);
            glVertex2f(-0.620f, 0.069f);
            glVertex2f(-0.620f, 0.061f);
            glVertex2f(-0.623f, 0.061f);
            glVertex2f(-0.625f, 0.073f);
            glVertex2f(-0.625f, 0.073f);
            glVertex2f(-0.620f, 0.092f);
            glVertex2f(-0.612f, 0.128f);
            glVertex2f(-0.612f, 0.152f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            //glColor3ub(16,85,2);
            set_color("frontmountaingreenshade");
            glVertex2f(0.813f, 0.397f);
            glVertex2f(0.820f, 0.405f);
            glVertex2f(0.828f, 0.405f);
            glVertex2f(0.828f, 0.405f);
            glVertex2f(0.828f, 0.405f);
            glVertex2f(0.771f, 0.452f);
            glVertex2f(0.813f, 0.357f);
            glVertex2f(0.813f, 0.373f);
            glVertex2f(0.813f, 0.373f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
           // glColor3ub(16,85,2);
           set_color("frontmountaingreenshade");
            glVertex2f(0.784f, 0.46f);
            glVertex2f(0.773f, 0.472f);
            glVertex2f(0.768f, 0.472f);
            glVertex2f(0.768f, 0.468f);
            glVertex2f(0.773f, 0.448f);
            glVertex2f(0.773f, 0.444f);
            glVertex2f(0.802f, 0.425f);
            glVertex2f(0.802f, 0.425f);
            glVertex2f(0.797f, 0.436f);
            glVertex2f(0.791f, 0.452f);
            glEnd();
            glPopMatrix();
            glPopMatrix();
}

void ground_3()
{
    glPushMatrix();
    glTranslatef(-.5,2,0);
    glScalef(32,18,0);


    glBegin(GL_TRIANGLE_FAN);
            //glColor3ub(204, 143, 43 );
            set_color("ground");

            glVertex2f(-0.778f, -0.307f);
            glVertex2f(-0.747f, -0.299f);
            glVertex2f(-0.740f, -0.299f);
            glVertex2f(-0.725f, -0.299f);
            glVertex2f(-0.712f, -0.299f);
           // glColor3ub(145, 102, 32 );
            glVertex2f(-0.689f, -0.299f);
            glVertex2f(-0.674f, -0.299f);
            glVertex2f(-0.658f, -0.299f);
            glVertex2f(-0.652f, -0.299f);
            glVertex2f(-0.634f, -0.299f);
            glVertex2f(-0.634f, -0.299f);
           // glColor3ub(145, 102, 32 );
            glVertex2f(-0.634f, -0.299f);
            glVertex2f(-0.627f, -0.299f);
            glVertex2f(-0.627f, -0.299f);
            glVertex2f(-0.627f, -0.326f);
            glVertex2f(-0.627f, -0.374f);
            glVertex2f(-0.627f, -0.406f);
            glVertex2f(-0.629f, -0.998f);
            glVertex2f(-1.003f, -0.994f);
            glVertex2f(-0.998f, -0.453f);
            glVertex2f(-1.003f, -0.457f);
            glVertex2f(-0.960f, -0.469f);
            glVertex2f(-0.932f, -0.465f);
            //glColor3ub(145, 102, 32 );
            glVertex2f(-0.900f, -0.402f);
            glVertex2f(-0.892f, -0.378f);
            glVertex2f(-0.885f, -0.362f);
            glVertex2f(-0.874f, -0.35f);
            glVertex2f(-0.872f, -0.35f);
            glVertex2f(-0.865f, -0.342f);
            glVertex2f(-0.858f, -0.338f);
            glVertex2f(-0.854f, -0.338f);
            glVertex2f(-0.845f, -0.334f);
            glVertex2f(-0.838f, -0.33f);
            glVertex2f(-0.820f, -0.323f);
           // glColor3ub(145, 102, 32 );
            glVertex2f(-0.814f, -0.319f);
            glVertex2f(-0.805f, -0.319f);
            glVertex2f(-0.805f, -0.319f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            //glColor3ub(204, 143, 43 );
            set_color("ground");
            glVertex2f(-0.660f, -0.303f);
            glVertex2f(-0.660f, -0.24f);
            glVertex2f(-0.454f, -0.243f);
           // glColor3ub(145, 102, 32 );
            glVertex2f(-0.449f, -0.998f);
            glVertex2f(-0.638f, -1.002f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            //glColor3ub(204, 143, 43  );
            set_color("ground");
            glVertex2f(-0.523f, -0.267f);
            glVertex2f(-0.520f, -0.192f);
           //glColor3ub(145, 102, 32 );
            glVertex2f(0.386f, -0.176f);
            glVertex2f(0.391f, -1.002f);
            glVertex2f(-0.463f, -0.998f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            //glColor3ub(204, 143, 43 );
            set_color("ground");
            glVertex2f(0.422f, -0.291f);
            glVertex2f(0.717f, -0.287f);
            //glColor3ub(145, 102, 32 );
            glVertex2f(0.717f, -1.002f);
            glVertex2f(0.377f, -1.002f);
            glVertex2f(0.382f, -0.2f);
            glVertex2f(0.420f, -0.2f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            //glColor3ub(204, 143, 43  );
            set_color("ground");
            glVertex2f(0.824f, -0.398f);
            glVertex2f(0.895f, -0.433f);
           // glColor3ub(145, 102, 32 );
            glVertex2f(0.991f, -0.429f);
            glVertex2f(0.991f, -1.002f);
            glVertex2f(0.702f, -1.002f);
            glVertex2f(0.713f, -0.307f);
            glVertex2f(0.751f, -0.334f);
            glVertex2f(0.782f, -0.366f);
            glEnd();


            glPushMatrix();
            glTranslatef(.02,-.1,0);
              glBegin(GL_TRIANGLE_FAN);
            //glColor3ub(204, 143, 43);
            set_color("ground");
            glVertex2f(-0.998f, -1.002f);
            glVertex2f(-1.003f, -0.789f);
           //glColor3ub(145, 102, 32 );
            glVertex2f(1.000f, -0.789f);
            glVertex2f(1.002f, -1.002f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
           // glColor3ub(204, 143, 43);
            set_color("ground");
            glVertex2f(0.953f, -0.326f);
            glVertex2f(0.951f, -0.323f);
            glVertex2f(1.002f, -0.323f);
            glVertex2f(1.002f, -0.805f);
            glVertex2f(0.971f, -0.797f);
            glEnd();

            glPopMatrix();
            glPopMatrix();
}

void mountain_back()
{


    glPushMatrix();
    glTranslated(0,3,0);
    glScalef(32,18,0);

     glBegin(GL_TRIANGLE_FAN);

            //glColor3ub(188,199,200);
            set_color("backmountain");
            glVertex2f(-0.878f, 0.29f);
            glVertex2f(-0.847f, 0.353f);
            glVertex2f(-0.780f, 0.389f);
            glVertex2f(-0.747f, 0.425f);
            glVertex2f(-0.712f, 0.389f);
            glVertex2f(-0.712f, 0.069f);
            glVertex2f(-1.000f, 0.053f);
            glVertex2f(-1.000f, 0.262f);
            glVertex2f(-1.003f, 0.258f);
            glVertex2f(-0.960f, 0.266f);
            glVertex2f(-0.923f, 0.298f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
           // glColor3ub(188,199,200);
           set_color("backmountain");

            glVertex2f(-0.056f, 0.361f);
            glVertex2f(-0.038f, 0.338f);
            glVertex2f(-0.007f, 0.381f);
            glVertex2f(0.051f, 0.302f);
            glVertex2f(0.077f, 0.318f);
            glVertex2f(0.140f, 0.247f);
            glVertex2f(0.153f, 0.266f);
            glVertex2f(0.180f, 0.211f);
            glVertex2f(0.188f, 0.049f);
            glVertex2f(-0.294f, 0.061f);
            glVertex2f(-0.278f, 0.338f);
            glVertex2f(-0.278f, 0.334f);
            glVertex2f(-0.254f, 0.353f);
            glVertex2f(-0.232f, 0.334f);
            glVertex2f(-0.189f, 0.421f);
            glVertex2f(-0.176f, 0.389f);
            glVertex2f(-0.156f, 0.428f);
            glVertex2f(-0.094f, 0.353f);
            glVertex2f(-0.083f, 0.373f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            //glColor3ub(188,199,200);
            set_color("backmountain");
            glVertex2f(0.460f, 0.33f);
            glVertex2f(0.504f, 0.274f);
            glVertex2f(0.522f, 0.306f);
            glVertex2f(0.597f, 0.219f);
            glVertex2f(0.597f, 0.037f);
            glVertex2f(0.273f, 0.021f);
            glVertex2f(0.266f, 0.203f);
            glVertex2f(0.264f, 0.203f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            //glColor3ub(188,199,200);
            set_color("backmountain");
            glVertex2f(0.955f, 0.262f);
            glVertex2f(1.002f, 0.243f);
            glVertex2f(1.000f, 0.132f);
            glVertex2f(0.933f, 0.128f);
            glVertex2f(0.933f, 0.239f);
            glVertex2f(0.931f, 0.243f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
          // glColor3ub(188,199,200);
           set_color("backmountain");
            glVertex2f(-0.958f, 0.057f);
            glVertex2f(-1.000f, 0.053f);
            glVertex2f(-1.000f, 0.053f);
            glVertex2f(-0.954f, 0.025f);
            glEnd();



            //*******************************snow*********************************

            glPushMatrix();
            glTranslatef(0,-.1,0);


             glBegin(GL_TRIANGLE_FAN);
            //glColor3ub(250,250,250);
            set_color("backmountainsnow");
            glVertex2f(-0.196f, 0.44f);
            glVertex2f(-0.189f, 0.428f);
            glVertex2f(-0.189f, 0.425f);
            glVertex2f(-0.185f, 0.421f);
            glVertex2f(-0.183f, 0.421f);
            glVertex2f(-0.180f, 0.428f);
            glVertex2f(-0.176f, 0.432f);
            glVertex2f(-0.174f, 0.421f);
            glVertex2f(-0.169f, 0.413f);
            glVertex2f(-0.163f, 0.413f);
            glVertex2f(-0.154f, 0.405f);
            glVertex2f(-0.149f, 0.409f);
            glVertex2f(-0.145f, 0.428f);
            glVertex2f(-0.138f, 0.464f);
            glVertex2f(-0.132f, 0.508f);
            glVertex2f(-0.156f, 0.519f);
            glVertex2f(-0.165f, 0.504f);
            glVertex2f(-0.189f, 0.511f);
            glVertex2f(-0.223f, 0.448f);
            glVertex2f(-0.256f, 0.452f);
            glVertex2f(-0.276f, 0.436f);
            glVertex2f(-0.267f, 0.409f);
            glVertex2f(-0.256f, 0.428f);
            glVertex2f(-0.232f, 0.413f);
            glVertex2f(-0.232f, 0.413f);
            glVertex2f(-0.216f, 0.425f);
            glVertex2f(-0.209f, 0.428f);
            glVertex2f(-0.207f, 0.428f);
            glVertex2f(-0.205f, 0.436f);
            glVertex2f(-0.200f, 0.44f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
           // glColor3ub(250,250,250);
           set_color("backmountainsnow");

            glVertex2f(-0.196f, 0.44f);
            glVertex2f(-0.189f, 0.428f);
            glVertex2f(-0.189f, 0.425f);
            glVertex2f(-0.185f, 0.421f);
            glVertex2f(-0.183f, 0.421f);
            glVertex2f(-0.180f, 0.428f);
            glVertex2f(-0.176f, 0.432f);
            glVertex2f(-0.174f, 0.421f);
            glVertex2f(-0.169f, 0.413f);
            glVertex2f(-0.163f, 0.413f);
            glVertex2f(-0.154f, 0.405f);
            glVertex2f(-0.149f, 0.409f);
            glVertex2f(-0.145f, 0.428f);
            glVertex2f(-0.138f, 0.464f);
            glVertex2f(-0.132f, 0.508f);
            glVertex2f(-0.156f, 0.519f);
            glVertex2f(-0.165f, 0.504f);
            glVertex2f(-0.189f, 0.511f);
            glVertex2f(-0.223f, 0.448f);
            glVertex2f(-0.256f, 0.452f);
            glVertex2f(-0.276f, 0.436f);
            glVertex2f(-0.267f, 0.409f);
            glVertex2f(-0.256f, 0.428f);
            glVertex2f(-0.232f, 0.413f);
            glVertex2f(-0.232f, 0.413f);
            glVertex2f(-0.216f, 0.425f);
            glVertex2f(-0.209f, 0.428f);
            glVertex2f(-0.207f, 0.428f);
            glVertex2f(-0.205f, 0.436f);
            glVertex2f(-0.200f, 0.44f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            //glColor3ub(250,250,250);
            set_color("backmountainsnow");
            glVertex2f(-0.196f, 0.44f);
            glVertex2f(-0.189f, 0.428f);
            glVertex2f(-0.189f, 0.425f);
            glVertex2f(-0.185f, 0.421f);
            glVertex2f(-0.183f, 0.421f);
            glVertex2f(-0.180f, 0.428f);
            glVertex2f(-0.176f, 0.432f);
            glVertex2f(-0.174f, 0.421f);
            glVertex2f(-0.169f, 0.413f);
            glVertex2f(-0.163f, 0.413f);
            glVertex2f(-0.154f, 0.405f);
            glVertex2f(-0.149f, 0.409f);
            glVertex2f(-0.145f, 0.428f);
            glVertex2f(-0.138f, 0.464f);
            glVertex2f(-0.132f, 0.508f);
            glVertex2f(-0.156f, 0.519f);
            glVertex2f(-0.165f, 0.504f);
            glVertex2f(-0.189f, 0.511f);
            glVertex2f(-0.223f, 0.448f);
            glVertex2f(-0.256f, 0.452f);
            glVertex2f(-0.276f, 0.436f);
            glVertex2f(-0.267f, 0.409f);
            glVertex2f(-0.256f, 0.428f);
            glVertex2f(-0.232f, 0.413f);
            glVertex2f(-0.232f, 0.413f);
            glVertex2f(-0.216f, 0.425f);
            glVertex2f(-0.209f, 0.428f);
            glVertex2f(-0.207f, 0.428f);
            glVertex2f(-0.205f, 0.436f);
            glVertex2f(-0.200f, 0.44f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            //glColor3ub(250,250,250);
            set_color("backmountainsnow");
            glVertex2f(-0.196f, 0.44f);
            glVertex2f(-0.189f, 0.428f);
            glVertex2f(-0.189f, 0.425f);
            glVertex2f(-0.185f, 0.421f);
            glVertex2f(-0.183f, 0.421f);
            glVertex2f(-0.180f, 0.428f);
            glVertex2f(-0.176f, 0.432f);
            glVertex2f(-0.174f, 0.421f);
            glVertex2f(-0.169f, 0.413f);
            glVertex2f(-0.163f, 0.413f);
            glVertex2f(-0.154f, 0.405f);
            glVertex2f(-0.149f, 0.409f);
            glVertex2f(-0.145f, 0.428f);
            glVertex2f(-0.138f, 0.464f);
            glVertex2f(-0.132f, 0.508f);
            glVertex2f(-0.156f, 0.519f);
            glVertex2f(-0.165f, 0.504f);
            glVertex2f(-0.189f, 0.511f);
            glVertex2f(-0.223f, 0.448f);
            glVertex2f(-0.256f, 0.452f);
            glVertex2f(-0.276f, 0.436f);
            glVertex2f(-0.267f, 0.409f);
            glVertex2f(-0.256f, 0.428f);
            glVertex2f(-0.232f, 0.413f);
            glVertex2f(-0.232f, 0.413f);
            glVertex2f(-0.216f, 0.425f);
            glVertex2f(-0.209f, 0.428f);
            glVertex2f(-0.207f, 0.428f);
            glVertex2f(-0.205f, 0.436f);
            glVertex2f(-0.200f, 0.44f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            //glColor3ub(250,250,250);
            set_color("backmountainsnow");
            glVertex2f(-0.103f, 0.432f);
            glVertex2f(-0.096f, 0.436f);
            glVertex2f(-0.087f, 0.428f);
            glVertex2f(-0.085f, 0.421f);
            glVertex2f(-0.083f, 0.409f);
            glVertex2f(-0.074f, 0.413f);
            glVertex2f(-0.074f, 0.413f);
            glVertex2f(-0.065f, 0.425f);
            glVertex2f(-0.058f, 0.46f);
            glVertex2f(-0.134f, 0.504f);
            glVertex2f(-0.149f, 0.401f);
            glVertex2f(-0.136f, 0.401f);
            glVertex2f(-0.132f, 0.409f);
            glVertex2f(-0.125f, 0.401f);
            glVertex2f(-0.116f, 0.405f);
            glVertex2f(-0.109f, 0.421f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
           // glColor3ub(250,250,250);
           set_color("backmountainsnow");
            glVertex2f(-0.103f, 0.432f);
            glVertex2f(-0.096f, 0.436f);
            glVertex2f(-0.087f, 0.428f);
            glVertex2f(-0.085f, 0.421f);
            glVertex2f(-0.083f, 0.409f);
            glVertex2f(-0.074f, 0.413f);
            glVertex2f(-0.074f, 0.413f);
            glVertex2f(-0.065f, 0.425f);
            glVertex2f(-0.058f, 0.46f);
            glVertex2f(-0.134f, 0.504f);
            glVertex2f(-0.149f, 0.401f);
            glVertex2f(-0.136f, 0.401f);
            glVertex2f(-0.132f, 0.409f);
            glVertex2f(-0.125f, 0.401f);
            glVertex2f(-0.116f, 0.405f);
            glVertex2f(-0.109f, 0.421f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            //glColor3ub(250,250,250);
            set_color("backmountainsnow");
            glVertex2f(-0.103f, 0.432f);
            glVertex2f(-0.096f, 0.436f);
            glVertex2f(-0.087f, 0.428f);
            glVertex2f(-0.085f, 0.421f);
            glVertex2f(-0.083f, 0.409f);
            glVertex2f(-0.074f, 0.413f);
            glVertex2f(-0.074f, 0.413f);
            glVertex2f(-0.065f, 0.425f);
            glVertex2f(-0.058f, 0.46f);
            glVertex2f(-0.134f, 0.504f);
            glVertex2f(-0.149f, 0.401f);
            glVertex2f(-0.136f, 0.401f);
            glVertex2f(-0.132f, 0.409f);
            glVertex2f(-0.125f, 0.401f);
            glVertex2f(-0.116f, 0.405f);
            glVertex2f(-0.109f, 0.421f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            //glColor3ub(250,250,250);
            set_color("backmountainsnow");
            glVertex2f(-0.012f, 0.425f);
            glVertex2f(-0.007f, 0.425f);
            glVertex2f(0.002f, 0.413f);
            glVertex2f(0.002f, 0.409f);
            glVertex2f(0.004f, 0.409f);
            glVertex2f(0.008f, 0.405f);
            glVertex2f(0.008f, 0.405f);
            glVertex2f(0.013f, 0.405f);
            glVertex2f(0.015f, 0.405f);
            glVertex2f(0.015f, 0.417f);
            glVertex2f(0.020f, 0.425f);
            glVertex2f(0.024f, 0.425f);
            glVertex2f(0.033f, 0.432f);
            glVertex2f(0.024f, 0.44f);
            glVertex2f(0.017f, 0.444f);
            glVertex2f(-0.005f, 0.48f);
            glVertex2f(-0.063f, 0.456f);
            glVertex2f(-0.065f, 0.421f);
            glVertex2f(-0.063f, 0.421f);
            glVertex2f(-0.056f, 0.428f);
            glVertex2f(-0.052f, 0.436f);
            glVertex2f(-0.047f, 0.44f);
            glVertex2f(-0.043f, 0.44f);
            glVertex2f(-0.036f, 0.432f);
            glVertex2f(-0.036f, 0.432f);
            glVertex2f(-0.034f, 0.421f);
            glVertex2f(-0.032f, 0.405f);
            glVertex2f(-0.023f, 0.413f);
            glVertex2f(-0.016f, 0.417f);
            glVertex2f(-0.016f, 0.417f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            //glColor3ub(250,250,250);
            set_color("backmountainsnow");
            glVertex2f(-0.012f, 0.425f);
            glVertex2f(-0.007f, 0.425f);
            glVertex2f(0.002f, 0.413f);
            glVertex2f(0.002f, 0.409f);
            glVertex2f(0.004f, 0.409f);
            glVertex2f(0.008f, 0.405f);
            glVertex2f(0.008f, 0.405f);
            glVertex2f(0.013f, 0.405f);
            glVertex2f(0.015f, 0.405f);
            glVertex2f(0.015f, 0.417f);
            glVertex2f(0.020f, 0.425f);
            glVertex2f(0.024f, 0.425f);
            glVertex2f(0.033f, 0.432f);
            glVertex2f(0.024f, 0.44f);
            glVertex2f(0.017f, 0.444f);
            glVertex2f(-0.005f, 0.48f);
            glVertex2f(-0.063f, 0.456f);
            glVertex2f(-0.065f, 0.421f);
            glVertex2f(-0.063f, 0.421f);
            glVertex2f(-0.056f, 0.428f);
            glVertex2f(-0.052f, 0.436f);
            glVertex2f(-0.047f, 0.44f);
            glVertex2f(-0.043f, 0.44f);
            glVertex2f(-0.036f, 0.432f);
            glVertex2f(-0.036f, 0.432f);
            glVertex2f(-0.034f, 0.421f);
            glVertex2f(-0.032f, 0.405f);
            glVertex2f(-0.023f, 0.413f);
            glVertex2f(-0.016f, 0.417f);
            glVertex2f(-0.016f, 0.417f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            //glColor3ub(250,250,250);
            set_color("backmountainsnow");
            glVertex2f(-0.012f, 0.425f);
            glVertex2f(-0.007f, 0.425f);
            glVertex2f(0.002f, 0.413f);
            glVertex2f(0.002f, 0.409f);
            glVertex2f(0.004f, 0.409f);
            glVertex2f(0.008f, 0.405f);
            glVertex2f(0.008f, 0.405f);
            glVertex2f(0.013f, 0.405f);
            glVertex2f(0.015f, 0.405f);
            glVertex2f(0.015f, 0.417f);
            glVertex2f(0.020f, 0.425f);
            glVertex2f(0.024f, 0.425f);
            glVertex2f(0.033f, 0.432f);
            glVertex2f(0.024f, 0.44f);
            glVertex2f(0.017f, 0.444f);
            glVertex2f(-0.005f, 0.48f);
            glVertex2f(-0.063f, 0.456f);
            glVertex2f(-0.065f, 0.421f);
            glVertex2f(-0.063f, 0.421f);
            glVertex2f(-0.056f, 0.428f);
            glVertex2f(-0.052f, 0.436f);
            glVertex2f(-0.047f, 0.44f);
            glVertex2f(-0.043f, 0.44f);
            glVertex2f(-0.036f, 0.432f);
            glVertex2f(-0.036f, 0.432f);
            glVertex2f(-0.034f, 0.421f);
            glVertex2f(-0.032f, 0.405f);
            glVertex2f(-0.023f, 0.413f);
            glVertex2f(-0.016f, 0.417f);
            glVertex2f(-0.016f, 0.417f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            //glColor3ub(250,250,250);
            set_color("backmountainsnow");
            glVertex2f(0.095f, 0.357f);
            glVertex2f(0.095f, 0.357f);
            glVertex2f(0.102f, 0.361f);
            glVertex2f(0.104f, 0.365f);
            glVertex2f(0.108f, 0.365f);
            glVertex2f(0.124f, 0.365f);
            glVertex2f(0.128f, 0.365f);
            glVertex2f(0.131f, 0.353f);
            glVertex2f(0.135f, 0.345f);
            glVertex2f(0.140f, 0.334f);
            glVertex2f(0.142f, 0.326f);
            glVertex2f(0.146f, 0.314f);
            glVertex2f(0.177f, 0.33f);
            glVertex2f(0.153f, 0.373f);
            glVertex2f(0.102f, 0.389f);
            glVertex2f(0.077f, 0.421f);
            glVertex2f(0.031f, 0.432f);
            glVertex2f(0.026f, 0.421f);
            glVertex2f(0.033f, 0.413f);
            glVertex2f(0.035f, 0.413f);
            glVertex2f(0.048f, 0.409f);
            glVertex2f(0.048f, 0.409f);
            glVertex2f(0.048f, 0.409f);
            glVertex2f(0.053f, 0.401f);
            glVertex2f(0.055f, 0.401f);
            glVertex2f(0.057f, 0.385f);
            glVertex2f(0.064f, 0.385f);
            glVertex2f(0.068f, 0.389f);
            glVertex2f(0.073f, 0.385f);
            glVertex2f(0.073f, 0.381f);
            glVertex2f(0.073f, 0.373f);
            glVertex2f(0.077f, 0.353f);
            glVertex2f(0.088f, 0.353f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            //glColor3ub(250,250,250);
            set_color("backmountainsnow");
            glVertex2f(0.095f, 0.357f);
            glVertex2f(0.095f, 0.357f);
            glVertex2f(0.102f, 0.361f);
            glVertex2f(0.104f, 0.365f);
            glVertex2f(0.108f, 0.365f);
            glVertex2f(0.124f, 0.365f);
            glVertex2f(0.128f, 0.365f);
            glVertex2f(0.131f, 0.353f);
            glVertex2f(0.135f, 0.345f);
            glVertex2f(0.140f, 0.334f);
            glVertex2f(0.142f, 0.326f);
            glVertex2f(0.146f, 0.314f);
            glVertex2f(0.177f, 0.33f);
            glVertex2f(0.153f, 0.373f);
            glVertex2f(0.102f, 0.389f);
            glVertex2f(0.077f, 0.421f);
            glVertex2f(0.031f, 0.432f);
            glVertex2f(0.026f, 0.421f);
            glVertex2f(0.033f, 0.413f);
            glVertex2f(0.035f, 0.413f);
            glVertex2f(0.048f, 0.409f);
            glVertex2f(0.048f, 0.409f);
            glVertex2f(0.048f, 0.409f);
            glVertex2f(0.053f, 0.401f);
            glVertex2f(0.055f, 0.401f);
            glVertex2f(0.057f, 0.385f);
            glVertex2f(0.064f, 0.385f);
            glVertex2f(0.068f, 0.389f);
            glVertex2f(0.073f, 0.385f);
            glVertex2f(0.073f, 0.381f);
            glVertex2f(0.073f, 0.373f);
            glVertex2f(0.077f, 0.353f);
            glVertex2f(0.088f, 0.353f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
           // glColor3ub(250,250,250);
           set_color("backmountainsnow");
            glVertex2f(0.337f, 0.326f);
            glVertex2f(0.344f, 0.326f);
            glVertex2f(0.348f, 0.33f);
            glVertex2f(0.351f, 0.334f);
            glVertex2f(0.351f, 0.342f);
            glVertex2f(0.360f, 0.342f);
            glVertex2f(0.364f, 0.342f);
            glVertex2f(0.368f, 0.342f);
            glVertex2f(0.373f, 0.342f);
            glVertex2f(0.375f, 0.349f);
            glVertex2f(0.377f, 0.361f);
            glVertex2f(0.377f, 0.365f);
            glVertex2f(0.382f, 0.369f);
            glVertex2f(0.386f, 0.373f);
            glVertex2f(0.386f, 0.373f);
            glVertex2f(0.386f, 0.377f);
            glVertex2f(0.386f, 0.381f);
            glVertex2f(0.386f, 0.381f);
            glVertex2f(0.373f, 0.381f);
            glVertex2f(0.268f, 0.318f);
            glVertex2f(0.284f, 0.306f);
            glVertex2f(0.286f, 0.31f);
            glVertex2f(0.291f, 0.314f);
            glVertex2f(0.293f, 0.318f);
            glVertex2f(0.302f, 0.322f);
            glVertex2f(0.306f, 0.322f);
            glVertex2f(0.308f, 0.318f);
            glVertex2f(0.313f, 0.314f);
            glVertex2f(0.313f, 0.314f);
            glVertex2f(0.317f, 0.314f);
            glVertex2f(0.322f, 0.318f);
            glVertex2f(0.324f, 0.322f);
            glVertex2f(0.326f, 0.326f);
            glVertex2f(0.331f, 0.326f);
            glVertex2f(0.331f, 0.326f);
            glVertex2f(0.333f, 0.326f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
           // glColor3ub(250,250,250);
           set_color("backmountainsnow");
            glVertex2f(0.337f, 0.326f);
            glVertex2f(0.344f, 0.326f);
            glVertex2f(0.348f, 0.33f);
            glVertex2f(0.351f, 0.334f);
            glVertex2f(0.351f, 0.342f);
            glVertex2f(0.360f, 0.342f);
            glVertex2f(0.364f, 0.342f);
            glVertex2f(0.368f, 0.342f);
            glVertex2f(0.373f, 0.342f);
            glVertex2f(0.375f, 0.349f);
            glVertex2f(0.377f, 0.361f);
            glVertex2f(0.377f, 0.365f);
            glVertex2f(0.382f, 0.369f);
            glVertex2f(0.386f, 0.373f);
            glVertex2f(0.386f, 0.373f);
            glVertex2f(0.386f, 0.377f);
            glVertex2f(0.386f, 0.381f);
            glVertex2f(0.386f, 0.381f);
            glVertex2f(0.373f, 0.381f);
            glVertex2f(0.268f, 0.318f);
            glVertex2f(0.284f, 0.306f);
            glVertex2f(0.286f, 0.31f);
            glVertex2f(0.291f, 0.314f);
            glVertex2f(0.293f, 0.318f);
            glVertex2f(0.302f, 0.322f);
            glVertex2f(0.306f, 0.322f);
            glVertex2f(0.308f, 0.318f);
            glVertex2f(0.313f, 0.314f);
            glVertex2f(0.313f, 0.314f);
            glVertex2f(0.317f, 0.314f);
            glVertex2f(0.322f, 0.318f);
            glVertex2f(0.324f, 0.322f);
            glVertex2f(0.326f, 0.326f);
            glVertex2f(0.331f, 0.326f);
            glVertex2f(0.331f, 0.326f);
            glVertex2f(0.333f, 0.326f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
           // glColor3ub(250,250,250);
           set_color("backmountainsnow");
            glVertex2f(0.453f, 0.33f);
            glVertex2f(0.460f, 0.322f);
            glVertex2f(0.462f, 0.318f);
            glVertex2f(0.464f, 0.318f);
            glVertex2f(0.475f, 0.334f);
            glVertex2f(0.475f, 0.334f);
            glVertex2f(0.480f, 0.338f);
            glVertex2f(0.480f, 0.338f);
            glVertex2f(0.482f, 0.338f);
            glVertex2f(0.491f, 0.338f);
            glVertex2f(0.495f, 0.334f);
            glVertex2f(0.495f, 0.33f);
            glVertex2f(0.497f, 0.326f);
            glVertex2f(0.502f, 0.326f);
            glVertex2f(0.506f, 0.318f);
            glVertex2f(0.511f, 0.318f);
            glVertex2f(0.515f, 0.314f);
            glVertex2f(0.517f, 0.31f);
            glVertex2f(0.517f, 0.31f);
            glVertex2f(0.522f, 0.302f);
            glVertex2f(0.526f, 0.294f);
            glVertex2f(0.582f, 0.345f);
            glVertex2f(0.522f, 0.413f);
            glVertex2f(0.457f, 0.432f);
            glVertex2f(0.380f, 0.377f);
            glVertex2f(0.380f, 0.365f);
            glVertex2f(0.386f, 0.349f);
            glVertex2f(0.393f, 0.345f);
            glVertex2f(0.393f, 0.345f);
            glVertex2f(0.400f, 0.345f);
            glVertex2f(0.404f, 0.345f);
            glVertex2f(0.406f, 0.349f);
            glVertex2f(0.408f, 0.349f);
            glVertex2f(0.417f, 0.338f);
            glVertex2f(0.420f, 0.326f);
            glVertex2f(0.426f, 0.314f);
            glVertex2f(0.428f, 0.314f);
            glVertex2f(0.435f, 0.318f);
            glVertex2f(0.435f, 0.322f);
            glVertex2f(0.440f, 0.326f);
            glVertex2f(0.440f, 0.33f);
            glVertex2f(0.442f, 0.334f);
            glVertex2f(0.444f, 0.334f);
            glVertex2f(0.446f, 0.338f);
            glVertex2f(0.448f, 0.338f);
            glVertex2f(0.451f, 0.338f);
            glEnd();

               glBegin(GL_TRIANGLE_FAN);
           // glColor3ub(245,245,245);
           set_color("backmountainsnow");
            glVertex2f(-0.956f, 0.33f);
            glVertex2f(-0.956f, 0.334f);
            glVertex2f(-0.952f, 0.338f);
            glVertex2f(-0.947f, 0.338f);
            glVertex2f(-0.940f, 0.334f);
            glVertex2f(-0.936f, 0.33f);
            glVertex2f(-0.934f, 0.33f);
            glVertex2f(-0.932f, 0.33f);
            glVertex2f(-0.927f, 0.33f);
            glVertex2f(-0.923f, 0.33f);
            glVertex2f(-0.920f, 0.326f);
            glVertex2f(-0.918f, 0.318f);
            glVertex2f(-0.916f, 0.314f);
            glVertex2f(-0.916f, 0.314f);
            glVertex2f(-0.912f, 0.314f);
            glVertex2f(-0.892f, 0.401f);
            glVertex2f(-0.909f, 0.397f);
            glVertex2f(-0.923f, 0.401f);
            glVertex2f(-0.925f, 0.405f);
            glVertex2f(-0.949f, 0.373f);
            glVertex2f(-0.960f, 0.373f);
            glVertex2f(-0.987f, 0.369f);
            glVertex2f(-1.003f, 0.334f);
            glVertex2f(-0.998f, 0.334f);
            glVertex2f(-0.994f, 0.33f);
            glVertex2f(-0.994f, 0.326f);
            glVertex2f(-0.992f, 0.318f);
            glVertex2f(-0.985f, 0.306f);
            glVertex2f(-0.985f, 0.302f);
            glVertex2f(-0.983f, 0.298f);
            glVertex2f(-0.980f, 0.298f);
            glVertex2f(-0.980f, 0.306f);
            glVertex2f(-0.978f, 0.306f);
            glVertex2f(-0.976f, 0.306f);
            glVertex2f(-0.974f, 0.302f);
            glVertex2f(-0.969f, 0.302f);
            glVertex2f(-0.967f, 0.302f);
            glVertex2f(-0.960f, 0.314f);
            glVertex2f(-0.958f, 0.322f);
            glVertex2f(-0.956f, 0.326f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
           // glColor3ub(245,245,245);
           set_color("backmountainsnow");
            glVertex2f(-0.989f, 0.365f);
            glVertex2f(-1.000f, 0.342f);
            glVertex2f(-1.000f, 0.369f);
            glVertex2f(-0.987f, 0.369f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
           // glColor3ub(245,245,245);
           set_color("backmountainsnow");
            glVertex2f(-0.814f, 0.409f);
            glVertex2f(-0.812f, 0.413f);
            glVertex2f(-0.803f, 0.413f);
            glVertex2f(-0.798f, 0.413f);
            glVertex2f(-0.796f, 0.413f);
            glVertex2f(-0.792f, 0.413f);
            glVertex2f(-0.787f, 0.428f);
            glVertex2f(-0.780f, 0.44f);
            glVertex2f(-0.774f, 0.44f);
            glVertex2f(-0.772f, 0.436f);
            glVertex2f(-0.769f, 0.436f);
            glVertex2f(-0.763f, 0.432f);
            glVertex2f(-0.763f, 0.432f);
            glVertex2f(-0.760f, 0.417f);
            glVertex2f(-0.754f, 0.417f);
            glVertex2f(-0.749f, 0.413f);
            glVertex2f(-0.749f, 0.409f);
            glVertex2f(-0.709f, 0.484f);
            glVertex2f(-0.745f, 0.519f);
            glVertex2f(-0.760f, 0.504f);
            glVertex2f(-0.776f, 0.488f);
            glVertex2f(-0.776f, 0.476f);
            glVertex2f(-0.803f, 0.468f);
            glVertex2f(-0.834f, 0.452f);
            glVertex2f(-0.847f, 0.452f);
            glVertex2f(-0.876f, 0.397f);
            glVertex2f(-0.905f, 0.385f);
            glVertex2f(-0.900f, 0.377f);
            glVertex2f(-0.889f, 0.369f);
            glVertex2f(-0.872f, 0.369f);
            glVertex2f(-0.872f, 0.373f);
            glVertex2f(-0.869f, 0.373f);
            glVertex2f(-0.865f, 0.373f);
            glVertex2f(-0.865f, 0.373f);
            glVertex2f(-0.860f, 0.389f);
            glVertex2f(-0.854f, 0.389f);
            glVertex2f(-0.840f, 0.389f);
            glVertex2f(-0.838f, 0.377f);
            glVertex2f(-0.838f, 0.377f);
            glVertex2f(-0.838f, 0.365f);
            glVertex2f(-0.838f, 0.365f);
            glVertex2f(-0.838f, 0.365f);
            glVertex2f(-0.829f, 0.365f);
            glVertex2f(-0.827f, 0.369f);
            glVertex2f(-0.823f, 0.373f);
            glVertex2f(-0.816f, 0.381f);
            glVertex2f(-0.814f, 0.389f);
            glVertex2f(-0.814f, 0.397f);
            glVertex2f(-0.814f, 0.405f);
            glEnd();
            glPopMatrix();

            //*********background mountain shadow


             glBegin(GL_TRIANGLE_FAN);
           // glColor3ub(133,137,137);
           set_color("backmountainshadow");
            glVertex2f(-0.943f, 0.251f);
            glVertex2f(-0.920f, 0.286f);
            glVertex2f(-0.903f, 0.286f);
            glVertex2f(-0.920f, 0.219f);
            glVertex2f(-0.989f, 0.191f);
            glVertex2f(-0.989f, 0.191f);
            glVertex2f(-0.983f, 0.251f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            //glColor3ub(133,137,137);
            set_color("backmountainshadow");
            glVertex2f(-0.798f, 0.334f);
            glVertex2f(-0.763f, 0.393f);
            glVertex2f(-0.754f, 0.409f);
            glVertex2f(-0.754f, 0.385f);
            glVertex2f(-0.785f, 0.322f);
            glVertex2f(-0.820f, 0.298f);
            glVertex2f(-0.820f, 0.294f);
            glVertex2f(-0.814f, 0.334f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            //glColor3ub(133,137,137);
            set_color("backmountainshadow");
            glVertex2f(-0.169f, 0.369f);
            glVertex2f(-0.152f, 0.389f);
            glVertex2f(-0.152f, 0.417f);
            glVertex2f(-0.218f, 0.322f);
            glVertex2f(-0.216f, 0.326f);
            glVertex2f(-0.192f, 0.326f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            //glColor3ub(133,137,137);
            set_color("backmountainshadow");
            glVertex2f(-0.140f, 0.29f);
            glVertex2f(-0.154f, 0.247f);
            glVertex2f(-0.152f, 0.243f);
            glVertex2f(-0.163f, 0.294f);
            glVertex2f(-0.143f, 0.397f);
            glVertex2f(-0.118f, 0.373f);
            glVertex2f(-0.114f, 0.345f);
            glVertex2f(-0.116f, 0.314f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            //glColor3ub(133,137,137);
            set_color("backmountainshadow");
            glVertex2f(-0.045f, 0.302f);
            glVertex2f(-0.014f, 0.361f);
            glVertex2f(-0.009f, 0.326f);
            glVertex2f(0.002f, 0.302f);
            glVertex2f(-0.049f, 0.278f);
            glVertex2f(-0.067f, 0.251f);
            glVertex2f(-0.069f, 0.247f);
            glVertex2f(-0.069f, 0.278f);
            glVertex2f(-0.058f, 0.302f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            //glColor3ub(133,137,137);
            set_color("backmountainshadow");
            glVertex2f(0.028f, 0.314f);
            glVertex2f(0.002f, 0.353f);
            glVertex2f(0.026f, 0.262f);
            glVertex2f(0.026f, 0.266f);
            glVertex2f(0.042f, 0.278f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            //glColor3ub(133,137,137);
            set_color("backmountainshadow");
            glVertex2f(0.411f, 0.243f);
            glVertex2f(0.460f, 0.314f);
            glVertex2f(0.455f, 0.282f);
            glVertex2f(0.426f, 0.235f);
            glVertex2f(0.388f, 0.207f);
            glVertex2f(0.388f, 0.207f);
            glVertex2f(0.397f, 0.235f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
           // glColor3ub(133,137,137);
           set_color("backmountainshadow");
            glVertex2f(0.495f, 0.27f);
            glVertex2f(0.524f, 0.282f);
            glVertex2f(0.562f, 0.239f);
            glVertex2f(0.473f, 0.219f);
            glVertex2f(0.475f, 0.219f);
            glEnd();

            glPopMatrix();
}

void sidewater()
{
    //left part

    glBegin(GL_POLYGON);
    //glColor3ub(83, 164, 255 );
    set_color("water");

    glVertex2d(-32,-7);
    glVertex2d(-25,-7);
    set_color("water-shade");
    glVertex2d(-25,-2);
    glVertex2d(-32,-2);
    set_color("water-shade");
    glEnd();

    //right part

    glBegin(GL_POLYGON);
    //glColor3ub(83, 164, 255 );
    set_color("water");

    glVertex2d(23.50,-2);
    glVertex2d(23.50,-6);
    set_color("water-shade");
    glVertex2d(32,-6);
    glVertex2d(32,-2);
    set_color("water-shade");
    glEnd();





}

void drain()
{
    //first canal


    glBegin(GL_POLYGON);
    glColor3ub(83, 164, 255);

    glVertex2d(-23.25,-4);
    glVertex2d(-23.25,-9);
    glVertex2d(-22.75,-9);
    glVertex2d(-22.75,-4);

    glEnd();


    glBegin(GL_LINES);
    glColor3b(0,0,0);

    glVertex2d(-23.25,-4);
    glVertex2d(-23.25,-9);

    glVertex2d(-22.75,-4);
    glVertex2d(-22.75,-9);
   // glVertex2d(-22.75,-4);

    glEnd();

    //fourth canal

    glBegin(GL_POLYGON);
    glColor3ub(83, 164, 255);

    glVertex2d(-1,-5);
    glVertex2d(-1,-9);
    glVertex2d(0,-9);
    glVertex2d(0,-5);
    glEnd();

    glBegin(GL_LINES);
    glColor3b(0,0,0);

    glVertex2d(-1,-9);
    glVertex2d(-1,-5);

    glVertex2d(0,-5);
    glVertex2d(0,-9);
    glEnd();

    //thrird canal

    glBegin(GL_POLYGON);
    glColor3ub(83, 164, 255);

    glVertex2d(-12.5,-2);
    glVertex2d(-12.5,-9);
    glVertex2d(-12,-9);
    glVertex2d(-12,-2);
    glEnd();

    glBegin(GL_LINES);
    glColor3b(0,0,0);
    glVertex2d(-12.5,-2);
    glVertex2d(-12.5,-9);
    glVertex2d(-12,-9);
    glVertex2d(-12,-2);
    glEnd();

    //2nd canal

    glBegin(GL_POLYGON);
    glColor3ub(83, 164, 255);
    glVertex2d(-18.25,-3);
    glVertex2d(-18.25,-9);
    glVertex2d(-17.75,-9);
    glVertex2d(-17.75,-3);
    glEnd();

    glBegin(GL_LINES);
    glColor3b(0,0,0);
    glVertex2d(-18.25,-9);
    glVertex2d(-18.25,-3);
    glVertex2d(-17.75,-3);
    glVertex2d(-17.75,-9);
    glEnd();

    //fifth canal

    glBegin(GL_POLYGON);
    glColor3ub(83, 164, 255);
    glVertex2d(8.25,-2);
    glVertex2d(8.25,-9);
    glVertex2d(8.75,-9);
    glVertex2d(8.75,-2);
    glEnd();

    glBegin(GL_LINES);
    glColor3b(0,0,0);
    glVertex2d(8.25,-9);
    glVertex2d(8.25,-2);
    glVertex2d(8.75,-2);
    glVertex2d(8.75,-9);
    glEnd();

    //sixth canal
    glBegin(GL_POLYGON);
    glColor3ub(83, 164, 255);
    glVertex2d(14,-4);
    glVertex2d(14,-9);
    glVertex2d(14.50,-9);
    glVertex2d(14.50,-4);
    glEnd();

    glBegin(GL_LINES);
    glColor3b(0,0,0);
    glVertex2d(14,-4);
    glVertex2d(14,-9);
    glVertex2d(14.50,-9);
    glVertex2d(14.50,-4);
    glEnd();

    //8th canal

    glBegin(GL_POLYGON);
    glColor3ub(83, 164, 255);
    glVertex2d(20,-4);
    glVertex2d(20,-9);
    glVertex2d(20.5,-9);
    glVertex2d(20.5,-4);
    glEnd();

    glBegin(GL_LINES);
    glColor3b(0,0,0);
    glVertex2d(20,-4);
    glVertex2d(20,-9);
    glVertex2d(20.5,-9);
    glVertex2d(20.5,-4);
    glEnd();

    //main pipe

    glBegin(GL_POLYGON);
    glColor3ub(83, 164, 255);
    glVertex2d(-32,-9);
    glVertex2d(-32,-10);
    glVertex2d(32,-10);
    glVertex2d(32,-9);
    glEnd();
    glBegin(GL_LINES);
    glColor3b(0,0,0);
    glVertex2d(-32,-9);
    glVertex2d(32,-9);
    glVertex2d(32,-10);
    glVertex2d(-32,-10);
    glEnd();



}

void ship_3()
{
    glPushMatrix();
    glTranslatef(move_ship_x,move_ship_y,0);

    glPushMatrix();
    glScalef(.04,.055,0);
    glTranslatef(-750,-40,0);
    glBegin(GL_POLYGON);
    glColor3ub(13, 85, 210 );
    glVertex2f(-12.0,7.0);
    glVertex2f(-1.0,7.0);
    glVertex2f(1.50,3.25);
    glVertex2f(3.00,3.25);
    glVertex2f(3.0,-1.0);
    glVertex2f(-12.0,-1.0);
    glVertex2f(-12.0,7.0);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(13, 85, 210 );
    glVertex2f(3.0,3.25);
    glVertex2f(36.75,3.25);
    glVertex2f(36.75,-1.0);
    glVertex2f(3.0,-1.0);
    glVertex2f(3.0,3.25);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(13, 85, 210 );
    glVertex2f(36.75,3.25);
    glVertex2f(38.0,6.0);
    glVertex2f(44.0,6.0);
    glVertex2f(40.0,-1.00);
    glVertex2f(36.75,-1.00);
    glVertex2f(36.75,3.25);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(232, 250, 8 );//yellow
    glVertex2f(-12.0,-1.0);
    glVertex2f(40.0,-1.0);
    glVertex2f(39.0,-2.00);
    glVertex2f(-11.0,-2.0);
    glVertex2f(-12.0,-1.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(232, 250, 8 );//yellow
    glVertex2f(-12.0,6.0);
    glVertex2f(-2.50,6.0);
    glVertex2f(-2.50,5.50);
    glVertex2f(-12.0,5.50);
    glVertex2f(-12.0,6.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(232, 250, 8 );//yellow
    glVertex2f(-2.50,6.0);
    glVertex2f(-2.00,6.0);
    glVertex2f(0.50,2.50);
    glVertex2f(0.25,2.00);
    glVertex2f(-2.25,5.50);
    glVertex2f(-2.50,5.50);
    glVertex2f(-2.50,6.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(232, 250, 8 );//yellow
    glVertex2f(0.50,2.50);
    glVertex2f(3.00,2.50);
    glVertex2f(3.0,2.0);
    glVertex2f(0.25,2.00);
    glVertex2f(0.5,2.50);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(232, 250, 8 );//yellow
    glVertex2f(0.50,2.50);
    glVertex2f(37.50,2.50);
    glVertex2f(38.0,2.0);
    glVertex2f(0.25,2.00);
    glVertex2f(0.5,2.50);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(232, 250, 8 );//yellow
    glVertex2f(37.50,2.50);
    glVertex2f(38.75,5.50);
    glVertex2f(39.25,5.0);
    glVertex2f(38.0,2.00);
    glVertex2f(37.50,2.50);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(232, 250, 8 );//yellow
    glVertex2f(38.75,5.50);
    glVertex2f(43.75,5.50);
    glVertex2f(43.45,4.99);
    glVertex2f(39.25,5.00);
    glVertex2f(38.75,5.50);
    glEnd();

    glBegin(GL_POLYGON);//white
    glColor3ub(127, 140, 141);
    glVertex2f(-11.50,7.00);
    glVertex2f(-11.50,8.75);
    glVertex2f(-6.75,8.75);
    glVertex2f(-6.75,7.00);
    glVertex2f(-11.50,7.00);
    glEnd();
    glBegin(GL_POLYGON); //white
    glColor3ub(229, 231, 233);
    glVertex2f(-11.00,8.75);
    glVertex2f(-9.25,16.25);
    glVertex2f(-6.75,16.25);
    glVertex2f(-6.75,8.75);
    glVertex2f(-11.00,8.75);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(5, 156, 65); //green
    glVertex2f(-9.50,15.25);
    glVertex2f(-6.75,15.25);
    glVertex2f(-6.75,15.00);
    glVertex2f(-9.55,15.00);
    glVertex2f(-9.50,15.25);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(5, 156, 65); //green
    glVertex2f(-9.96,13.25);
    glVertex2f(-6.75,13.25);
    glVertex2f(-6.75,13.00);
    glVertex2f(-10.00,13.00);
    glVertex2f(-9.96,13.25);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(232, 239, 16); //yellow
    glVertex2f(-9.55,15.00);
    glVertex2f(-6.75,15.00);
    glVertex2f(-6.75,13.25);
    glVertex2f(-9.96,13.25);
    glVertex2f(-9.55,15.00);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(81, 90, 90); //ash
    glVertex2f(-8.00,16.25);
    glVertex2f(-8.00,17.25);
    glVertex2f(-8.50,17.75);
    glVertex2f(-8.25,18.25);
    glVertex2f(-7.50,17.50);
    glVertex2f(-7.25,17.00);
    glVertex2f(-7.00,16.75);
    glVertex2f(-7.00,16.25);
    glVertex2f(-8.00,16.25);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(153, 163, 164 ); // off-white
    glVertex2f(-6.00,7.00);
    glVertex2f(-6.00,13.00);
    glVertex2f(-1.00,13.00);
    glVertex2f(-1.00,7.00);
    glVertex2f(-6.00,7.00);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(153, 163, 164 ); // off-white
    glVertex2f(-1.00,11.75);
    glVertex2f(4.00,11.75);
    glVertex2f(4.00,3.25);
    glVertex2f(1.50,3.25);
    glVertex2f(-1.00,7.00);
    glVertex2f(-1.00,11.75);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(229, 232, 232 );
    glVertex2f(-1.00,13.00);
    glVertex2f(3.00,13.00);
    glVertex2f(3.00,11.75);
    glVertex2f(-1.00,11.75);
    glVertex2f(-1.00,13.00);
    glEnd();

    //T
    glBegin(GL_POLYGON);
    glColor3ub(178, 186, 187  );
    glVertex2f(3.00,11.75);
    glVertex2f(3.00,13.00);
    glVertex2f(4.00,13.00);
    glVertex2f(4.00,11.75);
    glVertex2f(3.00,11.75);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(178, 186, 187  );
    glVertex2f(4.00,10.75);
    glVertex2f(4.00,13.00);
    glVertex2f(9.50,13.00);
    glVertex2f(9.50,10.75);
    glVertex2f(4.00,10.75);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(178, 186, 187 );
    glVertex2f(9.50,11.50);
    glVertex2f(9.50,13.00);
    glVertex2f(11.50,13.00);
    glVertex2f(11.50,11.50);
    glVertex2f(9.50,11.50);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(178, 186, 187  );
    glVertex2f(4.00,9.00);
    glVertex2f(4.00,10.75);
    glVertex2f(9.50,10.75);
    glVertex2f(9.50,9.00);
    glVertex2f(4.00,9.00);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(178, 186, 187 );
    glVertex2f(4.00,3.25);
    glVertex2f(4.00,9.00);
    glVertex2f(9.50,9.00);
    glVertex2f(9.50,3.25);
    glVertex2f(4.00,3.25);
    glEnd();

    // Railing
    glBegin(GL_POLYGON);
    glColor3ub(214, 219, 223);
    glVertex2f(-5.75,13.00);
    glVertex2f(-5.75,14.50);
    glVertex2f(12.50,14.50);
    glVertex2f(11.50,13.00);
    glVertex2f(-5.75,13.00);
    glEnd();
    ///

    glBegin(GL_POLYGON);
    glColor3ub(229, 231, 233);
    glVertex2f(-5.50,14.50);
    glVertex2f(-3.50,14.50);
    glVertex2f(-3.50,15.25);
    glVertex2f(-5.25,15.25);
    glVertex2f(-5.50,14.50);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(229, 231, 233);
    glVertex2f(-5.22,15.50);
    glVertex2f(-5.00,16.25);
    glVertex2f(-3.50,16.25);
    glVertex2f(-3.50,15.50);
    glVertex2f(-5.22,15.50);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(186, 74, 0); //yellow
    glVertex2f(-5.22,15.50);
    glVertex2f(-3.50,15.50);
    glVertex2f(-3.50,15.25);
    glVertex2f(-5.29,15.25);
    glVertex2f(-5.22,15.50);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(81, 90, 90);
    glVertex2f(-4.50,16.25);
    glVertex2f(-4.50,17.00);
    glVertex2f(-5.00,17.50);
    glVertex2f(-4.75,18.00);
    glVertex2f(-4.00,17.25);
    glVertex2f(-3.75,16.75);
    glVertex2f(-3.75,16.25);
    glVertex2f(-4.50,16.25);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(224, 224, 224);
    glVertex2f(-3.00,14.50);
    glVertex2f(-3.00,16.00);
    glVertex2f(10.85,15.99);
    glVertex2f(10.00,14.50);
    glVertex2f(-3.00,14.50);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(93, 64, 55 );
    glVertex2f(-3.00,16.00);
    glVertex2f(-3.00,16.25);
    glVertex2f(11.00,16.25);
    glVertex2f(10.85,15.99);
    glVertex2f(-3.00,16.00);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 150, 136 );//green-Cw-1
    glVertex2f(-2.50,15.00);
    glVertex2f(-2.50,15.50);
    glVertex2f(-0.50,15.50);
    glVertex2f(-0.50,15.00);
    glVertex2f(-2.50,15.00);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 150, 136 );//green-CW-2
    glVertex2f(0.50,15.00);
    glVertex2f(0.50,15.50);
    glVertex2f(2.00,15.50);
    glVertex2f(2.00,15.00);
    glVertex2f(0.50,15.00);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 150, 136 );//green-CW-3
    glVertex2f(4.00,15.25);
    glVertex2f(3.75,15.75);
    glVertex2f(4.75,15.75);
    glVertex2f(4.75,15.25);
    glVertex2f(4.00,15.25);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 150, 136 );//green-CW-4
    glVertex2f(5.50,15.25);
    glVertex2f(5.50,15.75);
    glVertex2f(6.75,15.75);
    glVertex2f(6.75,15.25);
    glVertex2f(5.50,15.25);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 150, 136 );//green-CW-5
    glVertex2f(7.50,15.25);
    glVertex2f(7.50,15.75);
    glVertex2f(9.00,15.75);
    glVertex2f(9.00,15.25);
    glVertex2f(7.50,15.25);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 150, 136 );//green-CW-6
    glVertex2f(9.50,15.25);
    glVertex2f(9.50,15.75);
    glVertex2f(10.50,15.75);
    glVertex2f(10.00,15.25);
    glVertex2f(9.50,15.25);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(189, 189, 189);//stand-W
    glVertex2f(3.50,16.25);
    glVertex2f(3.50,18.50);
    glVertex2f(4.50,18.50);
    glVertex2f(4.50,16.25);
    glVertex2f(3.50,16.25);
    glEnd();
    glBegin(GL_POLYGON);//Gray
    glColor3ub(158, 158, 158);
    glVertex2f(3.50,18.50);
    glVertex2f(3.50,18.75);
    glVertex2f(5.50,18.75);
    glVertex2f(5.50,18.50);
    glVertex2f(3.50,18.50);
    glEnd();
    glBegin(GL_POLYGON);//W
    glColor3ub(189, 189, 189);
    glVertex2f(3.75,18.75);
    glVertex2f(3.75,21.25);
    glVertex2f(4.50,21.25);
    glVertex2f(4.50,18.75);
    glVertex2f(3.75,18.75);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(158, 158, 158);//Gray
    glVertex2f(3.25,21.25);
    glVertex2f(3.25,21.75);
    glVertex2f(6.25,21.75);
    glVertex2f(6.25,21.25);
    glVertex2f(3.25,21.25);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(189, 189, 189);//W
    glVertex2f(3.75,21.75);
    glVertex2f(3.75,26.00);
    glVertex2f(4.50,26.00);
    glVertex2f(4.50,21.75);
    glVertex2f(3.75,21.75);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(158, 158, 158);//Gray-CM
    glVertex2f(3.75,26.00);
    glVertex2f(3.25,26.50);
    glVertex2f(5.00,26.50);
    glVertex2f(4.50,26.00);
    glVertex2f(3.75,26.00);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(158, 158, 158);//Gray-CM
    glVertex2f(3.75,26.50);
    glVertex2f(3.25,27.00);
    glVertex2f(5.00,27.00);
    glVertex2f(4.50,26.50);
    glVertex2f(3.75,26.50);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(247, 8, 8 );//Flag-Red
    glVertex2f(3.75,24.50);
    glVertex2f(1.75,24.50);
    glVertex2f(1.75,25.50);
    glVertex2f(3.75,25.50);
    glVertex2f(3.75,24.50);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 150, 136 );//green-W-1
    glVertex2f(-5.50,11.75);
    glVertex2f(-5.00,11.75);
    glVertex2f(-5.00,12.25);
    glVertex2f(-5.50,12.25);
    glVertex2f(-5.50,11.75);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 150, 136 );//green-W-2
    glVertex2f(-2.75,11.75);
    glVertex2f(-2.25,11.75);
    glVertex2f(-2.25,12.25);
    glVertex2f(-2.75,12.25);
    glVertex2f(-2.75,11.75);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 150, 136 );//green-W-3
    glVertex2f(-4.75,9.50);
    glVertex2f(-4.25,9.50);
    glVertex2f(-4.25,10.00);
    glVertex2f(-4.75,10.00);
    glVertex2f(-4.75,9.50);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 150, 136 );//green-W-4
    glVertex2f(-1.75,9.50);
    glVertex2f(-1.25,9.50);
    glVertex2f(-1.25,10.00);
    glVertex2f(-1.75,10.00);
    glVertex2f(-1.75,9.50);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 150, 136 );//green-W-5
    glVertex2f(-5.50,7.25);
    glVertex2f(-5.00,7.25);
    glVertex2f(-5.00,7.75);
    glVertex2f(-5.50,7.75);
    glVertex2f(-5.50,7.25);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 150, 136 );//green-W-6
    glVertex2f(-3.50,7.25);
    glVertex2f(-3.00,7.25);
    glVertex2f(-3.00,7.75);
    glVertex2f(-3.50,7.75);
    glVertex2f(-3.50,7.25);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 150, 136 );//green-W-7
    glVertex2f(-1.75,7.25);
    glVertex2f(-1.25,7.25);
    glVertex2f(-1.25,7.75);
    glVertex2f(-1.75,7.75);
    glVertex2f(-1.75,7.25);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 150, 136 );//green-W-8
    glVertex2f(0.50,9.50);
    glVertex2f(1.25,9.50);
    glVertex2f(1.25,10.00);
    glVertex2f(0.50,10.00);
    glVertex2f(0.50,9.50);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 150, 136 );//green-W-9
    glVertex2f(2.75,9.50);
    glVertex2f(3.25,9.50);
    glVertex2f(3.25,10.00);
    glVertex2f(2.75,10.00);
    glVertex2f(2.75,9.50);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 150, 136 );//green-W-10
    glVertex2f(0.75,7.25);
    glVertex2f(1.25,7.25);
    glVertex2f(1.25,7.75);
    glVertex2f(0.75,7.75);
    glVertex2f(0.75,7.25);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 150, 136 );//green-W-11
    glVertex2f(2.75,7.25);
    glVertex2f(3.25,7.25);
    glVertex2f(3.25,7.75);
    glVertex2f(2.75,7.75);
    glVertex2f(2.75,7.25);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 150, 136 );//green-W-12
    glVertex2f(4.25,12.00);
    glVertex2f(4.75,12.00);
    glVertex2f(4.75,12.50);
    glVertex2f(4.25,12.50);
    glVertex2f(4.25,12.00);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 150, 136 );//green-W-13
    glVertex2f(5.75,12.00);
    glVertex2f(7.25,12.00);
    glVertex2f(7.25,12.50);
    glVertex2f(5.75,12.50);
    glVertex2f(7.75,12.00);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 150, 136 );//green-W-14
    glVertex2f(8.25,12.00);
    glVertex2f(8.75,12.00);
    glVertex2f(8.75,12.50);
    glVertex2f(8.25,12.50);
    glVertex2f(8.25,12.00);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 150, 136 );//green-W-15
    glVertex2f(4.50,9.50);
    glVertex2f(5.50,9.50);
    glVertex2f(5.50,10.00);
    glVertex2f(4.50,10.00);
    glVertex2f(4.50,9.50);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 150, 136 );//green-W-16
    glVertex2f(6.75,9.50);
    glVertex2f(8.00,9.50);
    glVertex2f(8.00,10.00);
    glVertex2f(6.75,10.00);
    glVertex2f(6.75,9.50);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 150, 136 );//green-W-17
    glVertex2f(8.50,9.50);
    glVertex2f(9.25,9.50);
    glVertex2f(9.25,10.00);
    glVertex2f(8.50,10.00);
    glVertex2f(8.50,9.50);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 150, 136 );//green-W-18
    glVertex2f(5.25,7.25);
    glVertex2f(5.75,7.25);
    glVertex2f(5.75,7.75);
    glVertex2f(5.25,7.75);
    glVertex2f(5.25,7.25);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 150, 136 );//green-W-19
    glVertex2f(6.50,7.25);
    glVertex2f(7.00,7.25);
    glVertex2f(7.00,7.75);
    glVertex2f(6.50,7.75);
    glVertex2f(6.50,7.25);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 150, 136 );//green-W-20
    glVertex2f(7.75,7.25);
    glVertex2f(8.25,7.25);
    glVertex2f(8.25,7.75);
    glVertex2f(7.75,7.75);
    glVertex2f(7.75,7.25);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(208, 211, 212);
    glVertex2f(-6.00,10.75);
    glVertex2f(-6.00,11.00);
    glVertex2f(9.50,11.00);
    glVertex2f(9.50,10.75);
    glVertex2f(-6.00,10.75);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(208, 211, 212);
    glVertex2f(-6.00,8.75);
    glVertex2f(-6.00,9.00);
    glVertex2f(9.50,9.00);
    glVertex2f(9.50,8.75);
    glVertex2f(-6.00,8.75);
    glEnd();

    glBegin(GL_POLYGON); //Container-1
    glColor3ub(213, 39, 39 );
    glVertex2f(13.00,3.25);
    glVertex2f(13.00,7.75);
    glVertex2f(21.25,7.75);
    glVertex2f(21.25,3.25);
    glVertex2f(13.00,3.25);
    glEnd();
    glBegin(GL_POLYGON); //Container-2
    glColor3ub(18, 101, 238);
    glVertex2f(21.25,3.25);
    glVertex2f(21.25,7.75);
    glVertex2f(25.00,7.75);
    glVertex2f(25.00,3.25);
    glVertex2f(21.25,3.25);
    glEnd();
    glBegin(GL_POLYGON); //Container-3
    glColor3ub(252, 109, 3);
    glVertex2f(25.00,3.25);
    glVertex2f(25.00,7.75);
    glVertex2f(30.00,7.75);
    glVertex2f(30.00,3.25);
    glVertex2f(25.00,3.25);
    glEnd();
    glBegin(GL_POLYGON); //Container-4
    glColor3ub(59, 154, 23);
    glVertex2f(30.00,3.25);
    glVertex2f(30.00,7.75);
    glVertex2f(33.25,7.75);
    glVertex2f(33.25,3.25);
    glVertex2f(30.00,3.25);
    glEnd();
    glBegin(GL_POLYGON); //Container-5
    glColor3ub(238, 241, 14);
    glVertex2f(14.00,7.75);
    glVertex2f(14.00,11.50);
    glVertex2f(18.00,11.50);
    glVertex2f(18.00,7.75);
    glVertex2f(14.00,7.75);
    glEnd();
    glBegin(GL_POLYGON); //Container-6
    glColor3ub(251, 13, 6);
    glVertex2f(18.00,7.75);
    glVertex2f(18.00,11.50);
    glVertex2f(25.50,11.50);
    glVertex2f(25.50,7.75);
    glVertex2f(18.00,7.75);
    glEnd();
    glBegin(GL_POLYGON); //Container-7
    glColor3ub(40, 35, 185);
    glVertex2f(25.50,7.75);
    glVertex2f(25.50,11.50);
    glVertex2f(29.75,11.50);
    glVertex2f(29.75,7.75);
    glVertex2f(25.50,7.75);
    glEnd();


    glPopMatrix();
    glPopMatrix();
}

void rocks_3()
{
    //LEFT SIDE
    glPushMatrix();
    glScalef(32,18,0);
     glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,133,133);
            glVertex2f(-0.956f, -0.896f);
            glVertex2f(-0.967f, -0.915f);
            glVertex2f(-0.974f, -0.915f);
            glVertex2f(-0.976f, -0.915f);
            glVertex2f(-0.983f, -0.915f);
            glVertex2f(-0.983f, -0.915f);
            glVertex2f(-0.983f, -0.915f);
            glVertex2f(-0.983f, -0.915f);
            glVertex2f(-0.983f, -0.915f);
            glVertex2f(-0.983f, -0.915f);
            glVertex2f(-0.987f, -0.904f);
            glVertex2f(-0.987f, -0.896f);
            glVertex2f(-0.987f, -0.884f);
            glVertex2f(-0.987f, -0.876f);
            glVertex2f(-0.987f, -0.872f);
            glVertex2f(-0.987f, -0.86f);
            glVertex2f(-0.983f, -0.86f);
            glVertex2f(-0.983f, -0.856f);
            glVertex2f(-0.980f, -0.852f);
            glVertex2f(-0.978f, -0.844f);
            glVertex2f(-0.974f, -0.836f);
            glVertex2f(-0.969f, -0.825f);
            glVertex2f(-0.969f, -0.825f);
            glVertex2f(-0.967f, -0.825f);
            glVertex2f(-0.958f, -0.821f);
            glVertex2f(-0.958f, -0.821f);
            glVertex2f(-0.949f, -0.817f);
            glVertex2f(-0.947f, -0.817f);
            glVertex2f(-0.943f, -0.817f);
            glVertex2f(-0.940f, -0.817f);
            glVertex2f(-0.936f, -0.821f);
            glVertex2f(-0.932f, -0.821f);
            glVertex2f(-0.927f, -0.821f);
            glVertex2f(-0.923f, -0.825f);
            glVertex2f(-0.923f, -0.828f);
            glVertex2f(-0.920f, -0.836f);
            glVertex2f(-0.920f, -0.856f);
            glVertex2f(-0.920f, -0.868f);
            glVertex2f(-0.920f, -0.872f);
            glVertex2f(-0.925f, -0.88f);
            glVertex2f(-0.936f, -0.888f);
            glVertex2f(-0.943f, -0.888f);
            glVertex2f(-0.947f, -0.888f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,133,133);
            glVertex2f(-0.827f, -0.821f);
            glVertex2f(-0.816f, -0.821f);
            glVertex2f(-0.805f, -0.825f);
            glVertex2f(-0.794f, -0.828f);
            glVertex2f(-0.778f, -0.828f);
            glVertex2f(-0.769f, -0.813f);
            glVertex2f(-0.758f, -0.781f);
            glVertex2f(-0.763f, -0.773f);
            glVertex2f(-0.772f, -0.765f);
            glVertex2f(-0.778f, -0.749f);
            glVertex2f(-0.780f, -0.734f);
            glVertex2f(-0.780f, -0.722f);
            glVertex2f(-0.787f, -0.71f);
            glVertex2f(-0.792f, -0.698f);
            glVertex2f(-0.800f, -0.69f);
            glVertex2f(-0.807f, -0.694f);
            glVertex2f(-0.814f, -0.698f);
            glVertex2f(-0.836f, -0.702f);
            glVertex2f(-0.847f, -0.702f);
            glVertex2f(-0.856f, -0.718f);
            glVertex2f(-0.856f, -0.742f);
            glVertex2f(-0.854f, -0.757f);
            glVertex2f(-0.858f, -0.769f);
            glVertex2f(-0.863f, -0.785f);
            glVertex2f(-0.863f, -0.797f);
            glVertex2f(-0.860f, -0.809f);
            glVertex2f(-0.860f, -0.813f);
            glVertex2f(-0.863f, -0.825f);
            glVertex2f(-0.863f, -0.832f);
            glVertex2f(-0.860f, -0.828f);
            glVertex2f(-0.860f, -0.828f);
            glVertex2f(-0.858f, -0.817f);
            glVertex2f(-0.854f, -0.813f);
            glVertex2f(-0.847f, -0.817f);
            glVertex2f(-0.845f, -0.817f);
            glVertex2f(-0.845f, -0.821f);
            glVertex2f(-0.845f, -0.821f);
            glVertex2f(-0.843f, -0.821f);
            glVertex2f(-0.836f, -0.821f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,133,133);
            glVertex2f(-0.812f, -0.892f);
            glVertex2f(-0.785f, -0.888f);
            glVertex2f(-0.812f, -0.935f);
            glVertex2f(-0.814f, -0.927f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,133,133);
            glVertex2f(-0.900f, -0.919f);
            glVertex2f(-0.905f, -0.939f);
            glVertex2f(-0.905f, -0.939f);
            glVertex2f(-0.909f, -0.939f);
            glVertex2f(-0.914f, -0.939f);
            glVertex2f(-0.916f, -0.927f);
            glVertex2f(-0.918f, -0.931f);
            glVertex2f(-0.918f, -0.931f);
            glVertex2f(-0.912f, -0.9f);
            glVertex2f(-0.907f, -0.892f);
            glVertex2f(-0.900f, -0.892f);
            glVertex2f(-0.889f, -0.892f);
            glVertex2f(-0.880f, -0.892f);
            glVertex2f(-0.878f, -0.9f);
            glVertex2f(-0.880f, -0.911f);
            glVertex2f(-0.883f, -0.915f);
            glVertex2f(-0.892f, -0.919f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(94,94,94);
            glVertex2f(-0.836f, -0.919f);
            glVertex2f(-0.836f, -0.923f);
            glVertex2f(-0.836f, -0.927f);
            glVertex2f(-0.836f, -0.927f);
            glVertex2f(-0.834f, -0.931f);
            glVertex2f(-0.832f, -0.939f);
            glVertex2f(-0.832f, -0.939f);
            glVertex2f(-0.832f, -0.939f);
            glVertex2f(-0.832f, -0.939f);
            glVertex2f(-0.832f, -0.939f);
            glVertex2f(-0.865f, -0.939f);
            glVertex2f(-0.865f, -0.939f);
            glVertex2f(-0.867f, -0.923f);
            glVertex2f(-0.867f, -0.915f);
            glVertex2f(-0.865f, -0.908f);
            glVertex2f(-0.865f, -0.904f);
            glVertex2f(-0.863f, -0.904f);
            glVertex2f(-0.856f, -0.904f);
            glVertex2f(-0.849f, -0.892f);
            glVertex2f(-0.845f, -0.888f);
            glVertex2f(-0.845f, -0.888f);
            glVertex2f(-0.838f, -0.908f);
            glVertex2f(-0.836f, -0.911f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(94,94,94);
            glVertex2f(-0.949f, -0.777f);
            glVertex2f(-0.952f, -0.777f);
            glVertex2f(-0.954f, -0.777f);
            glVertex2f(-0.956f, -0.777f);
            glVertex2f(-0.956f, -0.769f);
            glVertex2f(-0.958f, -0.769f);
            glVertex2f(-0.958f, -0.769f);
            glVertex2f(-0.958f, -0.769f);
            glVertex2f(-0.954f, -0.757f);
            glVertex2f(-0.949f, -0.738f);
            glVertex2f(-0.943f, -0.738f);
            glVertex2f(-0.940f, -0.738f);
            glVertex2f(-0.936f, -0.745f);
            glVertex2f(-0.927f, -0.745f);
            glVertex2f(-0.927f, -0.757f);
            glVertex2f(-0.927f, -0.761f);
            glVertex2f(-0.927f, -0.769f);
            glVertex2f(-0.932f, -0.785f);
            glVertex2f(-0.943f, -0.781f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,133,133);
            glVertex2f(-0.689f, -0.785f);
            glVertex2f(-0.665f, -0.781f);
            glVertex2f(-0.654f, -0.781f);
            glVertex2f(-0.634f, -0.817f);
            glVertex2f(-0.634f, -0.9f);
            glVertex2f(-0.647f, -0.927f);
            glVertex2f(-0.703f, -0.884f);
            glVertex2f(-0.705f, -0.888f);
            glVertex2f(-0.714f, -0.86f);
            glVertex2f(-0.714f, -0.809f);
            glVertex2f(-0.712f, -0.789f);
            glVertex2f(-0.698f, -0.781f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,133,133);
            glVertex2f(-0.720f, -0.67f);
            glVertex2f(-0.714f, -0.655f);
            glVertex2f(-0.709f, -0.655f);
            glVertex2f(-0.692f, -0.627f);
            glVertex2f(-0.672f, -0.686f);
            glVertex2f(-0.712f, -0.765f);
            glVertex2f(-0.720f, -0.71f);
            glVertex2f(-0.723f, -0.722f);
            glVertex2f(-0.723f, -0.714f);
            glVertex2f(-0.725f, -0.694f);
            glVertex2f(-0.729f, -0.67f);
            glVertex2f(-0.727f, -0.67f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(107,107,107);
            glVertex2f(-0.705f, -0.915f);
            glVertex2f(-0.700f, -0.923f);
            glVertex2f(-0.694f, -0.927f);
            glVertex2f(-0.694f, -0.935f);
            glVertex2f(-0.694f, -0.935f);
            glVertex2f(-0.689f, -0.939f);
            glVertex2f(-0.687f, -0.943f);
            glVertex2f(-0.749f, -0.939f);
            glVertex2f(-0.743f, -0.915f);
            glVertex2f(-0.738f, -0.915f);
            glVertex2f(-0.725f, -0.896f);
            glVertex2f(-0.718f, -0.896f);
            glVertex2f(-0.709f, -0.908f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(107,107,107);
            glVertex2f(-0.540f, -0.745f);
            glVertex2f(-0.527f, -0.749f);
            glVertex2f(-0.516f, -0.753f);
            glVertex2f(-0.500f, -0.765f);
            glVertex2f(-0.494f, -0.805f);
            glVertex2f(-0.514f, -0.828f);
            glVertex2f(-0.540f, -0.852f);
            glVertex2f(-0.572f, -0.856f);
            glVertex2f(-0.569f, -0.852f);
            glVertex2f(-0.576f, -0.828f);
            glVertex2f(-0.578f, -0.789f);
            glVertex2f(-0.576f, -0.769f);
            glVertex2f(-0.558f, -0.745f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(107,107,107);
            glVertex2f(-0.463f, -0.69f);
            glVertex2f(-0.507f, -0.706f);
            glVertex2f(-0.512f, -0.69f);
            glVertex2f(-0.512f, -0.682f);
            glVertex2f(-0.507f, -0.69f);
            glVertex2f(-0.520f, -0.662f);
            glVertex2f(-0.518f, -0.631f);
            glVertex2f(-0.516f, -0.603f);
            glVertex2f(-0.505f, -0.583f);
            glVertex2f(-0.492f, -0.575f);
            glVertex2f(-0.467f, -0.568f);
            glVertex2f(-0.456f, -0.572f);
            glVertex2f(-0.443f, -0.579f);
            glVertex2f(-0.429f, -0.583f);
            glVertex2f(-0.420f, -0.595f);
            glVertex2f(-0.414f, -0.603f);
            glVertex2f(-0.414f, -0.615f);
            glVertex2f(-0.414f, -0.643f);
            glVertex2f(-0.416f, -0.658f);
            glVertex2f(-0.427f, -0.67f);
            glVertex2f(-0.443f, -0.682f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(107,107,107);
            glVertex2f(-0.407f, -0.896f);
            glVertex2f(-0.418f, -0.896f);
            glVertex2f(-0.420f, -0.896f);
            glVertex2f(-0.423f, -0.896f);
            glVertex2f(-0.423f, -0.896f);
            glVertex2f(-0.427f, -0.844f);
            glVertex2f(-0.425f, -0.825f);
            glVertex2f(-0.416f, -0.809f);
            glVertex2f(-0.409f, -0.809f);
            glVertex2f(-0.405f, -0.809f);
            glVertex2f(-0.374f, -0.817f);
            glVertex2f(-0.374f, -0.84f);
            glVertex2f(-0.374f, -0.876f);
            glVertex2f(-0.383f, -0.896f);
            glVertex2f(-0.392f, -0.896f);
            glVertex2f(-0.396f, -0.896f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(107,107,107);
            glVertex2f(-0.600f, -0.71f);
            glVertex2f(-0.612f, -0.694f);
            glVertex2f(-0.609f, -0.702f);
            glVertex2f(-0.609f, -0.702f);
            glVertex2f(-0.609f, -0.694f);
            glVertex2f(-0.609f, -0.662f);
            glVertex2f(-0.609f, -0.647f);
            glVertex2f(-0.596f, -0.647f);
            glVertex2f(-0.587f, -0.647f);
            glVertex2f(-0.572f, -0.655f);
            glVertex2f(-0.558f, -0.67f);
            glVertex2f(-0.558f, -0.694f);
            glVertex2f(-0.576f, -0.706f);
            glVertex2f(-0.592f, -0.714f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(107,107,107);
            glVertex2f(-0.256f, -0.868f);
            glVertex2f(-0.278f, -0.876f);
            glVertex2f(-0.283f, -0.876f);
            glVertex2f(-0.285f, -0.872f);
            glVertex2f(-0.294f, -0.872f);
            glVertex2f(-0.292f, -0.872f);
            glVertex2f(-0.294f, -0.856f);
            glVertex2f(-0.300f, -0.797f);
            glVertex2f(-0.298f, -0.765f);
            glVertex2f(-0.287f, -0.753f);
            glVertex2f(-0.263f, -0.742f);
            glVertex2f(-0.236f, -0.738f);
            glVertex2f(-0.220f, -0.738f);
            glVertex2f(-0.200f, -0.757f);
            glVertex2f(-0.192f, -0.781f);
            glVertex2f(-0.192f, -0.801f);
            glVertex2f(-0.194f, -0.828f);
            glVertex2f(-0.198f, -0.844f);
            glVertex2f(-0.212f, -0.86f);
            glVertex2f(-0.225f, -0.868f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,133,133);
            glVertex2f(-0.380f, -0.706f);
            glVertex2f(-0.380f, -0.674f);
            glVertex2f(-0.374f, -0.655f);
            glVertex2f(-0.365f, -0.651f);
            glVertex2f(-0.356f, -0.651f);
            glVertex2f(-0.338f, -0.639f);
            glVertex2f(-0.309f, -0.623f);
            glVertex2f(-0.309f, -0.635f);
            glVertex2f(-0.309f, -0.682f);
            glVertex2f(-0.309f, -0.718f);
            glVertex2f(-0.309f, -0.73f);
            glVertex2f(-0.312f, -0.761f);
            glVertex2f(-0.325f, -0.777f);
            glVertex2f(-0.338f, -0.777f);
            glVertex2f(-0.363f, -0.777f);
            glVertex2f(-0.372f, -0.777f);
            glVertex2f(-0.378f, -0.769f);
            glVertex2f(-0.378f, -0.749f);
            glVertex2f(-0.380f, -0.753f);
            glVertex2f(-0.380f, -0.745f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,133,133);
            glVertex2f(-0.478f, -0.908f);
            glVertex2f(-0.478f, -0.908f);
            glVertex2f(-0.472f, -0.908f);
            glVertex2f(-0.467f, -0.915f);
            glVertex2f(-0.460f, -0.923f);
            glVertex2f(-0.460f, -0.935f);
            glVertex2f(-0.456f, -0.939f);
            glVertex2f(-0.456f, -0.939f);
            glVertex2f(-0.543f, -0.939f);
            glVertex2f(-0.543f, -0.939f);
            glVertex2f(-0.538f, -0.892f);
            glVertex2f(-0.538f, -0.892f);
            glVertex2f(-0.527f, -0.892f);
            glVertex2f(-0.516f, -0.884f);
            glVertex2f(-0.503f, -0.884f);
            glVertex2f(-0.485f, -0.884f);
            glVertex2f(-0.478f, -0.888f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,133,133);
            glVertex2f(-0.136f, -0.718f);
            glVertex2f(-0.147f, -0.726f);
            glVertex2f(-0.149f, -0.726f);
            glVertex2f(-0.178f, -0.694f);
            glVertex2f(-0.192f, -0.658f);
            glVertex2f(-0.187f, -0.635f);
            glVertex2f(-0.176f, -0.623f);
            glVertex2f(-0.172f, -0.607f);
            glVertex2f(-0.165f, -0.591f);
            glVertex2f(-0.152f, -0.579f);
            glVertex2f(-0.129f, -0.575f);
            glVertex2f(-0.105f, -0.575f);
            glVertex2f(-0.094f, -0.575f);
            glVertex2f(-0.083f, -0.603f);
            glVertex2f(-0.080f, -0.639f);
            glVertex2f(-0.078f, -0.67f);
            glVertex2f(-0.078f, -0.686f);
            glVertex2f(-0.100f, -0.738f);
            glVertex2f(-0.114f, -0.738f);
            glVertex2f(-0.127f, -0.734f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(107,107,107);
            glVertex2f(-0.103f, -0.868f);
            glVertex2f(-0.096f, -0.884f);
            glVertex2f(-0.087f, -0.904f);
            glVertex2f(-0.085f, -0.923f);
            glVertex2f(-0.085f, -0.939f);
            glVertex2f(-0.085f, -0.943f);
            glVertex2f(-0.085f, -0.947f);
            glVertex2f(-0.158f, -0.955f);
            glVertex2f(-0.165f, -0.927f);
            glVertex2f(-0.167f, -0.884f);
            glVertex2f(-0.167f, -0.856f);
            glVertex2f(-0.154f, -0.828f);
            glVertex2f(-0.138f, -0.828f);
            glVertex2f(-0.125f, -0.828f);
            glVertex2f(-0.120f, -0.828f);
            glVertex2f(-0.109f, -0.848f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(107,107,107);
            glVertex2f(-0.247f, -0.682f);
            glVertex2f(-0.249f, -0.686f);
            glVertex2f(-0.254f, -0.674f);
            glVertex2f(-0.258f, -0.662f);
            glVertex2f(-0.258f, -0.639f);
            glVertex2f(-0.247f, -0.623f);
            glVertex2f(-0.240f, -0.619f);
            glVertex2f(-0.229f, -0.619f);
            glVertex2f(-0.216f, -0.635f);
            glVertex2f(-0.212f, -0.686f);
            glVertex2f(-0.218f, -0.706f);
            glVertex2f(-0.234f, -0.702f);
            glVertex2f(-0.240f, -0.694f);
            glEnd();
             glBegin(GL_TRIANGLE_FAN);
            glColor3ub(77,77,77);
            glVertex2f(-0.318f, -0.919f);
            glVertex2f(-0.318f, -0.923f);
            glVertex2f(-0.318f, -0.935f);
            glVertex2f(-0.318f, -0.935f);
            glVertex2f(-0.318f, -0.939f);
            glVertex2f(-0.318f, -0.939f);
            glVertex2f(-0.318f, -0.943f);
            glVertex2f(-0.318f, -0.947f);
            glVertex2f(-0.354f, -0.943f);
            glVertex2f(-0.354f, -0.923f);
            glVertex2f(-0.349f, -0.904f);
            glVertex2f(-0.338f, -0.888f);
            glVertex2f(-0.329f, -0.9f);
            glVertex2f(-0.325f, -0.9f);
            glVertex2f(-0.320f, -0.904f);
            glVertex2f(-0.318f, -0.908f);
            glVertex2f(-0.318f, -0.911f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(77,77,77);
            glVertex2f(-0.449f, -0.789f);
            glVertex2f(-0.460f, -0.789f);
            glVertex2f(-0.460f, -0.765f);
            glVertex2f(-0.460f, -0.745f);
            glVertex2f(-0.447f, -0.722f);
            glVertex2f(-0.432f, -0.722f);
            glVertex2f(-0.425f, -0.73f);
            glVertex2f(-0.420f, -0.745f);
            glVertex2f(-0.420f, -0.765f);
            glVertex2f(-0.425f, -0.797f);
            glVertex2f(-0.436f, -0.801f);
            glVertex2f(-0.449f, -0.801f);
            glVertex2f(-0.452f, -0.801f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(77,77,77);
            glVertex2f(-0.045f, -0.923f);
            glVertex2f(-0.047f, -0.923f);
            glVertex2f(-0.047f, -0.923f);
            glVertex2f(-0.069f, -0.896f);
            glVertex2f(-0.069f, -0.88f);
            glVertex2f(-0.067f, -0.852f);
            glVertex2f(-0.058f, -0.825f);
            glVertex2f(-0.038f, -0.821f);
            glVertex2f(-0.027f, -0.832f);
            glVertex2f(-0.020f, -0.84f);
            glVertex2f(-0.018f, -0.856f);
            glVertex2f(-0.018f, -0.9f);
            glVertex2f(-0.020f, -0.908f);
            glVertex2f(-0.027f, -0.923f);
            glVertex2f(-0.036f, -0.923f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(77,77,77);
            glVertex2f(0.037f, -0.726f);
            glVertex2f(0.028f, -0.745f);
            glVertex2f(0.024f, -0.757f);
            glVertex2f(0.015f, -0.769f);
            glVertex2f(0.002f, -0.777f);
            glVertex2f(-0.016f, -0.789f);
            glVertex2f(-0.020f, -0.789f);
            glVertex2f(-0.023f, -0.785f);
            glVertex2f(-0.029f, -0.781f);
            glVertex2f(-0.040f, -0.769f);
            glVertex2f(-0.043f, -0.757f);
            glVertex2f(-0.043f, -0.738f);
            glVertex2f(-0.045f, -0.714f);
            glVertex2f(-0.060f, -0.682f);
            glVertex2f(-0.065f, -0.655f);
            glVertex2f(-0.058f, -0.623f);
            glVertex2f(-0.047f, -0.607f);
            glVertex2f(-0.036f, -0.595f);
            glVertex2f(-0.003f, -0.583f);
            glVertex2f(0.011f, -0.579f);
            glVertex2f(0.020f, -0.579f);
            glVertex2f(0.033f, -0.579f);
            glVertex2f(0.053f, -0.599f);
            glVertex2f(0.066f, -0.619f);
            glVertex2f(0.066f, -0.631f);
            glVertex2f(0.066f, -0.658f);
            glVertex2f(0.064f, -0.678f);
            glVertex2f(0.057f, -0.698f);
            glVertex2f(0.044f, -0.718f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(77,77,77);
            glVertex2f(-0.609f, -0.923f);
            glVertex2f(-0.614f, -0.923f);
            glVertex2f(-0.618f, -0.923f);
            glVertex2f(-0.620f, -0.923f);
            glVertex2f(-0.620f, -0.919f);
            glVertex2f(-0.620f, -0.904f);
            glVertex2f(-0.616f, -0.9f);
            glVertex2f(-0.600f, -0.9f);
            glVertex2f(-0.596f, -0.9f);
            glVertex2f(-0.596f, -0.908f);
            glVertex2f(-0.600f, -0.915f);
            glVertex2f(-0.605f, -0.919f);
            glEnd();



            //RIGHT PART

            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,133,133);
            glVertex2f(0.956f, -0.896f);
            glVertex2f(0.967f, -0.915f);
            glVertex2f(0.974f, -0.915f);
            glVertex2f(0.976f, -0.915f);
            glVertex2f(0.983f, -0.915f);
            glVertex2f(0.983f, -0.915f);
            glVertex2f(0.983f, -0.915f);
            glVertex2f(0.983f, -0.915f);
            glVertex2f(0.983f, -0.915f);
            glVertex2f(0.983f, -0.915f);
            glVertex2f(0.987f, -0.904f);
            glVertex2f(0.987f, -0.896f);
            glVertex2f(0.987f, -0.884f);
            glVertex2f(0.987f, -0.876f);
            glVertex2f(0.987f, -0.872f);
            glVertex2f(0.987f, -0.86f);
            glVertex2f(0.983f, -0.86f);
            glVertex2f(0.983f, -0.856f);
            glVertex2f(0.980f, -0.852f);
            glVertex2f(0.978f, -0.844f);
            glVertex2f(0.974f, -0.836f);
            glVertex2f(0.969f, -0.825f);
            glVertex2f(0.969f, -0.825f);
            glVertex2f(0.967f, -0.825f);
            glVertex2f(0.958f, -0.821f);
            glVertex2f(0.958f, -0.821f);
            glVertex2f(0.949f, -0.817f);
            glVertex2f(0.947f, -0.817f);
            glVertex2f(0.943f, -0.817f);
            glVertex2f(0.940f, -0.817f);
            glVertex2f(0.936f, -0.821f);
            glVertex2f(0.932f, -0.821f);
            glVertex2f(0.927f, -0.821f);
            glVertex2f(0.923f, -0.825f);
            glVertex2f(0.923f, -0.828f);
            glVertex2f(0.920f, -0.836f);
            glVertex2f(0.920f, -0.856f);
            glVertex2f(0.920f, -0.868f);
            glVertex2f(0.920f, -0.872f);
            glVertex2f(0.925f, -0.88f);
            glVertex2f(0.936f, -0.888f);
            glVertex2f(0.943f, -0.888f);
            glVertex2f(0.947f, -0.888f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,133,133);
            glVertex2f(0.827f, -0.821f);
            glVertex2f(0.816f, -0.821f);
            glVertex2f(0.805f, -0.825f);
            glVertex2f(0.794f, -0.828f);
            glVertex2f(0.778f, -0.828f);
            glVertex2f(0.769f, -0.813f);
            glVertex2f(0.758f, -0.781f);
            glVertex2f(0.763f, -0.773f);
            glVertex2f(0.772f, -0.765f);
            glVertex2f(0.778f, -0.749f);
            glVertex2f(0.780f, -0.734f);
            glVertex2f(0.780f, -0.722f);
            glVertex2f(0.787f, -0.71f);
            glVertex2f(0.792f, -0.698f);
            glVertex2f(0.800f, -0.69f);
            glVertex2f(0.807f, -0.694f);
            glVertex2f(0.814f, -0.698f);
            glVertex2f(0.836f, -0.702f);
            glVertex2f(0.847f, -0.702f);
            glVertex2f(0.856f, -0.718f);
            glVertex2f(0.856f, -0.742f);
            glVertex2f(0.854f, -0.757f);
            glVertex2f(0.858f, -0.769f);
            glVertex2f(0.863f, -0.785f);
            glVertex2f(0.863f, -0.797f);
            glVertex2f(0.860f, -0.809f);
            glVertex2f(0.860f, -0.813f);
            glVertex2f(0.863f, -0.825f);
            glVertex2f(0.863f, -0.832f);
            glVertex2f(0.860f, -0.828f);
            glVertex2f(0.860f, -0.828f);
            glVertex2f(0.858f, -0.817f);
            glVertex2f(0.854f, -0.813f);
            glVertex2f(0.847f, -0.817f);
            glVertex2f(0.845f, -0.817f);
            glVertex2f(.845f, -0.821f);
            glVertex2f(0.845f, -0.821f);
            glVertex2f(0.843f, -0.821f);
            glVertex2f(0.836f, -0.821f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,133,133);
            glVertex2f(0.812f, -0.892f);
            glVertex2f(0.785f, -0.888f);
            glVertex2f(0.812f, -0.935f);
            glVertex2f(0.814f, -0.927f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,133,133);
            glVertex2f(0.900f, -0.919f);
            glVertex2f(0.905f, -0.939f);
            glVertex2f(0.905f, -0.939f);
            glVertex2f(0.909f, -0.939f);
            glVertex2f(0.914f, -0.939f);
            glVertex2f(0.916f, -0.927f);
            glVertex2f(0.918f, -0.931f);
            glVertex2f(0.918f, -0.931f);
            glVertex2f(0.912f, -0.9f);
            glVertex2f(0.907f, -0.892f);
            glVertex2f(0.900f, -0.892f);
            glVertex2f(0.889f, -0.892f);
            glVertex2f(0.880f, -0.892f);
            glVertex2f(0.878f, -0.9f);
            glVertex2f(0.880f, -0.911f);
            glVertex2f(0.883f, -0.915f);
            glVertex2f(0.892f, -0.919f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(94,94,94);
            glVertex2f(0.836f, -0.919f);
            glVertex2f(0.836f, -0.923f);
            glVertex2f(0.836f, -0.927f);
            glVertex2f(0.836f, -0.927f);
            glVertex2f(0.834f, -0.931f);
            glVertex2f(0.832f, -0.939f);
            glVertex2f(0.832f, -0.939f);
            glVertex2f(0.832f, -0.939f);
            glVertex2f(0.832f, -0.939f);
            glVertex2f(0.832f, -0.939f);
            glVertex2f(.865f, -0.939f);
            glVertex2f(.865f, -0.939f);
            glVertex2f(.867f, -0.923f);
            glVertex2f(.867f, -0.915f);
            glVertex2f(.865f, -0.908f);
            glVertex2f(0.865f, -0.904f);
            glVertex2f(0.863f, -0.904f);
            glVertex2f(0.856f, -0.904f);
            glVertex2f(0.849f, -0.892f);
            glVertex2f(0.845f, -0.888f);
            glVertex2f(0.845f, -0.888f);
            glVertex2f(0.838f, -0.908f);
            glVertex2f(0.836f, -0.911f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(94,94,94);
            glVertex2f(0.949f, -0.777f);
            glVertex2f(0.952f, -0.777f);
            glVertex2f(0.954f, -0.777f);
            glVertex2f(0.956f, -0.777f);
            glVertex2f(0.956f, -0.769f);
            glVertex2f(0.958f, -0.769f);
            glVertex2f(0.958f, -0.769f);
            glVertex2f(0.958f, -0.769f);
            glVertex2f(0.954f, -0.757f);
            glVertex2f(0.949f, -0.738f);
            glVertex2f(0.943f, -0.738f);
            glVertex2f(0.940f, -0.738f);
            glVertex2f(0.936f, -0.745f);
            glVertex2f(0.927f, -0.745f);
            glVertex2f(0.927f, -0.757f);
            glVertex2f(0.927f, -0.761f);
            glVertex2f(0.927f, -0.769f);
            glVertex2f(0.932f, -0.785f);
            glVertex2f(0.943f, -0.781f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,133,133);
            glVertex2f(0.689f, -0.785f);
            glVertex2f(0.665f, -0.781f);
            glVertex2f(0.654f, -0.781f);
            glVertex2f(0.634f, -0.817f);
            glVertex2f(0.634f, -0.9f);
            glVertex2f(0.647f, -0.927f);
            glVertex2f(0.703f, -0.884f);
            glVertex2f(0.705f, -0.888f);
            glVertex2f(0.714f, -0.86f);
            glVertex2f(0.714f, -0.809f);
            glVertex2f(0.712f, -0.789f);
            glVertex2f(0.698f, -0.781f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,133,133);
            glVertex2f(0.720f, -0.67f);
            glVertex2f(0.714f, -0.655f);
            glVertex2f(0.709f, -0.655f);
            glVertex2f(0.692f, -0.627f);
            glVertex2f(0.672f, -0.686f);
            glVertex2f(0.712f, -0.765f);
            glVertex2f(0.720f, -0.71f);
            glVertex2f(0.723f, -0.722f);
            glVertex2f(0.723f, -0.714f);
            glVertex2f(0.725f, -0.694f);
            glVertex2f(0.729f, -0.67f);
            glVertex2f(0.727f, -0.67f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(107,107,107);
            glVertex2f(0.705f, -0.915f);
            glVertex2f(0.700f, -0.923f);
            glVertex2f(0.694f, -0.927f);
            glVertex2f(0.694f, -0.935f);
            glVertex2f(0.694f, -0.935f);
            glVertex2f(0.689f, -0.939f);
            glVertex2f(0.687f, -0.943f);
            glVertex2f(0.749f, -0.939f);
            glVertex2f(0.743f, -0.915f);
            glVertex2f(0.738f, -0.915f);
            glVertex2f(0.725f, -0.896f);
            glVertex2f(0.718f, -0.896f);
            glVertex2f(0.709f, -0.908f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(107,107,107);
            glVertex2f(0.540f, -0.745f);
            glVertex2f(0.527f, -0.749f);
            glVertex2f(0.516f, -0.753f);
            glVertex2f(0.500f, -0.765f);
            glVertex2f(0.494f, -0.805f);
            glVertex2f(0.514f, -0.828f);
            glVertex2f(0.540f, -0.852f);
            glVertex2f(0.572f, -0.856f);
            glVertex2f(0.569f, -0.852f);
            glVertex2f(0.576f, -0.828f);
            glVertex2f(0.578f, -0.789f);
            glVertex2f(0.576f, -0.769f);
            glVertex2f(0.558f, -0.745f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(107,107,107);
            glVertex2f(0.463f, -0.69f);
            glVertex2f(0.507f, -0.706f);
            glVertex2f(0.512f, -0.69f);
            glVertex2f(0.512f, -0.682f);
            glVertex2f(0.507f, -0.69f);
            glVertex2f(0.520f, -0.662f);
            glVertex2f(0.518f, -0.631f);
            glVertex2f(0.516f, -0.603f);
            glVertex2f(0.505f, -0.583f);
            glVertex2f(0.492f, -0.575f);
            glVertex2f(0.467f, -0.568f);
            glVertex2f(0.456f, -0.572f);
            glVertex2f(0.443f, -0.579f);
            glVertex2f(0.429f, -0.583f);
            glVertex2f(0.420f, -0.595f);
            glVertex2f(0.414f, -0.603f);
            glVertex2f(0.414f, -0.615f);
            glVertex2f(0.414f, -0.643f);
            glVertex2f(0.416f, -0.658f);
            glVertex2f(0.427f, -0.67f);
            glVertex2f(0.443f, -0.682f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(107,107,107);
            glVertex2f(0.407f, -0.896f);
            glVertex2f(0.418f, -0.896f);
            glVertex2f(0.420f, -0.896f);
            glVertex2f(0.423f, -0.896f);
            glVertex2f(0.423f, -0.896f);
            glVertex2f(0.427f, -0.844f);
            glVertex2f(0.425f, -0.825f);
            glVertex2f(0.416f, -0.809f);
            glVertex2f(0.409f, -0.809f);
            glVertex2f(0.405f, -0.809f);
            glVertex2f(0.374f, -0.817f);
            glVertex2f(0.374f, -0.84f);
            glVertex2f(0.374f, -0.876f);
            glVertex2f(0.383f, -0.896f);
            glVertex2f(0.392f, -0.896f);
            glVertex2f(0.396f, -0.896f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(107,107,107);
            glVertex2f(0.600f, -0.71f);
            glVertex2f(0.612f, -0.694f);
            glVertex2f(0.609f, -0.702f);
            glVertex2f(0.609f, -0.702f);
            glVertex2f(0.609f, -0.694f);
            glVertex2f(0.609f, -0.662f);
            glVertex2f(0.609f, -0.647f);
            glVertex2f(0.596f, -0.647f);
            glVertex2f(0.587f, -0.647f);
            glVertex2f(0.572f, -0.655f);
            glVertex2f(0.558f, -0.67f);
            glVertex2f(0.558f, -0.694f);
            glVertex2f(0.576f, -0.706f);
            glVertex2f(0.592f, -0.714f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(107,107,107);
            glVertex2f(0.256f, -0.868f);
            glVertex2f(0.278f, -0.876f);
            glVertex2f(0.283f, -0.876f);
            glVertex2f(0.285f, -0.872f);
            glVertex2f(0.294f, -0.872f);
            glVertex2f(0.292f, -0.872f);
            glVertex2f(0.294f, -0.856f);
            glVertex2f(0.300f, -0.797f);
            glVertex2f(0.298f, -0.765f);
            glVertex2f(0.287f, -0.753f);
            glVertex2f(0.263f, -0.742f);
            glVertex2f(0.236f, -0.738f);
            glVertex2f(0.220f, -0.738f);
            glVertex2f(0.200f, -0.757f);
            glVertex2f(0.192f, -0.781f);
            glVertex2f(0.192f, -0.801f);
            glVertex2f(0.194f, -0.828f);
            glVertex2f(0.198f, -0.844f);
            glVertex2f(0.212f, -0.86f);
            glVertex2f(0.225f, -0.868f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,133,133);
            glVertex2f(0.380f, -0.706f);
            glVertex2f(0.380f, -0.674f);
            glVertex2f(0.374f, -0.655f);
            glVertex2f(0.365f, -0.651f);
            glVertex2f(0.356f, -0.651f);
            glVertex2f(0.338f, -0.639f);
            glVertex2f(0.309f, -0.623f);
            glVertex2f(0.309f, -0.635f);
            glVertex2f(0.309f, -0.682f);
            glVertex2f(0.309f, -0.718f);
            glVertex2f(0.309f, -0.73f);
            glVertex2f(0.312f, -0.761f);
            glVertex2f(0.325f, -0.777f);
            glVertex2f(0.338f, -0.777f);
            glVertex2f(0.363f, -0.777f);
            glVertex2f(0.372f, -0.777f);
            glVertex2f(0.378f, -0.769f);
            glVertex2f(0.378f, -0.749f);
            glVertex2f(0.380f, -0.753f);
            glVertex2f(0.380f, -0.745f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,133,133);
            glVertex2f(0.478f, -0.908f);
            glVertex2f(0.478f, -0.908f);
            glVertex2f(0.472f, -0.908f);
            glVertex2f(0.467f, -0.915f);
            glVertex2f(0.460f, -0.923f);
            glVertex2f(0.460f, -0.935f);
            glVertex2f(0.456f, -0.939f);
            glVertex2f(0.456f, -0.939f);
            glVertex2f(0.543f, -0.939f);
            glVertex2f(0.543f, -0.939f);
            glVertex2f(0.538f, -0.892f);
            glVertex2f(0.538f, -0.892f);
            glVertex2f(0.527f, -0.892f);
            glVertex2f(0.516f, -0.884f);
            glVertex2f(0.503f, -0.884f);
            glVertex2f(0.485f, -0.884f);
            glVertex2f(0.478f, -0.888f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(133,133,133);
            glVertex2f(0.136f, -0.718f);
            glVertex2f(0.147f, -0.726f);
            glVertex2f(0.149f, -0.726f);
            glVertex2f(0.178f, -0.694f);
            glVertex2f(0.192f, -0.658f);
            glVertex2f(0.187f, -0.635f);
            glVertex2f(0.176f, -0.623f);
            glVertex2f(0.172f, -0.607f);
            glVertex2f(0.165f, -0.591f);
            glVertex2f(0.152f, -0.579f);
            glVertex2f(0.129f, -0.575f);
            glVertex2f(0.105f, -0.575f);
            glVertex2f(0.094f, -0.575f);
            glVertex2f(0.083f, -0.603f);
            glVertex2f(0.080f, -0.639f);
            glVertex2f(0.078f, -0.67f);
            glVertex2f(0.078f, -0.686f);
            glVertex2f(0.100f, -0.738f);
            glVertex2f(0.114f, -0.738f);
            glVertex2f(0.127f, -0.734f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(107,107,107);
            glVertex2f(0.103f, -0.868f);
            glVertex2f(0.096f, -0.884f);
            glVertex2f(0.087f, -0.904f);
            glVertex2f(0.085f, -0.923f);
            glVertex2f(0.085f, -0.939f);
            glVertex2f(0.085f, -0.943f);
            glVertex2f(0.085f, -0.947f);
            glVertex2f(0.158f, -0.955f);
            glVertex2f(0.165f, -0.927f);
            glVertex2f(0.167f, -0.884f);
            glVertex2f(0.167f, -0.856f);
            glVertex2f(0.154f, -0.828f);
            glVertex2f(0.138f, -0.828f);
            glVertex2f(0.125f, -0.828f);
            glVertex2f(0.120f, -0.828f);
            glVertex2f(0.109f, -0.848f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(107,107,107);
            glVertex2f(0.247f, -0.682f);
            glVertex2f(0.249f, -0.686f);
            glVertex2f(0.254f, -0.674f);
            glVertex2f(0.258f, -0.662f);
            glVertex2f(0.258f, -0.639f);
            glVertex2f(0.247f, -0.623f);
            glVertex2f(0.240f, -0.619f);
            glVertex2f(0.229f, -0.619f);
            glVertex2f(0.216f, -0.635f);
            glVertex2f(0.212f, -0.686f);
            glVertex2f(0.218f, -0.706f);
            glVertex2f(0.234f, -0.702f);
            glVertex2f(0.240f, -0.694f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(77,77,77);
            glVertex2f(0.318f, -0.919f);
            glVertex2f(0.318f, -0.923f);
            glVertex2f(.318f, -0.935f);
            glVertex2f(0.318f, -0.935f);
            glVertex2f(0.318f, -0.939f);
            glVertex2f(0.318f, -0.939f);
            glVertex2f(0.318f, -0.943f);
            glVertex2f(0.318f, -0.947f);
            glVertex2f(0.354f, -0.943f);
            glVertex2f(0.354f, -0.923f);
            glVertex2f(0.349f, -0.904f);
            glVertex2f(0.338f, -0.888f);
            glVertex2f(0.329f, -0.9f);
            glVertex2f(0.325f, -0.9f);
            glVertex2f(0.320f, -0.904f);
            glVertex2f(0.318f, -0.908f);
            glVertex2f(0.318f, -0.911f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(77,77,77);
            glVertex2f(0.449f, -0.789f);
            glVertex2f(0.460f, -0.789f);
            glVertex2f(0.460f, -0.765f);
            glVertex2f(0.460f, -0.745f);
            glVertex2f(0.447f, -0.722f);
            glVertex2f(0.432f, -0.722f);
            glVertex2f(0.425f, -0.73f);
            glVertex2f(0.420f, -0.745f);
            glVertex2f(0.420f, -0.765f);
            glVertex2f(0.425f, -0.797f);
            glVertex2f(0.436f, -0.801f);
            glVertex2f(0.449f, -0.801f);
            glVertex2f(0.452f, -0.801f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(77,77,77);
            glVertex2f(0.045f, -0.923f);
            glVertex2f(0.047f, -0.923f);
            glVertex2f(0.047f, -0.923f);
            glVertex2f(0.069f, -0.896f);
            glVertex2f(0.069f, -0.88f);
            glVertex2f(0.067f, -0.852f);
            glVertex2f(0.058f, -0.825f);
            glVertex2f(0.038f, -0.821f);
            glVertex2f(0.027f, -0.832f);
            glVertex2f(0.020f, -0.84f);
            glVertex2f(0.018f, -0.856f);
            glVertex2f(0.018f, -0.9f);
            glVertex2f(0.020f, -0.908f);
            glVertex2f(0.027f, -0.923f);
            glVertex2f(0.036f, -0.923f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(77,77,77);
            glVertex2f(0.609f, -0.923f);
            glVertex2f(0.614f, -0.923f);
            glVertex2f(0.618f, -0.923f);
            glVertex2f(0.620f, -0.923f);
            glVertex2f(0.620f, -0.919f);
            glVertex2f(0.620f, -0.904f);
            glVertex2f(0.616f, -0.9f);
            glVertex2f(0.600f, -0.9f);
            glVertex2f(0.596f, -0.9f);
            glVertex2f(0.596f, -0.908f);
            glVertex2f(0.600f, -0.915f);
            glVertex2f(0.605f, -0.919f);
            glEnd();

            glPopMatrix();
}

void snows_3()
{
    if(snow_3 == true)
    {

    glPointSize(4.0);
        glBegin(GL_POINTS);
        glColor3ub(255,255,255);

        for (int i = -32; i <= 32; i++) {
            for (int j = -4; j <= 18; j++) {
                if (rand() % 100 < 10) {
                    glVertex2f(i + (rand() % 100) / 100.0, j + (rand() % 100) / 100.0);
                }
            }
        }
    }

        glEnd();


}

void sky()
{

    glPushMatrix();
    glScalef(32,18,0);
    glTranslatef(0,0.1,0);

            glBegin(GL_TRIANGLE_FAN);
            //glColor3ub(138,194,198);
            set_color("sky");
            glVertex2f(-0.998f, 0.211f);
            glVertex2f(1.002f, 0.231f);

            set_color("sky-shade");
            glVertex2f(1.000f, 0.895f);
            glVertex2f(-1.000f, 0.899f);

            set_color("sky-shade");

            glVertex2f(-1.000f, 0.211f);
            glEnd();
            glPopMatrix();
}

void snowstorm_snow()
{
    if(snow_3 == true)
    {


    glPushMatrix();
    glScalef(32,18,0);
    glTranslatef(0,.08,0);
       glBegin(GL_POLYGON);
            glColor3ub(240,240,240);
            glVertex2f(-0.976f, 0.128f);
            glVertex2f(-0.983f, 0.124f);
            glVertex2f(-0.989f, 0.128f);
            glVertex2f(-0.996f, 0.132f);
            glVertex2f(-1.000f, 0.156f);
            glVertex2f(-1.000f, 0.136f);
            glVertex2f(-1.000f, 0.136f);
            glVertex2f(-0.992f, 0.124f);
            glVertex2f(-0.987f, 0.112f);
            glVertex2f(-0.987f, 0.096f);
            glVertex2f(-0.980f, 0.1f);
            glVertex2f(-0.967f, 0.104f);
            glVertex2f(-0.958f, 0.104f);
            glVertex2f(-0.952f, 0.104f);
            glVertex2f(-0.940f, 0.104f);
            glVertex2f(-0.934f, 0.116f);
            glVertex2f(-0.945f, 0.128f);
            glVertex2f(-0.954f, 0.128f);
            glEnd();
            glBegin(GL_POLYGON);
            glColor3ub(240,240,240);
            glVertex2f(-0.916f, 0.215f);
            glVertex2f(-0.923f, 0.172f);
            glVertex2f(-0.932f, 0.16f);
            glVertex2f(-0.936f, 0.12f);
            glVertex2f(-0.943f, 0.132f);
            glVertex2f(-0.945f, 0.144f);
            glVertex2f(-0.943f, 0.164f);
            glVertex2f(-0.938f, 0.172f);
            glVertex2f(-0.934f, 0.191f);
            glVertex2f(-0.934f, 0.199f);
            glVertex2f(-0.932f, 0.211f);
            glVertex2f(-0.927f, 0.227f);
            glVertex2f(-0.920f, 0.247f);
            glVertex2f(-0.900f, 0.266f);
            glVertex2f(-0.896f, 0.29f);
            glVertex2f(-0.894f, 0.31f);
            glVertex2f(-0.903f, 0.314f);
            glVertex2f(-0.909f, 0.29f);
            glEnd();
            glBegin(GL_POLYGON);
            glColor3ub(240,240,240);
            glVertex2f(-0.743f, 0.389f);
            glVertex2f(-0.732f, 0.401f);
            glVertex2f(-0.712f, 0.428f);
            glVertex2f(-0.703f, 0.444f);
            glVertex2f(-0.700f, 0.456f);
            glVertex2f(-0.694f, 0.48f);
            glVertex2f(-0.696f, 0.488f);
            glVertex2f(-0.698f, 0.496f);
            glVertex2f(-0.705f, 0.476f);
            glVertex2f(-0.723f, 0.448f);
            glVertex2f(-0.736f, 0.413f);
            glVertex2f(-0.752f, 0.385f);
            glVertex2f(-0.767f, 0.334f);
            glVertex2f(-0.778f, 0.318f);
            glVertex2f(-0.789f, 0.318f);
            glVertex2f(-0.787f, 0.302f);
            glVertex2f(-0.783f, 0.302f);
            glVertex2f(-0.780f, 0.302f);
            glVertex2f(-0.763f, 0.334f);
            glVertex2f(-0.756f, 0.349f);
            glVertex2f(-0.754f, 0.373f);
            glEnd();
            glBegin(GL_POLYGON);
            glColor3ub(240,240,240);
            glVertex2f(-0.829f, 0.077f);
            glVertex2f(-0.812f, 0.089f);
            glVertex2f(-0.776f, 0.12f);
            glVertex2f(-0.763f, 0.148f);
            glVertex2f(-0.774f, 0.179f);
            glVertex2f(-0.805f, 0.116f);
            glVertex2f(-0.814f, 0.081f);
            glVertex2f(-0.820f, 0.053f);
            glVertex2f(-0.827f, 0.029f);
            glVertex2f(-0.838f, 0.002f);
            glVertex2f(-0.829f, 0.025f);
            glVertex2f(-0.889f, -0.042f);
            glVertex2f(-0.876f, 0.013f);
            glVertex2f(-0.869f, 0.061f);
            glVertex2f(-0.854f, 0.077f);
            glEnd();
            glBegin(GL_POLYGON);
            glColor3ub(240,240,240);
            glVertex2f(-0.640f, 0.29f);
            glVertex2f(-0.605f, 0.298f);
            glVertex2f(-0.574f, 0.318f);
            glVertex2f(-0.569f, 0.338f);
            glVertex2f(-0.578f, 0.338f);
            glVertex2f(-0.607f, 0.286f);
            glVertex2f(-0.618f, 0.282f);
            glVertex2f(-0.625f, 0.298f);
            glVertex2f(-0.654f, 0.306f);
            glVertex2f(-0.700f, 0.322f);
            glVertex2f(-0.725f, 0.302f);
            glVertex2f(-0.700f, 0.278f);
            glVertex2f(-0.696f, 0.29f);
            glVertex2f(-0.689f, 0.286f);
            glVertex2f(-0.663f, 0.29f);
            glEnd();
            glBegin(GL_POLYGON);
            glColor3ub(240,240,240);
            glVertex2f(-0.576f, 0.452f);
            glVertex2f(-0.598f, 0.432f);
            glVertex2f(-0.618f, 0.405f);
            glVertex2f(-0.625f, 0.393f);
            glVertex2f(-0.634f, 0.385f);
            glVertex2f(-0.627f, 0.389f);
            glVertex2f(-0.627f, 0.381f);
            glVertex2f(-0.625f, 0.393f);
            glVertex2f(-0.609f, 0.421f);
            glVertex2f(-0.598f, 0.425f);
            glVertex2f(-0.583f, 0.432f);
            glVertex2f(-0.560f, 0.44f);
            glVertex2f(-0.538f, 0.464f);
            glVertex2f(-0.534f, 0.472f);
            glVertex2f(-0.532f, 0.48f);
            glVertex2f(-0.523f, 0.484f);
            glVertex2f(-0.509f, 0.496f);
            glVertex2f(-0.505f, 0.504f);
            glVertex2f(-0.500f, 0.523f);
            glVertex2f(-0.512f, 0.519f);
            glVertex2f(-0.527f, 0.508f);
            glVertex2f(-0.549f, 0.488f);
            glVertex2f(-0.560f, 0.48f);
            glEnd();
            glBegin(GL_POLYGON);
            glColor3ub(240,240,240);
            glVertex2f(-0.418f, 0.535f);
            glVertex2f(-0.418f, 0.563f);
            glVertex2f(-0.425f, 0.579f);
            glVertex2f(-0.425f, 0.587f);
            glVertex2f(-0.436f, 0.606f);
            glVertex2f(-0.440f, 0.602f);
            glVertex2f(-0.440f, 0.598f);
            glVertex2f(-0.445f, 0.563f);
            glVertex2f(-0.440f, 0.551f);
            glVertex2f(-0.432f, 0.539f);
            glVertex2f(-0.425f, 0.519f);
            glVertex2f(-0.414f, 0.48f);
            glVertex2f(-0.414f, 0.464f);
            glVertex2f(-0.412f, 0.46f);
            glVertex2f(-0.403f, 0.468f);
            glVertex2f(-0.387f, 0.472f);
            glVertex2f(-0.378f, 0.492f);
            glVertex2f(-0.378f, 0.504f);
            glVertex2f(-0.385f, 0.5f);
            glVertex2f(-0.407f, 0.508f);
            glVertex2f(-0.416f, 0.519f);
            glEnd();
            glBegin(GL_POLYGON);
            glColor3ub(240,240,240);
            glVertex2f(-0.414f, 0.203f);
            glVertex2f(-0.427f, 0.262f);
            glVertex2f(-0.436f, 0.274f);
            glVertex2f(-0.440f, 0.286f);
            glVertex2f(-0.440f, 0.298f);
            glVertex2f(-0.429f, 0.298f);
            glVertex2f(-0.400f, 0.29f);
            glVertex2f(-0.405f, 0.227f);
            glVertex2f(-0.414f, 0.175f);
            glVertex2f(-0.400f, 0.136f);
            glVertex2f(-0.398f, 0.132f);
            glVertex2f(-0.403f, 0.12f);
            glVertex2f(-0.405f, 0.144f);
            glVertex2f(-0.409f, 0.144f);
            glVertex2f(-0.416f, 0.156f);
            glVertex2f(-0.418f, 0.191f);
            glEnd();
            glBegin(GL_POLYGON);
            glColor3ub(240,240,240);
            glVertex2f(-0.194f, 0.361f);
            glVertex2f(-0.209f, 0.357f);
            glVertex2f(-0.232f, 0.357f);
            glVertex2f(-0.236f, 0.381f);
            glVertex2f(-0.243f, 0.405f);
            glVertex2f(-0.245f, 0.401f);
            glVertex2f(-0.238f, 0.393f);
            glVertex2f(-0.225f, 0.381f);
            glVertex2f(-0.227f, 0.349f);
            glVertex2f(-0.216f, 0.334f);
            glVertex2f(-0.207f, 0.322f);
            glVertex2f(-0.198f, 0.326f);
            glVertex2f(-0.192f, 0.314f);
            glVertex2f(-0.185f, 0.306f);
            glVertex2f(-0.172f, 0.306f);
            glVertex2f(-0.156f, 0.31f);
            glVertex2f(-0.145f, 0.31f);
            glVertex2f(-0.149f, 0.334f);
            glVertex2f(-0.156f, 0.361f);
            glVertex2f(-0.165f, 0.361f);
            glVertex2f(-0.183f, 0.361f);
            glEnd();
            glBegin(GL_POLYGON);
            glColor3ub(240,240,240);
            glVertex2f(0.126f, 0.258f);
            glVertex2f(0.140f, 0.258f);
            glVertex2f(0.160f, 0.262f);
            glVertex2f(0.175f, 0.27f);
            glVertex2f(0.191f, 0.278f);
            glVertex2f(0.195f, 0.278f);
            glVertex2f(0.206f, 0.298f);
            glVertex2f(0.211f, 0.298f);
            glVertex2f(0.204f, 0.31f);
            glVertex2f(0.191f, 0.306f);
            glVertex2f(0.171f, 0.282f);
            glVertex2f(0.157f, 0.274f);
            glVertex2f(0.144f, 0.282f);
            glVertex2f(0.108f, 0.278f);
            glVertex2f(0.088f, 0.274f);
            glVertex2f(0.064f, 0.255f);
            glVertex2f(0.048f, 0.243f);
            glVertex2f(0.046f, 0.239f);
            glVertex2f(0.046f, 0.227f);
            glVertex2f(0.046f, 0.227f);
            glVertex2f(0.048f, 0.227f);
            glVertex2f(0.060f, 0.227f);
            glVertex2f(0.066f, 0.227f);
            glVertex2f(0.077f, 0.243f);
            glVertex2f(0.108f, 0.255f);
            glEnd();
            glBegin(GL_POLYGON);
            glColor3ub(240,240,240);
            glVertex2f(0.300f, 0.243f);
            glVertex2f(0.311f, 0.223f);
            glVertex2f(0.335f, 0.227f);
            glVertex2f(0.351f, 0.227f);
            glVertex2f(0.357f, 0.219f);
            glVertex2f(0.373f, 0.219f);
            glVertex2f(0.395f, 0.215f);
            glVertex2f(0.408f, 0.215f);
            glVertex2f(0.386f, 0.219f);
            glVertex2f(0.353f, 0.231f);
            glVertex2f(0.337f, 0.258f);
            glVertex2f(0.322f, 0.266f);
            glVertex2f(0.295f, 0.266f);
            glVertex2f(0.264f, 0.274f);
            glVertex2f(0.248f, 0.306f);
            glVertex2f(0.248f, 0.314f);
            glVertex2f(0.246f, 0.314f);
            glVertex2f(0.240f, 0.314f);
            glVertex2f(0.242f, 0.31f);
            glVertex2f(0.253f, 0.278f);
            glVertex2f(0.262f, 0.274f);
            glVertex2f(0.275f, 0.274f);
            glVertex2f(0.286f, 0.266f);
            glEnd();
            glBegin(GL_POLYGON);
            glColor3ub(240,240,240);
            glVertex2f(0.677f, 0.266f);
            glVertex2f(0.644f, 0.274f);
            glVertex2f(0.597f, 0.262f);
            glVertex2f(0.573f, 0.227f);
            glVertex2f(0.544f, 0.156f);
            glVertex2f(0.540f, 0.148f);
            glVertex2f(0.555f, 0.175f);
            glVertex2f(0.568f, 0.191f);
            glVertex2f(0.608f, 0.223f);
            glVertex2f(0.628f, 0.223f);
            glVertex2f(0.677f, 0.231f);
            glVertex2f(0.697f, 0.243f);
            glVertex2f(0.724f, 0.266f);
            glVertex2f(0.731f, 0.282f);
            glVertex2f(0.762f, 0.322f);
            glVertex2f(0.780f, 0.345f);
            glVertex2f(0.768f, 0.389f);
            glVertex2f(0.735f, 0.397f);
            glVertex2f(0.724f, 0.397f);
            glVertex2f(0.715f, 0.373f);
            glVertex2f(0.722f, 0.338f);
            glVertex2f(0.733f, 0.314f);
            glVertex2f(0.728f, 0.255f);
            glVertex2f(0.704f, 0.243f);
            glVertex2f(0.691f, 0.243f);
            glEnd();
            glBegin(GL_POLYGON);
            glColor3ub(240,240,240);
            glVertex2f(0.480f, 0.191f);
            glVertex2f(0.457f, 0.195f);
            glVertex2f(0.442f, 0.191f);
            glVertex2f(0.433f, 0.175f);
            glVertex2f(0.415f, 0.172f);
            glVertex2f(0.411f, 0.16f);
            glVertex2f(0.428f, 0.168f);
            glVertex2f(0.446f, 0.168f);
            glVertex2f(0.473f, 0.168f);
            glVertex2f(0.502f, 0.168f);
            glVertex2f(0.528f, 0.183f);
            glVertex2f(0.528f, 0.207f);
            glVertex2f(0.526f, 0.227f);
            glVertex2f(0.517f, 0.223f);
            glVertex2f(0.506f, 0.203f);
            glVertex2f(0.511f, 0.16f);
            glVertex2f(0.488f, 0.148f);
            glVertex2f(0.486f, 0.175f);
            glEnd();
            glBegin(GL_POLYGON);
            glColor3ub(240,240,240);
            glVertex2f(0.882f, 0.397f);
            glVertex2f(0.904f, 0.373f);
            glVertex2f(0.937f, 0.345f);
            glVertex2f(0.944f, 0.342f);
            glVertex2f(0.957f, 0.314f);
            glVertex2f(0.966f, 0.298f);
            glVertex2f(0.966f, 0.278f);
            glVertex2f(0.940f, 0.326f);
            glVertex2f(0.915f, 0.345f);
            glVertex2f(0.888f, 0.345f);
            glVertex2f(0.877f, 0.345f);
            glVertex2f(0.826f, 0.393f);
            glVertex2f(0.817f, 0.432f);
            glVertex2f(0.817f, 0.48f);
            glVertex2f(0.808f, 0.496f);
            glVertex2f(0.802f, 0.492f);
            glVertex2f(0.788f, 0.496f);
            glVertex2f(0.800f, 0.472f);
            glVertex2f(0.811f, 0.444f);
            glVertex2f(0.831f, 0.421f);
            glVertex2f(0.864f, 0.401f);
            glEnd();
            glBegin(GL_POLYGON);
            glColor3ub(240,240,240);
            glVertex2f(0.646f, 0.381f);
            glVertex2f(0.613f, 0.338f);
            glVertex2f(0.602f, 0.33f);
            glVertex2f(0.568f, 0.29f);
            glVertex2f(0.593f, 0.306f);
            glVertex2f(0.608f, 0.318f);
            glVertex2f(0.640f, 0.326f);
            glVertex2f(0.660f, 0.338f);
            glVertex2f(0.671f, 0.353f);
            glVertex2f(0.686f, 0.381f);
            glVertex2f(0.706f, 0.409f);
            glVertex2f(0.711f, 0.421f);
            glVertex2f(0.693f, 0.413f);
            glVertex2f(0.680f, 0.389f);
            glEnd();
            glBegin(GL_POLYGON);
            glColor3ub(240,240,240);
            glVertex2f(0.882f, 0.14f);
            glVertex2f(0.886f, 0.168f);
            glVertex2f(0.900f, 0.211f);
            glVertex2f(0.904f, 0.223f);
            glVertex2f(0.904f, 0.262f);
            glVertex2f(0.886f, 0.298f);
            glVertex2f(0.891f, 0.266f);
            glVertex2f(0.895f, 0.215f);
            glVertex2f(0.884f, 0.199f);
            glVertex2f(0.873f, 0.116f);
            glVertex2f(0.864f, 0.077f);
            glVertex2f(0.824f, 0.061f);
            glVertex2f(0.813f, 0.061f);
            glVertex2f(0.800f, 0.069f);
            glVertex2f(0.826f, 0.116f);
            glVertex2f(0.842f, 0.124f);
            glVertex2f(0.868f, 0.124f);
            glVertex2f(0.877f, 0.124f);
            glEnd();
            glBegin(GL_POLYGON);
            glColor3ub(240,240,240);
            glVertex2f(-0.636f, 0.175f);
            glVertex2f(-0.665f, 0.116f);
            glVertex2f(-0.669f, 0.092f);
            glVertex2f(-0.669f, 0.085f);
            glVertex2f(-0.692f, 0.089f);
            glVertex2f(-0.678f, 0.096f);
            glVertex2f(-0.636f, 0.128f);
            glVertex2f(-0.625f, 0.168f);
            glVertex2f(-0.623f, 0.183f);
            glVertex2f(-0.618f, 0.203f);
            glVertex2f(-0.618f, 0.215f);
            glVertex2f(-0.598f, 0.231f);
            glVertex2f(-0.580f, 0.231f);
            glVertex2f(-0.583f, 0.183f);
            glEnd();
            glPopMatrix();
    }
}

void gate_snow()
{
    if(snow_3 == true)
    {


    glPushMatrix();
    glScalef(31,17,0);
    glTranslatef(-.021,0.05,0);

            glBegin(GL_POLYGON);
            glColor3ub(230,230,230);
            glVertex2f(-0.774f, -0.093f);
            glVertex2f(-0.774f, -0.077f);
            glVertex2f(-0.774f, -0.062f);
            glVertex2f(-0.774f, -0.054f);
            glVertex2f(-0.772f, -0.046f);
            glVertex2f(-0.772f, -0.034f);
            glVertex2f(-0.772f, -0.03f);
            glVertex2f(-0.776f, -0.03f);
            glVertex2f(-0.776f, -0.058f);
            glVertex2f(-0.776f, -0.097f);
            glVertex2f(-0.776f, -0.113f);
            glVertex2f(-0.778f, -0.129f);
            glVertex2f(-0.780f, -0.133f);
            glVertex2f(-0.778f, -0.141f);
            glVertex2f(-0.778f, -0.149f);
            glVertex2f(-0.776f, -0.149f);
            glVertex2f(-0.774f, -0.141f);
            glVertex2f(-0.774f, -0.121f);
            glVertex2f(-0.774f, -0.105f);
            glEnd();
            glBegin(GL_POLYGON);
            glColor3ub(230,230,230);
            glVertex2f(-0.643f, 0.013f);
            glVertex2f(-0.649f, -0.034f);
            glVertex2f(-0.649f, -0.046f);
            glVertex2f(-0.649f, -0.05f);
            glVertex2f(-0.649f, -0.066f);
            glVertex2f(-0.649f, -0.014f);
            glVertex2f(-0.649f, -0.01f);
            glVertex2f(-0.649f, 0.021f);
            glVertex2f(-0.645f, 0.061f);
            glVertex2f(-0.645f, 0.061f);
            glVertex2f(-0.634f, 0.061f);
            glVertex2f(-0.634f, 0.061f);
            glVertex2f(-0.638f, 0.069f);
            glVertex2f(-0.652f, 0.053f);
            glVertex2f(-0.652f, 0.033f);
            glEnd();
            glBegin(GL_POLYGON);
            glColor3ub(230,230,230);
            glVertex2f(-0.485f, 0.148f);
            glVertex2f(-0.480f, 0.156f);
            glVertex2f(-0.480f, 0.179f);
            glVertex2f(-0.480f, 0.211f);
            glVertex2f(-0.480f, 0.211f);
            glVertex2f(-0.489f, 0.187f);
            glVertex2f(-0.489f, 0.187f);
            glVertex2f(-0.494f, 0.183f);
            glVertex2f(-0.494f, 0.175f);
            glVertex2f(-0.492f, 0.199f);
            glVertex2f(-0.492f, 0.195f);
            glVertex2f(-0.487f, 0.132f);
            glVertex2f(-0.489f, 0.12f);
            glVertex2f(-0.492f, 0.112f);
            glVertex2f(-0.489f, 0.1f);
            glVertex2f(-0.489f, 0.081f);
            glVertex2f(-0.485f, 0.073f);
            glVertex2f(-0.485f, 0.049f);
            glVertex2f(-0.492f, 0.128f);
            glVertex2f(-0.492f, 0.128f);
            glEnd();
            glBegin(GL_POLYGON);
            glColor3ub(230,230,230);
            glVertex2f(0.204f, 0.385f);
            glVertex2f(0.202f, 0.397f);
            glVertex2f(0.204f, 0.413f);
            glVertex2f(0.204f, 0.421f);
            glVertex2f(0.208f, 0.421f);
            glVertex2f(0.217f, 0.417f);
            glVertex2f(0.217f, 0.413f);
            glVertex2f(0.208f, 0.334f);
            glVertex2f(0.208f, 0.322f);
            glVertex2f(0.208f, 0.314f);
            glVertex2f(0.206f, 0.413f);
            glVertex2f(0.206f, 0.413f);
            glVertex2f(0.213f, 0.413f);
            glVertex2f(0.220f, 0.413f);
            glVertex2f(0.224f, 0.385f);
            glVertex2f(0.224f, 0.377f);
            glVertex2f(0.215f, 0.369f);
            glEnd();
            glBegin(GL_POLYGON);
            glColor3ub(230,230,230);
            glVertex2f(0.371f, 0.096f);
            glVertex2f(0.373f, 0.14f);
            glVertex2f(0.373f, 0.144f);
            glVertex2f(0.371f, 0.156f);
            glVertex2f(0.371f, 0.16f);
            glVertex2f(0.371f, 0.136f);
            glVertex2f(0.371f, 0.1f);
            glVertex2f(0.371f, 0.065f);
            glVertex2f(0.371f, 0.057f);
            glVertex2f(0.371f, 0.033f);
            glVertex2f(0.371f, 0.029f);
            glVertex2f(0.371f, 0.061f);
            glVertex2f(0.371f, 0.065f);
            glVertex2f(0.371f, 0.081f);
            glEnd();
            glBegin(GL_POLYGON);
            glColor3ub(230,230,230);
            glVertex2f(0.562f, 0.037f);
            glVertex2f(0.562f, 0.053f);
            glVertex2f(0.555f, 0.077f);
            glVertex2f(0.555f, 0.077f);
            glVertex2f(0.560f, 0.096f);
            glVertex2f(0.566f, 0.096f);
            glVertex2f(0.568f, 0.045f);
            glVertex2f(0.571f, 0.013f);
            glVertex2f(0.571f, -0.022f);
            glVertex2f(0.557f, -0.014f);
            glVertex2f(0.557f, -0.014f);
            glVertex2f(0.564f, -0.006f);
            glVertex2f(0.562f, -0.002f);
            glEnd();
            glBegin(GL_POLYGON);
            glColor3ub(230,230,230);
            glVertex2f(0.748f, -0.03f);
            glVertex2f(0.748f, 0.002f);
            glVertex2f(0.748f, 0.017f);
            glVertex2f(0.748f, 0.037f);
            glVertex2f(0.748f, 0.041f);
            glVertex2f(0.751f, 0.045f);
            glVertex2f(0.751f, 0.025f);
            glVertex2f(0.753f, -0.01f);
            glVertex2f(0.760f, -0.042f);
            glVertex2f(0.760f, -0.077f);
            glVertex2f(0.755f, -0.089f);
            glVertex2f(0.755f, -0.093f);
            glVertex2f(0.751f, -0.081f);
            glVertex2f(0.748f, -0.066f);
            glEnd();
            glBegin(GL_POLYGON);
            glColor3ub(230,230,230);
            glVertex2f(-0.267f, 0.338f);
            glVertex2f(-0.267f, 0.357f);
            glVertex2f(-0.276f, 0.397f);
            glVertex2f(-0.276f, 0.401f);
            glVertex2f(-0.272f, 0.401f);
            glVertex2f(-0.272f, 0.401f);
            glVertex2f(-0.269f, 0.409f);
            glVertex2f(-0.267f, 0.413f);
            glVertex2f(-0.265f, 0.381f);
            glVertex2f(-0.260f, 0.326f);
            glVertex2f(-0.263f, 0.298f);
            glVertex2f(-0.263f, 0.27f);
            glVertex2f(-0.267f, 0.255f);
            glVertex2f(-0.267f, 0.262f);
            glVertex2f(-0.267f, 0.262f);
            glVertex2f(-0.267f, 0.302f);
            glVertex2f(-0.267f, 0.322f);
            glEnd();
            glBegin(GL_POLYGON);
            glColor3ub(230,230,230);
            glVertex2f(-0.932f, -0.157f);
            glVertex2f(-0.954f, -0.157f);
            glVertex2f(-0.965f, -0.157f);
            glVertex2f(-0.985f, -0.153f);
            glVertex2f(-1.003f, -0.157f);
            glVertex2f(-1.003f, -0.157f);
            glVertex2f(-1.003f, -0.164f);
            glVertex2f(-1.003f, -0.16f);
            glVertex2f(-0.996f, -0.16f);
            glVertex2f(-0.985f, -0.164f);
            glVertex2f(-0.965f, -0.164f);
            glVertex2f(-0.956f, -0.168f);
            glVertex2f(-0.945f, -0.168f);
            glVertex2f(-0.929f, -0.168f);
            glVertex2f(-0.914f, -0.164f);
            glVertex2f(-0.905f, -0.164f);
            glVertex2f(-0.896f, -0.164f);
            glVertex2f(-0.892f, -0.164f);
            glVertex2f(-0.887f, -0.164f);
            glVertex2f(-0.883f, -0.164f);
            glVertex2f(-0.883f, -0.164f);
            glVertex2f(-0.883f, -0.164f);
            glVertex2f(-0.878f, -0.164f);
            glVertex2f(-0.880f, -0.157f);
            glVertex2f(-0.900f, -0.153f);
            glVertex2f(-0.918f, -0.157f);
            glEnd();
            glBegin(GL_POLYGON);
            glColor3ub(230,230,230);
            glVertex2f(0.893f, -0.16f);
            glVertex2f(0.853f, -0.16f);
            glVertex2f(0.824f, -0.16f);
            glVertex2f(0.795f, -0.164f);
            glVertex2f(0.786f, -0.164f);
            glVertex2f(0.773f, -0.18f);
            glVertex2f(0.768f, -0.176f);
            glVertex2f(0.766f, -0.176f);
            glVertex2f(0.795f, -0.172f);
            glVertex2f(0.831f, -0.172f);
            glVertex2f(0.855f, -0.172f);
            glVertex2f(0.895f, -0.172f);
            glVertex2f(0.915f, -0.172f);
            glVertex2f(0.942f, -0.172f);
            glVertex2f(0.942f, -0.164f);
            glVertex2f(0.942f, -0.157f);
            glVertex2f(0.966f, -0.157f);
            glVertex2f(0.980f, -0.157f);
            glVertex2f(0.984f, -0.157f);
            glVertex2f(0.988f, -0.157f);
            glVertex2f(0.946f, -0.157f);
            glVertex2f(0.915f, -0.164f);
            glEnd();
            glBegin(GL_POLYGON);
            glColor3ub(230,230,230);
            glVertex2f(0.208f, 0.338f);
            glVertex2f(0.208f, 0.294f);
            glVertex2f(0.208f, 0.278f);
            glVertex2f(0.213f, 0.255f);
            glVertex2f(0.213f, 0.247f);
            glVertex2f(0.213f, 0.314f);
            glVertex2f(0.213f, 0.353f);
            glVertex2f(0.213f, 0.373f);
            glVertex2f(0.213f, 0.373f);
            glVertex2f(0.213f, 0.361f);
            glVertex2f(0.213f, 0.365f);
            glVertex2f(0.206f, 0.377f);
            glEnd();
            glPopMatrix();
    }
}

void CloudSet_4(){

if(snow_3==false)
{




glPushMatrix();
glScalef(2.2,2.2,0);
glTranslatef(0,-10,0);
    glPushMatrix();
    glScalef(0.9,0.9,1);
    glTranslatef( 1+cloudX,12,0);
    Cloud(1,6.5 ,14);
    Cloud(1,8 ,14);
    Cloud(1, 9.5,14);
    glPopMatrix();

    glPushMatrix();
    glScalef(0.6,0.6,1);
    glTranslatef( 12+cloudX,14,0);
    Cloud(1,6.5 ,14);
    Cloud(1,8 ,14);
    Cloud(1, 9.5,14);
    glPopMatrix();


    glPushMatrix();
    glScalef(0.6,0.6,1);
    glTranslatef( 24+cloudX,10,0);
    Cloud(1,6.5 ,14);
    Cloud(1,8 ,14);
    Cloud(1, 9.5,14);
    glPopMatrix();

    glPushMatrix();
    glScalef(0.6,0.6,1);
    glTranslatef( 36+cloudX,12,0);
    Cloud(1,6.5 ,14);
    Cloud(1,8 ,14);
    Cloud(1, 9.5,14);
    glPopMatrix();
    glPopMatrix();
}

}

void sun_3(float radius, float cX, float cY)
{
    if(isDayScene==true)
    {


    glPushMatrix();
    glScalef(1,1,0);
    glTranslatef(0,10,0);
   glBegin(GL_POLYGON);

    for(int i=0;i<200;i++)
        {
            glColor3ub(213, 124, 61 );
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=radius;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+cX,y+cY);
        }

        glEnd();
        glPopMatrix();
    }
}

void sun_3_back(float radius, float cX, float cY)
{
    glPushMatrix();
    glScalef(1,1,0);
    glTranslatef(0,10,0);
   glBegin(GL_POLYGON);

    for(int i=0;i<200;i++)
        {
            glColor3ub(225, 168, 128  );
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=radius;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+cX,y+cY);
        }

        glEnd();
        glPopMatrix();
}

void moon_3(float radius, float cX, float cY)
{
    if(isDayScene==false)
    {


    glPushMatrix();
    glScalef(1,1,0);
    glTranslatef(0,15,0);
   glBegin(GL_POLYGON);

    for(int i=0;i<200;i++)
        {
            //glColor3ub(213, 124, 61 );
            set_color("moon_3");
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=radius;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+cX,y+cY);
        }

        glEnd();
        glPopMatrix();
    }
}

void keyboard_raf(unsigned char key, int x, int y)
{
    switch (key) {
         case 'a':
                up_1 =true;
            break;
        case 'A':
                down_1=true;
            break;

        case 'b':
                up_2=true;

            break;

        case 'B':
                down_2=true;
            break;

        case 'c':
                up_3=true;
            break;

        case 'C':
                down_3=true;
            break;

        case 'd':

                up_4=true;

            break;

        case 'D':
                down_4=true;
            break;

        case 'e':

                up_5=true;
            break;

        case 'E':

                down_5=true;
            break;

        case 'f':

                up_6=true;
            break;

        case 'F':

                down_6=true;
            break;

        case 'g':

                up_7=true;
            break;

        case 'G':

                down_7=true;
            break;


        case 'h':

                up_8=true;
            break;

        case 'H':

                down_8=true;
            break;

        case 's':
            if(move_gate_1 == -2.25)
                move_ship1=true;

            if(move_water_1 == 2 && move_gate_2==-3)
                move_ship2=true;

            if(move_water_2 == 2 && move_gate_3==-4.5)
                move_ship3=true;

            if(move_water_3 == 2 && move_gate_4==-5.5)
                move_ship4=true;

            if(move_gate_5 == -5.5)
                move_ship5 = true;

            if(move_gate_6 < -2.95)
                move_ship6=true;

            if(move_gate_7 == -3.5)
                move_ship7=true;

            if(move_gate_8 == -3)
                move_ship8 = true;

            break;
     /* case 'l':
             if(move_gate_1==-2.25 ||move_gate_2==-3|| move_gate_3==-4.5||move_gate_4==-5.5|| move_gate_5==-5.5||move_gate_6==-2.95||move_gate_7==-3.5||move_gate_8==-3)
            {
                 move_ship_x +=.15;
            }
            break;*/

        case '1':
             if(move_ship_x==7 && move_gate_1!=-2.25)
             canal_1=true;

            break;


        case '2':

            if(move_water_1>=2&& move_ship_x==11 && move_gate_2!=-3)
            canal_2=true;

            break;

        case '3':
            if(move_water_2>=2&&move_ship_x==18 && move_gate_3!=-4.5)
            canal_3=true;
            break;

        case '5':

           if(move_ship_x==38&& move_gate_5!=-5.5)
            canal_5=true;
            break;

        case '6':
            if(move_water_5<=-2&& move_gate_6!=-2.95)
            canal_6=true;
            break;

        case '7':
            if(move_water_6<=-2 && move_gate_7!=-3.95)
            canal_7=true;
            break;


        case 'm':
            isDayScene=true;
            break;
        case'n':
            isDayScene=false;
            break;

        case 'x':
            snow_3 = true;
            break;
        case'X':
            snow_3=false;
            break;



//----------------------------------------------------------------------------------------------------------------------------------

        // Emon's

        case 'p':

                    if(moveY <= -2.5){
                        if(moveXh == movecX){
                            pick = true;
                        }
                    }
        break;

        case 'r':
                    if(movecY <= 0.5){
                        pick = false;
                    }

        break;

        case 'w':

                    ship_start = true;

        break;

        case 'q':

                    ship_start = false;
        break;


        case 't':

                    truckStart = true;
        break;

        case 'y':

                    truckStart = false;
        break;


    }

    glutPostRedisplay();  // Trigger a redraw to update the display
}

void display4() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);



	sky();
	//sun_3_back(2.8,15,0);
	sun_3(2.5,15,0);
	CloudSet_4();


	mountain_back();
    mountain_front();


    snows_3();


	sidewater();
	ground_3();
	rocks_3();


	sewage_canal_1();
	sewage_canal_2();
	sewage_canal_3();
	sewage_canal_4();
	sewage_canal_5();
	sewage_canal_6();
	sewage_canal_7();


	ship_3();




	FIRST_GATE();
	SECOND_GATE();
	THIRD_GATE();
	fourth_gate();
	fifth_gate();
	sixth_gate();
	seventh_gate();
	eight_gate();

	snowstorm_snow();
	gate_snow();

	moon_3(2.5,-20,0);



	//drain();

    glFlush();  // Render now
}



//-----------------------------------------------------------Scenario 4-----------------------------------------------------------


void display() {

    if (currentDisplay == 1) {

        glClear(GL_COLOR_BUFFER_BIT);
        glMatrixMode(GL_PROJECTION);
        glLoadIdentity();
        gluOrtho2D(0,32,0,18);
        display1();
        glMatrixMode(GL_MODELVIEW);
        glLoadIdentity();
        glutSwapBuffers();


    } else if (currentDisplay == 2) {
        glClear(GL_COLOR_BUFFER_BIT);
        glMatrixMode(GL_PROJECTION);
        glLoadIdentity();
        gluOrtho2D(-41,41,-25,30);
        display2();
        glMatrixMode(GL_MODELVIEW);
        glLoadIdentity();
        glutSwapBuffers();

    }else if (currentDisplay == 3) {
        glClear(GL_COLOR_BUFFER_BIT);
        glMatrixMode(GL_PROJECTION);
        glLoadIdentity();
        gluOrtho2D(0,32,0,18);
        display3();
        glMatrixMode(GL_MODELVIEW);
        glLoadIdentity();
        glutSwapBuffers();

    }

    else if(currentDisplay == 4)
    {
        glClear(GL_COLOR_BUFFER_BIT);
        glMatrixMode(GL_PROJECTION);
        glLoadIdentity();
        gluOrtho2D(-32,31,-17,18);
        display4();
        glMatrixMode(GL_MODELVIEW);
        glLoadIdentity();
        glutSwapBuffers();

    }


}



int main(int argc, char** argv) {

    glutInit(&argc, argv);
    glutInitWindowSize(1920,1080);
    glutCreateWindow("PROJECT");
    glutDisplayFunc(display);


    glutSpecialFunc(Cranekeyboard);
    glutTimerFunc(20, shipAnimation,0);
    glutTimerFunc(20, CloudMovement, 0);
    glutTimerFunc(20, truckMovement, 0);

    glutTimerFunc(20, shipAnimation2, 0);
    glutTimerFunc(20, shipAnimation3, 0);

    // Scenario 2

    glutTimerFunc(0,update,0);

    // Scenario 4

    glutKeyboardFunc(keyboard_raf);

	//gate 1
    glutTimerFunc(20, upgate1_down, 0);
    glutTimerFunc(20, upgate1_up, 0);


    //gate 2

    glutTimerFunc(20, upgate2_down, 0);
    glutTimerFunc(20, upgate2_up, 0);

    //gate 3

     glutTimerFunc(20, upgate3_down, 0);
     glutTimerFunc(20, upgate3_up, 0);

     //gate 4

     glutTimerFunc(20, upgate4_down, 0);
     glutTimerFunc(20, upgate4_up, 0);

     //gate 5

     glutTimerFunc(20, upgate5_down, 0);
     glutTimerFunc(20, upgate5_up, 0);

     //gate 6

     glutTimerFunc(20, upgate6_down, 0);
     glutTimerFunc(20, upgate6_up, 0);
     //gate 7

     glutTimerFunc(20, upgate7_down, 0);
     glutTimerFunc(20, upgate7_up, 0);

     //gate 8

     glutTimerFunc(20, upgate8_down, 0);
     glutTimerFunc(20, upgate8_up, 0);


     //**************************canal

     //canal 1
     glutTimerFunc(20, canal1_up, 0);
     //canal 2
     glutTimerFunc(20, canal2_up, 0);
     //canal 3
     glutTimerFunc(20, canal3_up, 0);
     //canal 5
     glutTimerFunc(20, canal5_up, 0);
     //canal 6
     glutTimerFunc(20, canal6_up, 0);
     //canal 7
     glutTimerFunc(20, canal7_up, 0);

    //ship moving
     glutTimerFunc(25, ship1, 0);
     glutTimerFunc(25, ship2, 0);
     glutTimerFunc(25, ship3, 0);
     glutTimerFunc(25, ship4, 0);
     glutTimerFunc(25, ship5, 0);
     glutTimerFunc(25, ship6, 0);
     glutTimerFunc(25, ship7, 0);
     glutTimerFunc(25, ship8, 0);

    glutMainLoop();
    return 0;
}


