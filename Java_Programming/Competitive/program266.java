import java.util.Scanner;

class program266
{
    public static int HospitalBill(int iDays,
                                    int iConsultaionFee,
                                    int iRoomCharges,
                                    int iIcuChar ,
                                    int iMedicineBill,
                                    int iBillAmt ,
                                    String sWardType ,   
                                    String sInsured )
    {
        if(iDays < 0 || iConsultaionFee < 0 || iRoomCharges < 0 || iIcuChar < 0 || iMedicineBill < 0 || iBillAmt < 0)
        {
            return -1;
        }

        if(sWardType.equals("ICU") == false && sWardType.equals("Normal") == false && sInsured.equals("Yes") == false && sInsured.equals("No") == false )
        {
            return -1;
        }

        iBillAmt = iConsultaionFee + iMedicineBill + (iDays * iRoomCharges);

        if(sWardType.equals("ICU"))
        {
            iBillAmt = iBillAmt + iIcuChar;
        }

        if(sInsured.equals("Yes"))
        {
            if((iBillAmt * 70 / 100) < 50000)
            {
                iBillAmt = iBillAmt - (iBillAmt * 70 / 100);
            }
            else
            {
                iBillAmt = iBillAmt - 50000;
            }
        }

        return iBillAmt;
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        int iDays = 0;
        int iConsultaionFee = 0;
        int iRoomCharges = 0;
        int iIcuChar = 0;
        int iMedicineBill = 0;
        int iBillAmt = 0;
        String sWardType = null;    
        String sInsured = null;

        int iRet = 0;

        System.out.println("Enter Number of Days :");
        iDays = sobj.nextInt();

        System.out.println("Enter Consulatation Fees :");
        iConsultaionFee = sobj.nextInt();

        System.out.println("Enter Room Charges :");
        iRoomCharges = sobj.nextInt();

        System.out.println("Enter ICU charges :");
        iIcuChar = sobj.nextInt();

        System.out.println("Enter Medicine Bill :");
        iMedicineBill = sobj.nextInt();

        System.out.println("Enter Ward Type(Normal/ICU):");
        sWardType = sobj.next();

        System.out.println("Insured (Yes/No) :");
        sInsured = sobj.next();

        iRet = HospitalBill(iDays, iConsultaionFee, iRoomCharges, iIcuChar, iMedicineBill, iBillAmt, sWardType, sInsured);

        if(iRet == -1)
        {
            System.out.println("Invalid Input");
        }
        else
        {
            System.out.println("Final Pay : "+iRet);
        }
    }
}