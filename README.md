<h2 align="center">Proiect la disciplina
<br>Metode Avansate de Programare</br></h2>
Realizat: Nicuța Valeria, INFO an 2
<br>Cadrul didactic: Bocan Valer</br>

<br>Tema proiect: Se dă un număr natural N. Să se determine dacă acesta se poate descompune în sumă de două pătrate diferite de zero.
Limbaj de programare utilizat: C++</br>

Proiectul a fost realizat în cadrul platformei Visual Studio Code, unde am scris și am testat funcționalitatea programului. Fișierele sursă ale programului sunt
încarcate pe site-ul GitHub, alături de documentație, iar pentru compilarea și rularea proiectului respectiv am utilizat platforma Docker.

***Docker*** este o platformă deschisă pentru dezvoltarea, livrarea și rularea aplicațiilor. Acesta permite separarea aplicațiilor de infrastructură cu scopul de a crea o
livrare rapidă de software. Profitând de metodologiile Docker pentru expedierea, testarea și implementarea rapidă a codului, se reduce semnificativ întarzierea dintre
scrierea codului și rularea acestuia în producție. 

Docker funcționează prin împachetarea, furnizarea și rularea containerelor. Tehnologia containerului este disponibilă prin sistemul de operare: un container
împacheteaza serviciul sau funcția aplicației cu toate bibliotecile, fișierele de configurare, dependențele si alte părți și parametri necesari pentru funcționare.
Fiecare container partajează serviciile unui sistem de operare subiacent. Imaginile Docker conțin toate dependențele necesare pentru a executa codul în interiorul unui
container, astfel încat containerele care se deplasează între mediile Docker cu același sistem de operare funcționează fără modificări.

Dat fiind faptul că sistemul de containere Docker este extrem de popular în industria programării, am realizat acest proiect cu scopul de a mă obișnui cu construirea
containerelor, compilarea și rularea programelor scrise utilizând această platformă. M-a motivat faptul că, în timpul prezent, un număr considerabil de companii
folosesc mediul de dezvoltare Docker, ceea ce îmi oferă un avantaj în momentul angajării la un job.

Programul a fost realizat în limbajul C++ și testează dacă un număr natural poate fi suma a două numere pătrate diferite de 0. Testarea se efectuează printr-o funcție
vidă, care primește parametri din funcția main a programului și utilizează două bucle for ce vor incrementa valorile contoarelor i si j, atât timp cât acestea au
valori mai mici ca numărul cercetat, le va ridica la pătrat și verifică dacă suma acestora este egala cu numărul dat. Un alt contor denumit ok, inițial setat la 0, va
primi valoarea 1 dacă s-a găsit suma a două patrate. În caz contrar, ok ramâne pe 0 și compilatorul ne anunță că rezultatele nu au fost găsite.

Ca exemple de rulare am utilizat două numere: 1289 și 3000. În primul caz programul primește numărul 1289 ca parametru și parcurge pașii din funcția ”verificare”
pentru a ne afișa numerele 8 și 64 care, ridicate la pătrat și însumate, rezultă în numărul 1289. În al doilea caz programul va primi numărul 3000. În urma
verificării, programul nu va găsi pătrate ce formează numărul dat, iar compilatorul ne afișeaza un mesaj care ne comunică faptul că numărul dat nu constituie suma a
două pătrate.
#                                                                            Bibliografie
* https://docs.docker.com/get-started/overview/
* https://www.techtarget.com/searchitoperations/definition/Docker
* https://www.boxpiper.com/posts/what-is-docker   
* https://adding.info/TwoSquareNumbersMake/What-Two-Square-Numbers-Make-Calculator.html  
