#ifndef ipv6_H_
#define ipv6_H_

struct lista {
    unsigned char adresZrodlowy[16];
    unsigned char adresDocelowy[16];
    unsigned char limitPrzeskokow[1];
    unsigned char nastepnyNaglowek[1];
    unsigned char dlugoscDanych[2];
    unsigned char etykietaPrzeplywu[3];
    unsigned char klasaRuchu[1];
    unsigned char wersja[1];

};
#endif
