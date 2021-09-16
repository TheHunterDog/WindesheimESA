**Taakgroep: Expanding projects**

# Taak: Starting a race

In de voorgaande taak heb je de klasse `Race` aangemaakt in het `controller` project. In deze taak ga je een instantie maken van de klasse `Race` waarbij je eerstvolgende `Track` uit de queue haalt en gebruikt. Om de race spannend te maken ga je vervolgens de gebruikte apparatuur van de deelnemers willekeurige waarden gegeven.

## Aanpak

Om een race mogelijk te maken moet er een `Track` beschikbaar zijn in de `Competition`.

- In de klasse `Competition` heb je al een methode `NextTrack` aangemaakt. Implementeer deze methode waarbij de methode de eerst volgende `Track` van de queue haalt en deze retourneert. Wanneer de queue leeg is retourneer dan de waarde `null`.

Nu je de mogelijkheid hebt om een `Track` op te halen kunnen we een instantie maken van de klasse `Race`. Voordat we dit doen heb je een plek nodig om de `Race` te declareren.

- Geef de klasse `Data` een extra property `CurrentRace` van het type `Race`.

- Breidt de klasse `Data` uit met een nieuwe methode `NextRace`. Deze methode gebruikt de methode `NextTrack` bij de property `Competition`. Wanneer de geretourneerde waarde niet `null` is initialiseer dan `CurrentRace` waarbij de `Track` meegegeven wordt als parameter aan de constructor.

## Ondersteunende informatie

Meer weten over de `return` statement? Lees dan [dit](https://docs.microsoft.com/en-us/dotnet/csharp/language-reference/keywords/return)

Informatie over de `null` keyword kan je [hier](https://docs.microsoft.com/en-us/dotnet/csharp/language-reference/keywords/null) vinden
