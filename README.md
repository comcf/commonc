# C# to Common C
_© 2022 Daniel Giversen_

The foundation is the books __C for Dummies__ (Gookin 2020) and __C Reference Guide_ (Kernighan 1988). The goal is to help experienced C# developers transition their experience to C programming.

Derfor skal der være en dagligt opdateret, lokal _databasestub_, med kopi af disse data, der kan tilgås fra andre systemer og programmerer f.eks. i.f.t. _intranet_, _3-i-1 undersøgelse_, _MOCH_ og _kantine_.

## Databasestubben er en MS SQL-database (UCDSQL2012 > SD)
- databasen er designet i.h.t. tredje normalform under særlig hensyn til GDPR (Databeskyttelsesloven - tidl. Persondataloven)
- for at fungere optimalt med SDWS er der undgået __FOREIGN KEYS__
- der benyttes views og stored procedures

## SD Database Suite er udviklet fra bunden i C# 10/.NET 6
- er udviklet med en 3-niveauarkitektur (3 tier) i.h.t. kontemporære OOP-standarder under særlig hensyn til livscyklus, sikkerhed & holdbarhed
- er dokumenteret m.h.p. senere behov for opdatering og videreudvikling

## Suitet består af
- Konsolapplikationen __Klon Afhængighedsdata__ (CloneDependencyData)
  - kloner afhængighedsdata fra _SDWS_
  – kører én gang ved (gen)opretning af databasestub
- Konsolapplikationen __Klon Persondata__ (ClonePersonData)
  - kloner medarbejderdata fra _SDWS_
  - kører én gang ved (gen)opretning af databasestub
- Konsolapplikationen __Opdater Afhængighedsdata__ (UpdateDependencyData)
  - kloner afhængighedsdata fra _SDWS_
  – kører én gang ugentligt
- Konsolapplikationen __Opdater Persondata__ (UpdatePersonData)
  - henter medarbejderdata fra _SDWS_
  - kører én gang dagligt
- ~~Konsolapplikationen __AD-Berigelse__ (ADEnrich)~~
  - ~~beriger databasestubben med data fra _Active Directory_~~ 
  - ~~kører én gang dagligt efter opdatering~~
- Konsolapplikationen __Ansættelsesophørsadvarsel__ (XmAlert)
  - genererer en liste over brugere, der snart ophører
  - kører én gang dagligt efter opdatering
- Konsolapplikationen __Mappeoprydning__ (CleanFolders)
  - sletter forældede filer fra programmapper
  - typisk efter 30 dage
  - logfiler dog først efter 5 år
- Konsolapplikationen __Databasestuboptimering__ (DatabaseOptimize)
  - sorterer emailadresser, fjerner dubletter, beriger fra Active Directory m.v. 
  - kører én gang dagligt efter opdatering
- Konsolapplikationen __Net-API__ (NetAPI
  - ~~api til brug for intranet samt eksterne applikationer~~
  - ~~genstartes dagligt samt ved fejl~~
  - p.t. stoppet, da fejlbehæftet
- Windowsapplikationen __SD Database Access__ (SdDbAccess)
  - henter data fra ~~Net-API'et~~ _databasestubben_ i _csv_, _xml_ og _json_ format
  - til import i eksterne applikationer uden direkte implementering 

## Klargøring af program i Visual Studio
- Kompilér biblioteks- & applikationsprojekter (Sæt til _Release_ => Højreklik på _Solution_ => Klik på _Rebuild Solution_)
- Pak programmer (Højreklik hvert projekt => Klik på _Publish..._)
- Kompilér installationsprojekt (Sæt til _Release_ => Højreklik på projektet => Klik på _Rebuild_)
- Kopier installationsfiler til beskyttet fællesdrev

## Anvendelse
- __SdSuite__ installeres på __UDCSD__ (server)
- __SdDbAccess__ installeres lokalt og/eller i __Citrix__

## Planlagte/ønskede forbedringer
- Oprettelse af replikationsdatabase
  - overflødiggør _CloneDependencyData_, _ClonePersonData_, _UpdateDependencyData_ & _UpdatePersonData_
  - undgår unødige mellemled (_SDWS_ & _mumbo-jumbo_-business-applikationer)
- Optimering af programpakning
- Få Net-API'et til at virke

## Litteratur
Gookin, D. (2020). C For Dummies 