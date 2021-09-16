**Taakgroep: Expanding projects**

# Taak: Visualisation

Wanneer je de voorgaande taken goed hebt uitgevoerd heb je de basis gelegd voor een race simulator. De competitie heeft een aantal deelnemers met voertuigen en een aantal racebanen om te racen. In deze taak ga je een begin maken om de eerste race te starten en dit te visualiseren.

De visualisatie ga je maken in het console project in je solution. Deze visualisatie zal dus plaatsvinden op de console met behulp van (gekleurde) tekst.

## Aanpak

- Klik op het console project in de `Solution explorer`. Wanneer je tijdens het aanmaken van de `solution` gekozen hebt voor een `console application` is de naam van het project hetzelfde als die van de `solution`.

- Open vanuit de `Solution Explorer` het bestand `Program.cs`. In de code zie je de static methode `Main(string[] args)`. Net zoals bij JAVA is dit het startpunt van de applicatie binnen het project.

Als je alle voorgaande taken goed hebt uitgevoerd staat er nu een `Race` klaar. Voor nu ga je alleen de naam van de `Track` tonen op de `Console`. Breid de static methode `Main(string[] args)` met de volgende stappen:

- Roep de `Initialize` methode aan van de static class `Data`. Let op dat de referenties tussen de projecten goed moet staan en een using toegevoegd moet worden aan `Program.cs`.

- Roep de methode `NextRace` aan van de static class `Data`.

- Print op de `console` de naam van de `Track` van de `CurrentRace`.

Het is nu tijd om eindelijk wat op beeld te krijgen.

- Klik nu met je rechtermuisknop op de naam van het console project. Kies uit het context menu `Set as Startup Project`. Start het project nu met `F5` en kijk wat er gebeurt.

Als je goed oplet zie je heel snel een console verschijnen en meteen weer afsluiten. Uiteraard is dit niet de bedoeling, zeker niet wanneer je een race wilt visualiseren.

- Breid de static methode `Main(string[] args)` verder uit met de onderstaande code:

```csharp
  for (; ; )
  {
    Thread.Sleep(100);
  }
```

Met de bovenstaande code wordt een `game loop` gemaakt. De console blijft nu net zolang staat totdat er op het kruisje wordt gedrukt.

- Druk nogmaals op `F5`. Als het goed is staat nu de naam van de eerste `Track` op de queue in de competitie.

- Wanneer dit gelukt is laat de uitwerking aan je docent zien om de opdracht af te laten tekenen.

## Ondersteunende informatie

Meer informatie over de methode `main` kan je [hier](https://docs.microsoft.com/en-us/dotnet/csharp/programming-guide/main-and-command-args/) lezen.

Tips en uitleg over het gebruik van de `Console` kan je [hier](https://docs.microsoft.com/en-us/dotnet/api/system.console) vinden.
