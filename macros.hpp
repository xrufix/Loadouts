#define QUOTE(var1) #var1

#define ARR_1(var1) var1
#define ARR_2(var1,var2) var1, var2
#define ARR_3(var1,var2,var3) var1, var2, var3
#define ARR_4(var1,var2,var3,var4) var1, var2, var3, var4
#define ARR_5(var1,var2,var3,var4,var5) var1, var2, var3, var4, var5
#define ARR_6(var1,var2,var3,var4,var5,var6) var1, var2, var3, var4, var5, var6
#define ARR_7(var1,var2,var3,var4,var5,var6,var7) var1, var2, var3, var4, var5, var6, var7
#define ARR_8(var1,var2,var3,var4,var5,var6,var7,var8) var1, var2, var3, var4, var5, var6, var7, var8

#define WEAPON(var1,var2,var3,var4) {ARR_4(var1,var2,var3,var4)}

#define ASSIGN_MEDICCLASS(var1) QUOTE((_this select 0) setVariable ['ACE_medical_medicClass', var1, true];)
#define ASSIGN_REPAIRCLASS(var1) QUOTE((_this select 0) setVariable ['ACE_isEngineer', var1, true];)
#define ASSIGN_EOD QUOTE((_this select 0) setVariable ['ACE_isEOD', true, true];)
#define ACE_SETCAPTIVE QUOTE((_this select 0) setCaptive true;)