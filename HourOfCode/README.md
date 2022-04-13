# **Hour of Code**

My Live Project assignment for The Tech Academy using UnrealEngine4/C++/Blueprints.
Circumstantially, this turned out to be a solo project.
Completion Time: 12 days

## **Overview**

This project is based off of a modified version of the Hour of Code tutorial packages by Unreal Engine Tutorials.

## **Initial Story Set**

The first few stories provided a bit more direction then the subsequent ones. In these I added collisions to platforms, created killzones for out of bounds, set up level sequencers to create moving platforms, placed power ups that modified jump height for a small duration, and rearranged the level layout for some personalization.

![](https://github.com/Nick-Marx/The-Tech-Academy-CPP-and-Unreal-Engine-Projects/blob/main/HourOfCode/README/init_stories.gif)

![](https://github.com/Nick-Marx/The-Tech-Academy-CPP-and-Unreal-Engine-Projects/blob/main/HourOfCode/README/wintrig_bp.png)

## **Keys and Collectables**

I used existing material assets to create 2 collectables that were functionally similar and added these as icons to the HUD widget. I also created a blueprint that counts the total number placed in the level at startup and display it as a fraction on the HUD. This allows for the flexablity to add or remove these throughout the level without having to readjust the displayed number manually.

![](https://github.com/Nick-Marx/The-Tech-Academy-CPP-and-Unreal-Engine-Projects/blob/main/HourOfCode/README/col_bp.png)

Then I created a check that ran each time a collectable was picked up that would evaluate whether all collectables have been gathered and, if so, display a message briefly indicating this as well as enable the level completion trigger.

I again used an existing material to create a key object that was similarly tracked on the HUD and could be attached to event triggers to enable interaction if collected.

![](https://github.com/Nick-Marx/The-Tech-Academy-CPP-and-Unreal-Engine-Projects/blob/main/HourOfCode/README/col_key.gif)

## **Physics and Buttons**

Creating buttons and physics objects was a lot easier than I initially assumed. I had to fiddle with the checkpoint button asset a bit in order to create a new button that could be 'pressed'. I also created a gate out of an amalgamation of other assets that could be raised and lowered based on whether the button was pressed. I placed a few small physics cubes that could be used to hold the button down, though, I did try to get spheres working at first, but I couldn't get the friction on them just right to both stay on the button and be easy to push around.

![](https://github.com/Nick-Marx/The-Tech-Academy-CPP-and-Unreal-Engine-Projects/blob/main/HourOfCode/README/btn_phys.gif)

## **Health and Traps**

The tutorial already had a player damage system in order to get the out of bounds killzones to work. I modified this to also work with the traps so that it wasn't an instant death. 

I made 2 trap variants, a spinner trap and a spike trap. These took me a while since I had to splice together other assets and then set them all up to sequencers in order to get them to move. Setting up the damage collisions on both types of traps just right was a bit tedious as well.

![](https://github.com/Nick-Marx/The-Tech-Academy-CPP-and-Unreal-Engine-Projects/blob/main/HourOfCode/README/trap_health.gif)

## **Final Thoughts**

Each task in this project challenged me to consider things in a broader scope and think in terms of code reusability and efficiency. Using blueprints definately helped with this and being able to visialize the interactions between classes, objects, variables, and functions. Thank you [The Tech Academy](https://www.learncodinganywhere.com/) for giving me this opportunity and helping me succeed.
