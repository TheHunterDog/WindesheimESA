# Race Simulator

Software ontwikkeling doorloopt bijna altijd de volgende stappen: `Aanleiding` <-> `Analyse` <-> `Ontwerp` <-> `Realisatie` <-> `Testing` <-> `Implementatie`. Zoals je kan zien wijzen alle pijlen 2 kanten op. Je zult als ontwikkelaar vaak een stap terug moeten doen vanwege bijvoorbeeld nieuwe wensen of inzichten.

De module C# richt zich voornamelijk op de stappen `realisatie` en `testing`. De andere stappen zijn al voor je uitgevoerd en dienen als houvast voor jouw uitwerking van een race simulator. De informatie uit onderstaande `aanleiding` en `analyse` zal in elke level terug komen.

## Aanleiding

Om een competitie te kunnen winnen wordt er steeds vaker gebruik gemaakt van ICT middelen. Een simulator kan bijvoorbeeld voorspellingen doen over een competitie. Met deze voorspellingen kunnen teams de middelen beter en efficiënter inzetten.

Nog niet alle competities hebben een simulator. Dit is duidelijk een gat in de markt. Het doel van dit project is om een simulator voor een competitie te ontwikkelen. De simulator wordt internationaal aangeboden waarbij de koper naast de applicatie ook de sourcecode krijgt.

## Domeinanalyse

### _**Begrippen**_

Doordat de applicatie internationaal aangeboden wordt zijn de gebruikte termen en begrippen in het Engels.

| Term        | Vertaling | Uitleg |
|-------------|-----|--------|
| Competition | Competitie | Competitie |
| Participant | Deelnemer | Deelnemer in de competitie |
| Equipment   | Racemiddel | Middel gebruikt door de deelnemer om te racen, bv schoenen, auto, fiets... |
| Track       | Racebaan | Een racebaan waar de deelnemers tegen elkaar strijden |
| Section     | Sectie | Onderdeel van een racebaan bestaande uit twee stroken |

### _**Teams**_

Het kost veel geld om een raceteam te onderhouden. Daarom worden raceteams ook gebruikt als een vorm van reclame. Elke raceteam heeft daarom een eigen teamkleur passend bij de kleur van de sponsor.

Om andere teams te kunnen verslaan worden verschillende ICT middelen gebruikt. Teams kunnen zich geen fouten of vergissingen permitteren  daarom wordt er sterk gestuurd op kwaliteit en betrouwbaarheid.

Teams zijn niet erg open om zo andere teams niet op ideeën te brengen. Teams kopen daarom ook de sourcecode van een applicatie om volledig grip en inzicht te krijgen. Geheimen mogen niet uitlekken.

### _**De competitie**_

Een competitie bestaat minimaal uit 3 deelnemers en 2 racebanen. Elke deelnemer heeft 1 racemiddel om mee te racen, denk bijvoorbeeld aan schoenen, auto of een fiets.

De racebanen hebben een vaste volgorde in de competitie. Alle deelnemers moeten minimaal 2 rondjes racen op een racebaan. Tijdens de race kan het voorkomen dat het gebruikte racemiddel tijdelijk defect is.

Elke racebaan is opgedeeld in meerdere secties waarbij alle secties dezelfde lengte hebben. Tijdens een race kunnen maximaal 2 deelnemers aanwezig zijn op 1 sectie.

Nadat een race is afgerond krijgt elke deelnemer punten. De deelnemers die als eerste is gefinished krijgt de meeste punten. De competitie is afgerond wanneer de deelnemers op alle racebanen hebben geraced en hiervoor punten hebben gekregen.

### _**Domeinmodel**_

De bovenstaande analyse is samengevat in het onderstaande domeinmodel.

![Domeinmodel](data:image/png;base64,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)

