uchar code FFW[8] = {0x01,0x03,0x02,0x06,0x04,0x0c,0x08,0x09};			//逆时针转动数组
uchar code REV[8] = {0xf9,0xf8,0xfc,0xf4,0xf6,0xf2,0xf3,0xf1};			//顺时针转动数组
/****************转动延迟函数**********/
void delayB(uint t)
{                           
	uchar k;
	while(t--)
	for(k = 0; k < 125; k++);
}
/************************电机正转****************************/
void motor_ffw()
{ 
	uchar i;
	for (i = 0; i < 8; i++)												//一个周期转30度
	{
		P2 = FFW[i];													//取数据
		delayB(100);													//调节转速
    }
}
/************************电机反转****************************/
void motor_rev()
{
 	uchar i;
	for (i = 0; i < 8; i++)												//一个周期转30度
    {
       	P2 = REV[i];													//取数据
        delayB(100);													//调节转速
    }
}