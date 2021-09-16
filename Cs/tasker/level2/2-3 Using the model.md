**Taakgroep: Expanding projects**

# Taak: model gebruiken

Zoals aangegeven maak je gebruik van het MVC patroon. De model heb je in de vorige 2 taken geïmplementeerd.
Aangezien de verantwoordelijkheid van de model alleen is om gegevens te bevatten ga je nu verder met de controller.

De gegevens in de model gaan voornamelijk over een competitie met alle bijbehorende attributen.
In deze taak gaan je een klasse aanmaken welke een competitie declareert en initialiseert.

Doordat je gebruik maakt van onderdelen uit een ander project moet elke klasse een verwijzing krijgen naar het `model` project.

Punt van aandacht is dat de door jou gemaakte code testbaar moet zijn. Dit kan je doen door bij alle functies het `single responsibily` principe toe te passen.

## Aanpak

- In het `controller` project maak je de `static` klasse `Data` aan

- Bovenaan de klasse `Data` voeg een je een extra `using` toe met de namespace `Model`
Wanneer de naam `Model` rood onderstreept is dan kan het betekenen dat de referenties naar de andere projecten nog niet goed staan. Zie hiervoor level 1.
Of jij hebt gekozen voor een andere project naam voor het `model` project. In dit geval moet je de naam bij de using de juiste naam geven die je zelf hebt gekozen.

- Geef de klasse `Data` een property van het type `Competition`. Deze property moet uiteraard ook `static` zijn.

- Doordat de klasse `Data` `static` is mist de mogelijkheid van een eigen constructor. Om de property te kunnen initialiseren maak je een methode `Initialize`. In deze methode initialiseer je de property `Competition`.

Je hebt nu een static klasse waarin je alle gegevens van een competitie kan opslaan. Om gegevens toe te voegen ga je hiervoor methodes schrijven waarbij je rekening houdt met het `single responsibily` principe. Om te beginnen ga je methodes schrijven om banen en deelnemers toe te voegen aan de competitie.

- Maak een static methode, zonder parameters en returnvalue, in de klasse `data` aan die als doel heeft om `Participants` (deelnemers) toe te voegen aan de competitie.

- In de aangemaakte methode voeg je een aantal deelnemers toe aan de competitie.

- Roep de aangemaakte methode aan in de methode `Initialize`.

- Herhaal de bovenstaande 3 stappen waarbij je nu een aantal `Tracks` toevoegt aan de competitie.

## Ondersteunende informatie

De `using` statement kan verschillend worden gebruikt. De meest voorkomende variant is boven elke klasse te vinden namelijk referenties naar andere klasses en namespaces. Meer informatie kan je [hier](https://docs.microsoft.com/en-us/dotnet/csharp/language-reference/keywords/using-directive) lezen.

Verdere uitleg over `Namespaces` kan je [hier](https://docs.microsoft.com/en-us/dotnet/csharp/language-reference/keywords/namespace) lezen.

Het `single responsibility` principe is onderdeel van het [SOLID principe](https://www.c-sharpcorner.com/UploadFile/damubetha/solid-principles-in-C-Sharp/).

Verdere uitleg over `static` kan je [hier](https://docs.microsoft.com/en-us/dotnet/csharp/language-reference/keywords/static) lezen.

Uitleg en voorbeeld over hoe items toegevoegd kunnen worden aan de `generic list` kan je [hier](https://www.c-sharpcorner.com/UploadFile/mahesh/add-items-to-a-C-Sharp-list/) vinden

Uitleg en voorbeeld over hoe items toegevoegd kunnen worden aan de `generic queue` kan je [hier](https://www.tutorialsteacher.com/csharp/csharp-queue) vinden
