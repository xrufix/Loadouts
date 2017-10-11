
#define ISENGINEER(a) (_this select 0) setVariable [ARR_3(QQUOTE(ACE_isEngineer),a,true)];
#define ISEOD(a) (_this select 0) setVariable [ARR_3(QQUOTE(ACE_isEOD),a,true)];
#define ISMEDIC(a) (_this select 0) setVariable [ARR_3(QQUOTE(ACE_medical_medicClass), a, true)];

#define NOTRAITS QUOTE(ISENGINEER(false) ISEOD(false) ISMEDIC(0))

#define ISPROTECTED(a) (_this select 0) setCaptive true;