// Write a program to check whether the number is perfect number or not

class Logic
{
    void CheckPerfect(int iNo)
    {
        int iCnt = 0,iSum = 0;

        for(iCnt = 1 ; iCnt <= (iNo/2); iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                iSum = iSum + iCnt;
            }
        }

        if(iNo == iSum)
        {
            System.out.println("Perfect Number");
        }
        else
        {
            System.out.println("Not a Perfect Number");
        }
    }
}

class program93
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.CheckPerfect(6);
    }
}