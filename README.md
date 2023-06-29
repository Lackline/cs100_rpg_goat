[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-c66648af7eb3fe8bc4f294546bfd86ef473780cde1dea487d3c4ff354943c9ae.svg)](https://classroom.github.com/online_ide?assignment_repo_id=9878628&assignment_repo_type=AssignmentRepo)
# RPGOATS
 Authors: 
 * Chun-Ying Wang   (https://github.com/Lackline)
 * Nate McClaskey   (https://github.com/Nvthaniel)
 * Andrii Dovhaniuk (https://github.com/Andreydovhaniuk)
 * Daniel Yao       (https://github.com/DanielYao777)

## Project Description
 1. Why is it important or interesting to you?
 * RPGOATS is an project that our team are able to be creative with the functions and features we develop for this project. It is also important because this is a project we will be able to put on all of our resumes, ultimately furthering our career in the software industry while teaching us the importance of collaboration.
 
 2. What languages/tools/technologies do you plan to use? (This list may change over the course of the project)
 * C++, GitHub, and Visual Studio will be implemented for this project
 * Vectors, Arrays, Pointers, Loops, Strings
 
 3. What will be the input/output of your project?
 * Choices of story line options
    * Output strings of selected storyline
 * Choices that change the story and ending
    * Depending on the items you obtain through the decisions you make, you will have a different storyline and ending.
 * Death Menu for choosing the wrong option
    * Making the wrong choice will prompt a death menu that allows you to restart or continue.
 
 4. What are the features that the project provides?
 * The options of actions from the main character and Items that change the storyline and ending. 
 
## Class Diagram
![Diagram:](https://github.com/cs100/final-project-rpgoats/blob/master/RPGOATS%20UML%20Diagram.jpg)

This UML diagram contains three main class: SceneDataBase, Selection, and Item.

*SceneDataBase*

 * SceneDataBase contains of the scene that could be trigger by the user. As the user select the scene, they will receive the narrative for the scene, and then prompt to input their selection for the scene to move on. After the selection was made, the scene counter will detect that user has finish their input and proceed to the next scene. 
 
*Selection*

 * Selection is a database that contains all the selection user have inputted and make movement or adjustments to the game. 

*Item*

 * Items in the story will change the story line and the ending. All items are stored in boolean, so when the items has an effct on the scene, it will get the data from the item and make effect to the scene.
 
 ## Phase III

 1. *Open-Closed Principle*
:We have the capability of adding an unlimited number of scenes to our scene class, enabling us to extend it as much as we desire.
 2. *Interface Segregation Principle*
:We have scenes and endings classes and ending is the simplified version of scene class. It only needs display function. We created ending as a differnt class because ending class doesn't need many functions as scene class but they are really similar and they both inherited from sceneDatabase class. So we decided to create an ending class to store endings specifically. 
 3. *The Liskov substitution Principle*
:The functionality of our scene_1 and scene_2 classes is duplicative of that provided by our scenes class.

Applying these SOLID principles gave our code more readability and allowed us to improve the functionality and efficiency of our classes. 
 
 ## Screenshots
 Input Screen
![3. Input screen](https://github.com/cs100/final-project-rpgoats/blob/master/1-1%20Input%20screen.png)
 Output Screen
![4. Output screen if you pick right choice](https://github.com/cs100/final-project-rpgoats/blob/master/3-1.%20Proceed%20to%20next%20scene%20if%20right%20option.png)
 ## Installation/Usage
 Load the Program
![1. Load the Program](https://github.com/cs100/final-project-rpgoats/blob/master/1.%20To%20load%20the%20program.png)
 Start the Program
![2. Start the Program](https://github.com/cs100/final-project-rpgoats/blob/master/2.%20To%20start%20the%20program.png)
 Death Menu for Wrong choice
![5. Death Menu](https://github.com/cs100/final-project-rpgoats/blob/master/3-2%20Dead%20menu%20for%20wrong%20option.png)


 ## Testing
 ![Testing for the Program](https://github.com/cs100/final-project-rpgoats/blob/master/gTest%20for%20each%20classes.png)
 Unit Tests for Scene Class
 ![Testing for the Program](https://github.com/cs100/final-project-rpgoats/blob/master/unitTestsScene.png)
 Selection Class Test
 ![Testing for the Program](https://github.com/cs100/final-project-rpgoats/blob/master/SelectionSceneTest.PNG)
 Checkpoint Class Test
 ![Testing for the Program](https://github.com/cs100/final-project-rpgoats/blob/master/testingforcheckpointbranch.PNG)
 SceneDataBase Class Test
 ![Testing for the Program](https://github.com/cs100/final-project-rpgoats/blob/master/testForSceneDatabase.png)
