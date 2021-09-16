**Taakgroep: Expanding projects**

# Taak: Creating a race

De deelnemers staan te popelen om te gaan racen. Omdat de `responsibility` van de property `Competition` in de static class `Data` is om alle gegevens van de competitie te bevatten moet er voor een race een nieuwe class aangemaakt worden. De `responsibility` van deze class is om een race te simuleren. Tijdens de simulatie moeten er een aantal gegevens opgeslagen worden. Denk aan de `Track` waar de race zich plaats vindt of aan de positie van de deelnemers op de `Track`.

## Aanpak

- Maak in het controller project een klasse `Race` aan.

- Geef deze klasse de volgende properties: `Track` van het type `Track`, `Participants` van het type `List<IParticipant>` en `StartTime` van het type `DateTime`

Om de race onvoorspelbaar te maken ga je gebruik maken van een `Randomizer`.

- Geef de klasse `Race` een private attribuut `_random` van het type `Random`.

De laatste informatie die nodig is zijn de posities van de deelnemers op de track. Dit is een belangrijk onderdeel waarbij je rekening moet houden met een aantal regels. De belangrijkste regel is dat er maximaal twee deelnemers op 1 `Section` mogen zijn; links en rechts. Daarnaast moet bijgehouden wat de positie van de deelnemer op de `Section` is.

We gaan hiervoor gebruik maken van een `Dictionary`. Zoals je kan lezen bij de ondersteunende informatie bevat een `Dictionary` een `key` en een `value`. De `key` wordt een `Section` waardoor elke `Section` maar 1x mag voorkomen in de lijst. De `value` moet verschillende gegevens bevatten dat aansluit bij de uitleg hierboven. Hiervoor gaan we de klasse `SectionData` gebruiken die je tijdens een vorige taak hebt gemaakt.

- Gebruik de onderstaande code om de klasse `Race` de private variable `_positions` te geven.

```csharp
  private Dictionary<Section, SectionData> _positions
```

Doordat `_positions` private is heb je meer controle over de lijst. Je gaat nu een Getter maken voor `_positions`. Normale manier van `{get;set;}` gaat hier niet werken omdat je dan het `object` `_positions` beïnvloed en niet de inhoud van de lijst.

- Maak de methode `GetSectionData` waarbij een `Section` als parameter meegegeven wordt

- Probeer de `value` uit de lijst `_positions` op te halen gegeven de `Section` parameter.

- In het geval dat er geen `value` is gegeven de `Section` parameter voeg dan een nieuwe `SectionData` object toe aan de lijst met de `Section` parameter als `key`.

- Retourneer de gevonden of nieuwe de `SectionData`

Een Setter is niet nodig doordat de Getter al een nieuwe `SectionData` aanmaakt wanneer nodig.

Nu alle properties gedeclareerd zijn moeten ze nog geïnitialiseerd worden.

- Geef de klasse `Race` een constructor waarbij alle properties geïnitialiseerd worden. Deze constructor heeft als `parameters`: `Track` en `List<IParticipant>`. Gebruik de `parameters` om de waarden van de properties `Track` en `Participants` te zetten.

De private attribuut `_random` kan je initialiseren door `_random = new Random()` alleen is die dan niet erg random. Dit kan je terug lezen bij de ondersteunende informatie.
Dit kan ondervangen worden door de private attribuut `_random` te initialiseren door `_random = new Random(DateTime.Now.Millisecond)`.

Om de race spannend te maken gaan je de waarden van de apparatuur bij de deelnemers wat aanpassen. Dit maakt elke race wat onvoorspelbaarder.

- Breid de klasse `Race` uit met een methode `RandomizeEquipment`. `Itereer` over alle deelnemers in de competitie. Geef de properties `Quality` en `Performance` van de property `Equipment` een willekeurige waarde.

## Ondersteunende informatie

Voor meer informatie over de `Randomizer` kan je [hier](https://docs.microsoft.com/en-us/dotnet/api/system.random) terecht.

Meer informatie over `Dictionaries` kan je [hier](https://docs.microsoft.com/en-us/dotnet/api/system.collections.generic.dictionary-2) vinden.

Uitleg over `parameters` is [hier](https://docs.microsoft.com/en-us/dotnet/csharp/programming-guide/classes-and-structs/passing-parameters) te lezen.

`Itereren` over lijsten kan op verschillende manieren. Lees [dit](https://docs.microsoft.com/en-us/dotnet/csharp/programming-guide/concepts/iterators) voor meer informatie.
