# judges-assistant
An assistant for the judge of a tabletop RPG.

## Current Progress
A dice rolling mechanic has been implemented as a separate executable 'diceroll' which can be found in `bin` when built. The format it takes is the standard [number of dice]d[dice roll], so if you want to roll 1 D20, you put 1d20. The bin should weed out any incorrect formattings that lead to segmentation faults.

I am currently working on a utility specifically for Dungeon Crawl Classics (DCC) as that is the system I am currently versed in. I would like to extend this to other tabletop role-playing games in the future, but for the popular ones out there, there are better programs then this one.

## Future Plans
Adding support for other tabletops. Dungeons & Dragons is a popular one, but may attempt to hit some lesser known ones as they probably don't have systems like this in place.

## Resources
Thank you to [Purple Sorcerer]{https://www.purplesorcerer.com/} for the inspiration as well as their output for the standard DCC occupation table.
