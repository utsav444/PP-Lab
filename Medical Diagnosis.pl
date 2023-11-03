symptom(fever, flu).
symptom(cough, flu).
symptom(sore_throat, flu).
symptom(headache, flu).
symptom(runny_nose, cold).
symptom(sneezing, cold).
symptom(sore_throat, cold).
symptom(fatigue, common_cold).
symptom(numbness, covid_19).
symptom(high_fever, covid_19).
symptom(shortness_of_breath, covid_19).

treatment(flu, rest).
treatment(cold, fluids).
treatment(common_cold, hot_towel).
treatment(covid_19, isolation).


diagnose_illness(Patient, Illness) :- has_symptom(Patient, Symptom),symptom(Symptom, Illness).

suggest_treatment(Patient, Treatment) :- diagnose_illness(Patient, Illness),treatment(Illness, Treatment).


has_symptom(john, fever).
has_symptom(john, cough).
has_symptom(john, headache).
has_symptom(mary, fatigue).