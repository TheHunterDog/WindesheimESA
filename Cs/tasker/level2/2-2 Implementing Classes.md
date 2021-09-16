**Taakgroep: Expanding projects**

# Taak: implementeren model

In de vorige taak heb je alle interfaces aangemaakt in het 'model' project.
Tijdens deze taak ga alle klassen aanmaken en van de interfaces gebruik maken.

## Aanpak

Voor elke klasse in het klassendiagram doorloop je dezelfde stappen. Let op: de klassen `Driver` en `Car` mag je zelf vervangen met andere namen passend bij jouw type race.

- Klik op de `model` project in de `Solution explorer`

- Ga via het contextmenu (klik met rechter muisknop) naar `Add > Class...`

- Selecteer `Class` en geef bij `Name` de naam van de klasse

- Implementeer de properties zoals aangegeven in het klassendiagram. Kijk bij de ondersteunende informatie wanneer je bij een bepaalde type property niet uitkomt.

- Wanneer van toepassing, implementeer de aangegeven interface(s)

- Gebruik een `constructor` om de properties te initialiseren.

## Ondersteunende informatie

Visual Studio biedt veel ondersteuning tijdens het programmeren.
Op deze [pagina](https://docs.microsoft.com/en-us/visualstudio/ide/reference/implement-interface?view=vs-2019) wordt uitgelegd hoe Visual Studio kan helpen bij het implementeren van interfaces.

Elke klasse heeft een `constructor` zelfs als je er zelf geen maakt. De `constructor` heeft als doel om de klasse een start te geven. Meer informatie over `constructors` kan je [hier](https://docs.microsoft.com/en-us/dotnet/csharp/programming-guide/classes-and-structs/constructors) lezen.

De `List<Participants>` is een generic list. Meer informatie hierover kan je [hier](https://docs.microsoft.com/en-us/dotnet/api/system.collections.generic.list-1) lezen

De `Queue<Track>` is een generic queue. Meer informatie hierover kan je [hier](https://www.tutorialsteacher.com/csharp/csharp-queue) lezen

De `LinkedList<Section>` Lijkt veel op een generic list alleen staat de volgorde van de items vast. Voor meer informatie kan je [hier](https://www.geeksforgeeks.org/linked-list-implementation-in-c-sharp/) gaan.

De `[]` staat voor een `array` bij de constructor in klasse `Track`. Voor meer informatie over `array` is te vinden op [deze](https://docs.microsoft.com/en-us/dotnet/csharp/programming-guide/arrays/) pagina.
