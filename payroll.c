#include<stdio.h>
main(){
	
	/*initialize variables*/
	char fname[10];
    char sname[10];
    char emp_no[10];
    int jgroup;
    int bpay, nhif, nssf, paye, loans, allowances, deductions, npay;
    
	printf("Employee First_Name: ");
    scanf("%s",&fname);

    printf("Employee Last_Name:  ");
    scanf("%s",&sname);

    printf("Employee_NO: ");
    scanf("%s",&emp_no);
    
    printf("Enter job group: ");
    scanf("%d", &jgroup);
    printf("Enter Basic salary: ");
    scanf("%d", &bpay);
    printf("Enter nhif deductions: ");
    scanf("%d", &nhif);
    printf("Enter nssf deductions: ");
    scanf("%d", &nssf);
    printf("Enter paye deduction: ");
    scanf("%d", &paye);
    printf("Enter loan deductions: ");
    scanf("%d", &loans); 
    
    deductions = (nhif+nssf+paye+loans);
    
    /*allocate allowance depemding on job groups*/
 	switch(jgroup)
 	{
 	case 1:
 		allowances = 95000;
 		break;
	case 2:
		allowances = 63000;
		break;
	case 3:
		allowances = 45000;
		break;
	case 4: case 5: case 6: case 7: case 8: case9:
		allowances =30000;
		break;
	}
	
	npay = (bpay+allowances - deductions);/*get net salary*/
	printf("_______________________________________________________________________\n");
	printf("**********************KELCHE INC.*************************************\n");
	printf("-------------------------PaySlip--------------------------------------\n\n\n");
	printf("%s %s", fname, sname);
	printf("%S ", emp_no);
	printf("Basic salary =>                 %d\n", bpay);
	printf("Allowances =>                   %d\n", allowances);
	printf("                   DEDUCTIONS\n"            );
	printf("NHIF =>                        %d\n", nhif);
	printf("NSSF =>                        %d\n", nssf);
	printf("PAYE =>                        %d\n", paye);
	printf("LOANS =>                       %d\n", loans);
	printf("TOTAL DEDUCTIONS =>            %d\n", deductions);
	printf("NET SALARY =>                  %d\n", npay);
	
}
