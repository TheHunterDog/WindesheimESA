**Taakgroep: Project Basics**

# Taak: Projecten opzetten

Met deze opdracht zet je de noodzakelijke projecten op. Elk project heeft zijn eigen verantwoordelijkheid. Bij de scheiding van verantwoordelijkheden hanteer je in dit project het `MVC pattern`.

Het 'console project' is de 'view' in het MVC patroon. Er moeten nog twee projecten aangemaakt worden in de solution.

Eerst voeg je de twee projecten toe en vervolgens geef je het 'console project' een referentie naar de toegevoegde
projecten om van de toegevoegde projecten gebruik te kunnen maken.

## Aanpak

Standaard heeft Visual Studio rechts een 'Solution Explorer'. Dit is een weergave van alle projecten in de solution en alle onderliggende bestanden binnen de projecten.
In de solution voeg je voor de controller en het model een project toe. **Deze projecten zijn van het type Class Library**. Vervolgens geef je de view project, het console project, referenties naar de andere projecten.  

- Klik op `Solution` in de `Solution explorer`

- Ga via het contextmenu (klik met rechter muisknop) naar `Add > New Project...`

- Zoek op `Class Library`

- Selecteer `Class Library (.NET Core)`. Doorloop de stappen waarbij je het project de naam 'Model' geeft.

- Repeteer voorgaande stappen, met dit verschil: geef als naam 'Controller'.

- Geef het *console project*  `referenties` naar de toegevoegde projecten. Klik op het console project.

- Ga naar de Reference Manager: `context menu > Add > Reference`. Selecteer de toegevoegde projecten en klik op 'OK'.  
  
## Ondersteunende informatie

Meer informatie over het `MVC pattern` kan je [hier](https://nl.wikipedia.org/wiki/Model-view-controller-model) vinden.

Naast een referentie naar een ander project is het mogelijk om ook [andere bronnen te refereren](https://docs.microsoft.com/en-us/visualstudio/ide/managing-references-in-a-project).
