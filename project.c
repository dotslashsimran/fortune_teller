#include <stdio.h>
#include <stdlib.h> 
int main()  
{  
    char name[20];
    printf("Enter you name:");
    fgets(name,20,stdin);
    
    
    int m, day;
    printf("==============================================\n\n");
    printf("     Hi %s                     \n", name);
    printf("     Welcome to the fortune teller        \n"); 
    printf("     Enter your birth month(1-12):        \n"); 
    scanf("%d", &m);  
  
    printf("    Enter your birth day:\n");  
    scanf("%d", &day);  
  
    if( (m == 12 && day >= 22) || (m == 1 && day <= 19) )  
    {  
        printf("==============================================\n\n");
        printf("Your horoscope sign is Capricorn-  The Goat\n");
        printf("_\n");
        printf("\\      /_)\n");
        printf("\\    /`.\n");
        printf("\\  /   ;\n");
        printf("\\/ __.'\n\n"); 
    }  
    else if( (m == 1 && day >= 20) || (m == 2 && day <= 17) )  
    {  
        printf("==============================================\n\n");
        printf("Your horoscope sign is Aquarius-The Water Bearer\n");
        printf("..-\"-._.-\"-._.-\n");
        printf("..-\"-._.-\"-._.-\n\n"); 
    }  
    else if( (m == 2 && day >= 18) || (m == 3 && day <= 19) )  
    {  
        printf("==============================================\n\n");
        printf("Your horoscope sign is Pisces-The Fishes\n");
        printf("`-.    .-'\n");
        printf(":  :\n");
        printf("--:--:--\n");
        printf(":  :\n");
        printf(".-`    `-.\n\n");
    }  
    else if( (m == 3 && day >= 20) || (m == 4 && day <= 19) )  
    {  
        printf("==============================================\n\n");
         printf("Your horoscope sign is Aries-The Ram\n");
        printf(".-.   .-.\n");
        printf("(_  \\ /  _)\n");
        printf("|\n");
        printf("|\n\n"); 
    }  
    else if( (m == 4 && day >= 20) || (m == 5 && day <= 20) )  
    {  
        printf("==============================================\n\n");
        printf("Your horoscope sign is Taurus-The Bull\n");
        printf(".     .\n");
        printf("'.___.'\n");
        printf(".'   `.\n");
        printf(":       :\n");
        printf(":       :\n");
        printf("`.___.'\n\n"); 
    }  
    else if( (m == 5 && day >= 21) || (m == 6 && day <= 20) )  
    {  
        printf("==============================================\n\n");
        printf("Your horoscope sign is Gemini-The Twins\n");
        printf("._____.\n");
        printf("| |\n");
        printf("| |\n");
        printf("| |\n");
        printf("_|_|_\n");
        printf("'     `\n\n");  
    }  
    else if( (m == 6 && day >= 21) || (m == 7 && day <= 22) )  
    {  
        printf("==============================================\n\n");
        printf("Your horoscope sign is Cancer-The Crab\n");
        printf(".--.\n");
        printf("/   _`.\n");
        printf("(_) ( )\n");
        printf("'.    /\n");
        printf("  `--'\n\n"); 
    }  
    else if( (m == 7 && day >= 23) || (m == 8 && day <= 22) )  
    {  
        printf("==============================================\n\n");
        printf("Your horoscope sign is Leo-The Lion\n");
        printf(".--.\n");
        printf("(    )\n");
        printf("(_)  /\n");
        printf("(_,\n\n");  
    }  
    else if( (m == 8 && day >= 23) || (m == 9 && day <= 22) )  
    {  
        printf("==============================================\n\n");
        printf("Your horoscope sign is Virgo-The Virgin\n");
        printf("_\n");
        printf("' `:--.--.\n");
        printf("|  |  |_\n");
        printf("|  |  | )\n");
        printf("|  |  |/\n");
        printf("(J\n\n");  
    }  
    else if( (m == 9 && day >= 23) || (m == 10 && day <= 22) )  
    {  
        printf("==============================================\n\n");
        printf("Your horoscope sign is Libra-The Balance\n");
        printf("__\n");
        printf("___.'  '.___\n");
        printf("____________\n\n"); 
    }  
    else if( (m == 10 && day >= 23) || (m == 11 && day <= 21) )  
    {  
        printf("==============================================\n\n");
        printf("Your horoscope sign is Scorpius-The Scorpion\n");
        printf("_\n");
        printf("' `:--.--.\n");
        printf("|  |  |\n");
        printf("|  |  |\n");
        printf("|  |  |  ..,\n");
        printf("`---':\n"); 
    }  
    else if( (m == 11 && day >= 22) || (m == 12 && day <= 21) )  
    {  
        printf("==============================================\n\n");
        printf("Your horoscope sign is Sagittarius-  The Archer\n");
        printf("...\n");
        printf(".':\n");
        printf(".'\n");
        printf("`..'\n");
        printf(".'`.\n\n");  
    }  
    else  
    { 
        printf("Invalid Birth date entered\n");  
    } 
    int num;
    printf("Please pick a number to continue:\n\n");
    printf("1.About me\n");
    printf("2.Lucky numbers\n");
    printf("3.Lucky colour\n");
    printf("4.Love Compatibilty\n");
    printf("5.Fortunes\n");
    printf("6.Exit\n");
    scanf("%d", &num);
    if(num==1) //about me-tanishq
    {
        printf("under maintenance");
    }
    else if(num==2) //lucky numbers-devansh
 {
     if( (m == 12 && day >= 22) || (m == 1 && day <= 19) )
    { printf("Your lucky numbers are 3 and 9");}
    else if( (m == 1 && day >= 20) || (m == 2 && day <= 17) )
    { printf("Your lucky numbers are 7 and 2");}
    else if( (m == 2 && day >= 18) || (m == 3 && day <= 19) )
    { printf("Your lucky numbers are 1 and 8");}
    else if( (m == 3 && day >= 20) || (m == 4 && day <= 19) )
    { printf("Your lucky numbers are 9 and 4");}
    else if( (m == 4 && day >= 20) || (m == 5 && day <= 20) )
    { printf("Your lucky numbers are 6 and 3");}
    else if( (m == 5 && day >= 21) || (m == 6 && day <= 20) )
    { printf("Your lucky numbers are 4 and 2");}
    else if( (m == 6 && day >= 21) || (m == 7 && day <= 22) ) 
    { printf("Your lucky numbers are 5 and 1");}
    else if( (m == 7 && day >= 23) || (m == 8 && day <= 22) )
    { printf("Your lucky numbers are 3 and 8");}
    else if( (m == 8 && day >= 23) || (m == 9 && day <= 22) )
    { printf("Your lucky numbers are 7 and 1");}
    else if( (m == 9 && day >= 23) || (m == 10 && day <= 22) )
    { printf("Your lucky numbers are 4 and 6");}
    else if( (m == 10 && day >= 23) || (m == 11 && day <= 21) )
    { printf("Your lucky numbers are 8 and 2");}
    else
    { printf("Your lucky numbers are 2 and 7");}
}
    else if(num==3) //lucky colour-tanishq
     {
        if( (m == 12 && day >= 22) || (m == 1 && day <= 19) )
    { printf("Your lucky colour is Dark Blue");}
    else if( (m == 1 && day >= 20) || (m == 2 && day <= 17) )
    { printf("Your lucky colour is Sky Blue");}
    else if( (m == 2 && day >= 18) || (m == 3 && day <= 19) )
    { printf("Your lucky Colour is Sea Green");}
    else if( (m == 3 && day >= 20) || (m == 4 && day <= 19) )
    { printf("Your lucky colour is Red");}
    else if( (m == 4 && day >= 20) || (m == 5 && day <= 20) )
    { printf("Your lucky colour is Pink");}
    else if( (m == 5 && day >= 21) || (m == 6 && day <= 20) )
    { printf("Your lucky colour is Yellow");}
    else if( (m == 6 && day >= 21) || (m == 7 && day <= 22) ) 
    { printf("Your lucky colour is Violet");}
    else if( (m == 7 && day >= 23) || (m == 8 && day <= 22) )
    { printf("Your lucky colour is Gold");}
    else if( (m == 8 && day >= 23) || (m == 9 && day <= 22) )
    { printf("Your lucky colour is Silver");}
    else if( (m == 9 && day >= 23) || (m == 10 && day <= 22) )
    { printf("Your lucky colour is Blue");}
    else if( (m == 10 && day >= 23) || (m == 11 && day <= 21) )
    { printf("Your lucky colour is Black");}
    else
    { printf("Your lucky colour is Orange");}
    
    }
    else if(num==4) //love compatibilty-sai
    {
      if( (m == 12 && day >= 22) || (m == 1 && day <= 19) )     
      {  int count;
           printf("1-CAPRICORN \n 2-AQUARIUS \n 3-PISCES \n 4-ARIES \n 5-TAURUS \n 6-GEMINI \n 7-CANCER \n 8-LEO \n 9-VIRGO \n 10-LIBRA \n 11-SCORPIO \n 12-SAGITTARIUS");
           scanf("ENTER CHOICE %d",&count);
   
    switch(count)
    {
        case 1:
        printf("PROS\n");
        printf("Capricorn man and woman understand each other so well, that most of the time they do not even feel the need for any communication. Whatever needs to be communicated can easily be done by looking into each others' eyes.\n");
        printf("CONS\n");
        printf("In this two Capricorn compatibility, there is an inexplicable need for competition and one-upmanship, which mostly always plays the spoilsport and does not allow them to be compatible partners. Besides, there is that mistrust, and together these traits can be fatal for their relationship\n");
        printf("CONCLUSION\n");
        printf("Communication=80% \n");
        printf("Compatibility=82.5% \n");
        break;
       
        case 2:
        printf("PROS\n");
        printf("The biggest plus of Capricorn and Aquarius relationship compatibility is that they both like to take things slow and are not interested in inflicting a whirlwind of emotions on each other. The mystery and charm of an Aquarian brings an unusual sense of calm to the goat's strained mind. Capricorn, on the other hand, helps add realism to the Aquarian's dreamy plans and gives him/her a practical roadmap to materialize them.\n");
        printf("CONS\n");
        printf("The goat prides itself over its tenacity and practicality, while trying to rule out every possibility of chaos and/or clutter in their future. The unpredictable attitude of the Aquarian stands right in the way of that very process, thereby making it difficult for the Capricorn to accept the eccentricity of his/her partner.\n");
        printf("CONCLUSION\n");
        printf("Communication=10% \n");
        printf("Compatibility=25% \n");
        break;
        
        case 3:
        printf("PROS\n");
        printf("The opposite traits of Capricorn and Pisces zodiac signs end up filling the emotional voids in their respective lives instead of clashing to destroy the harmony between them. What Capricorn misses from the personality of Pisces and vice versa. This helps the pair create a beautiful, complete world for themselves where they add to each other's strengths and minimize most of the weaknesses.\n");
        printf("CONS\n");
        printf("The quiet and unassuming nature of the goat might feel the Piscean feel ignored at times. However, the water sign must become conscious of the fact that the Capricorn means no harm more often than not.\n");
        printf("CONCLUSION\n");
        printf("Communication=100% \n");
        printf("Compatibility=85% \n");
        break;
        
        
        case 4:
        printf("PROS\n");
        printf("Their trust and faith is the only thing that makes their bond or compatibility stronger and relationship last longer. Both signs can comfortably share their darkest secrets with one another without feeling vulnerable or ashamed.\n");
        printf("CONS\n");
        printf("Their stubborn nature is something to be concerned about as both strong-headed partners won’t agree on surrendering to the other. Since both the signs like to take control in a relationship, they may find it harder to solve their disputes. Unnecessary tensions and conflicts might keep occurring from time to time. These stark differences determine how bumpy a ride they are going to have as they sail through, together.\n");
        printf("CONCLUSION\n");
        printf("Communication=20% \n");
        printf("Compatibility=15% \n");
        break;



        case 5:
        printf("PROS\n");
        printf("The biggest advantage of this relationship is that Capricorn and Taurus have a lot in common with each other. They are practical, strong-willed, driven, and steadfast individuals. The quiet confidence of the Goat draws the Taurean, while the stubborn persistence of the Bull attracts the Capricorn.\n");
        printf("CONS\n");
        printf("The problem with this relationship is that both the signs are a bit too serious for their own good sometimes. This tends to make their relationship match mundane and even boring at times.The Capricorn is a bit too quiet and reticent even for the usually inexpressive Bull. The Taurean feels as if his/her partner is always wound up about one thing or the other and does not know how to relax once in a while.\n");
        printf("CONCLUSION\n");
        printf("Communication=60% \n");
        printf("Compatibility=80% \n");
        break;

        case 6:
        printf("PROS\n");
        printf("Capricorns and Geminis are both individuals who love to work at something and make it the best possible experience for themselves. The Capricorn drive, couple with the Gemini dynamism, this relationship can be quite an interesting one. If worked on right, this here is a power couple in the making.\n");
        printf("CONS\n");
        printf("We have spoken about how the personality differences can work for the pair. Now let us see the possible difficulties. The Gemini and Capricorn zodiacs have a tendency to be attractive, charming and great liars. As such, chances of indiscretion are higher in Capricorn man Gemini woman and vice-versa couple. Jealousy and possessiveness are vices that both zodiacs are equally addicted to, as such, peace is a far cry in this pair.");
        printf("CONCLUSION");
        printf("Communication=25% \n");
        printf("Compatibility=25% \n");
        break;


        case 7:
        printf("PROS\n");
        printf("All relationships are about sensitivity and understanding. Thanks to the Cancer, there will be no dearth of those in the relationship. The Capricorn will constantly work at bettering themselves to ensure that the already loyal Cancer has no reason to look outside the relationship. While Cancer is not materialistic, they will adapt to Capricorn's innocently materialistic ways, to start speaking their language.");
        printf("CONS\n");
        printf("All relationships are about sensitivity and understanding. Thanks to the Cancer, there will be no dearth of those in the relationship. The Capricorn will constantly work at bettering themselves to ensure that the already loyal Cancer has no reason to look outside the relationship. While Cancer is not materialistic, they will adapt to Capricorn's innocently materialistic ways, to start speaking their language.");
        printf("CONCLUSION\n");
        printf("Communication=45% \n");
        printf("Compatibility=50% \n");
        break;

        case 8:
        printf("PROS\n");
        printf("Capricorn and Leo are both intrinsically different signs, but can find a way to keep each other hooked and happy for the long haul. They are enticed by the idea of power and if they manage to work towards one particular goal and put in immense amount of effort to achieve the same, they are likely to blow every other couple out of the water.\n");
        printf("CONS\n");
        printf("Leos are emotional beings who are constantly flipping between extreme moods. The goat, on the other hand, is a balanced and steady sign that does not believe in inconsistency. Leo's fiery temper and over-the-top excitement for trivial things might not bode well with the practical Capricorn.\n");
        printf("CONCLUSION\n");
        printf("Communication=25% \n");
        printf("Compatibility=25% \n");
        break;

        case 9:
        printf("PROS\n");
        printf("The Virgo Capricorn relationship compatibility thrives on the mutual trust and understanding that they build from the ground up. They are both extremely loyal individuals and thus, are not likely resort to any form of cheating at any point in the relationship. This is what makes their equation tick from the very beginning. They have similar interests and drives, which will make it easier for them to find numerous things to do, as a couple.\n");
        printf("CONS\n");
        printf("The relationship between them is strong and steady, but will it fly at some point of time? Virgo and Capricorn are sometimes too cautious and end up missing the fun in life. Their relationship might become too mundane and static at times, which is never a sign of a blossoming bond. They are both very harsh on themselves and those around them. Thus, their union might end up putting more pressure on them individually, rather than taking their minds off their worries.\n");
        printf("CONCLUSION\n");
        printf("Communication=60% \n");
        printf("Compatibility=80% \n");
        break;

        case 10:
        printf("PROS\n");
        printf("Both Libra Capricorn take the representation of themselves and their relationship in the society very seriously. Hence, they will work well together in public. Capricorn likes to get hold of material possessions in life, while Libra is attracted to the finer side of various objects. Thus, they can understand each other easily on that front as well.\n");
        printf("CONS\n");
        printf("While the signs focus too much on what they have and how they look to the world, they might forget to look at each other for a long time. This will create an emotional distance between them, which will only extend if not mended by both the parties involved. They might try to outsmart each other in the relationship, which poses a big threat to the high standards of belief that they have in each other.\n");
        printf("CONCLUSION\n");
        printf("Communication=20% \n");
        printf("Compatibility=15% \n");
        break;

        case 11:
        printf("PROS\n");
        printf("The Goat is reticent and quiet, and takes a long amount of time to open up to someone. While this might be difficult to take for most partners, it works wonderfully with the Scorpion’s psyche. The intuitive power of Scorpio is so strong that he/she can understand the Capricorn even when the latter prefers to stay silent on most occasions.\n");
        printf("CONS\n");
        printf("Capricorn and Scorpio are both very serious signs and do not fool around in any relationship. Since they are both dedicated to making their equation work, they might end up cultivating an air of tension around themselves and around the relationship. This might lead to unnecessary friction between Capricorn man and Scorpio womanand vice-versa.\n");
        printf("CONCLUSION\n");
        printf("Communication=100% \n");
        printf("Compatibility=85% \n");
        break;


        case 12:
        printf("PROS\n");
        printf("The energy of the Sagittarius brings a sense of excitement to the Capricorn’s life. The goat is known to be too devoted to its ambition and is extremely hard on itself more often than not. The warm and gracious Sagittarius personality helps Capricorn unwind to a reasonable and required degree. The Archer also teaches the Goat to slow down from time to time to enjoy and appreciate the little things in life. On the other hand, the Capricorn helps assemble the distorted life and thoughts of the Sagittarius.\n");
        printf("CONS\n");
        printf("The Archer is carefree and loves to take the occasional risk from time to time. The Capricorn is disturbed by such tactless approach to life and cannot stand rushing into anything without adequate thought process. Sagittarius likes to be optimistic, while Capricorn tends to fall back on realistic thinking. However, the Goat thinks that the Archer is naïve, while the latter thinks that the Goat is pessimistic. This causes a constant clashing of beliefs between the two parties. The fire sign is social and people-loving, while the Earth sign is an introverted soul. This makes it difficult for them to find shared activities that would give the same amount of happiness and contentment to both of them.\n");
        printf("CONCLUSION\n");
        printf("Communication=10% \n");
        printf("Compatibility=25% \n");
        break;


        default: 
        printf("Invalid Keywords entered.");
        break;
    
    }}
    }
    else if(num==5) //fortunes-simran
   {
        if( (m == 12 && day >= 22) || (m == 1 && day <= 19) ) //capricon
        { printf("Capricorns can be incredibly hard on themselves, and just as hard on other people. They can hold grudges and hold other people in their lives to impossible standards. Capricorns sometimes see one narrow way of doing something, and broadening their horizons and perspective can be incredibly helpful in giving them and others a break.");
        }
        else if( (m == 1 && day >= 20) || (m == 2 && day <= 17) ) //aquarius
        { printf("Aquarians can sometimes seem as if they don't care about their individual relationships, or they are holding something else at a higher value. For example, an Aquarian may cancel a date at the last minute because a friend or family member is stuck and needs a ride. It's not personal, and it's not a bad thing. An Aquarian has a value system that's constantly prioritizing the people who need them the most, and sometimes, that puts the people they love in a lurch. Clear communication is necessary to avoid these issues.");
        }
        else if( (m == 2 && day >= 18) || (m == 3 && day <= 19) )  //pisces
        { printf("Pisces signs can sometimes spend too much time in their heads, getting overly wrapped up in a problem and assuming there's no solution. Pisces are always one of the first signs to lend an ear to others, but when it comes to asking for help—especially emotional help—Pisces can sometimes wall themselves off, assuming that nobody knows what they are feeling and not even giving anyone a chance to try. Learning how to open up can be a huge lesson for Pisces. Of course, the fact remains that no one can read a Pisces mind. Pisces sometimes feels frustrated that they are seen as 'more complicated' than their peers, and that feeling can make them act or seem defensive. Pisces needs to learn to let down their guard, allow people to love them, and allow for mistakes to be made.");
        }
        else if( (m == 3 && day >= 20) || (m == 4 && day <= 19) ) //aries
        { printf("The world according to an Aries makes so much sense that they have a hard time listening to, much less accepting, alternative viewpoints. Slowing down is also tough. A Ram's mind goes a million miles a minute, and slowing down for others can be excruciating. But when it comes to maintaining relationships, Aries must learn to adapt and embrace other ways of doing, being, and seeing.");
        }
        else if( (m == 4 && day >= 20) || (m == 5 && day <= 20) )  //taurus
        { printf("Yes, they're hardworking, but they're also lazy. How is that even possible? Because Bulls are so driven by their own internal compass, they sometimes have trouble pivoting to fulfill someone else's demands, which can lead to tough times at work or school. Learning to consider others' viewpoints is a lifelong lesson for all Taureans.");
        }
        else if( (m == 5 && day >= 21) || (m == 6 && day <= 20) ) //gemini
        { printf("That social chameleon rep can sometimes earn Gemini a reputation as two-faced. While a Gemini is all about truth, sometimes a Gemini is more likely to talk to others about a conflict instead of approaching the person who's actually causing it. The Twins have also been known to stir up gossip just to keep things exciting.");
        }
        else if( (m == 6 && day >= 21) || (m == 7 && day <= 22) ) //cancer
        { printf("While Cancer easily and accurately reads situations when they're presented, he or she may not share those opinions with others. Speaking up is key, because turning inward with emotions means that those emotions may erupt unexpectedly. Crabs also expect others to know what they're thinking, which is another source of pent-up frustration. Learning to voice opinions, even if it leads to conflict, is a lifelong lesson for Cancer.");
        }
        else if( (m == 7 && day >= 23) || (m == 8 && day <= 22) ) //leo
        { printf("Leos work hard for the money, and they want you to know it. Leo loves luxury, whether it's five-star hotels or designer labels, and isn't shy about splashing out cash for quality. But Leo isn't foolish. Although this sign appreciates spending money, they know how to think long-term, and there's a strategy behind their spending decisions. Leo's motto is 'You can't take it with you', and Lions will crunch the numbers to live in the best style they can afford—without going into debt.");
        }
        else if( (m == 8 && day >= 23) || (m == 9 && day <= 22) ) //virgo
        { printf("Virgo's desire to have everything be perfect can manifest in frustration when things don't live up to those (sometimes unrealistic) expectations. Besides occasionally leading to fights with friends and partners, Virgo's focus on perfection can cause everything even uploading an Instagram photo to take forever. Learning to go with the flow and accept good enough. is a constant struggle.");
        }
        else if( (m == 9 && day >= 23) || (m == 10 && day <= 22) ) //libra
        { printf("Libra is great at making everyone happy—but what good is that if Libras themselves don't feel fulfilled? While the Scales have a fine-tuned internal compass, they sometimes ignore what they want in favor of what makes everyone else happy—and this habit ends up backfiring in the long run");
        }
        else if( (m == 10 && day >= 23) || (m == 11 && day <= 21) ) //scorpio
        { printf("Repeat after us: It's all right to cry. Scorpio tries to hard to seem tough that they sometimes cut off their vulnerable side entirely, seeming prickly, uncaring, and cold to outsiders. While expressing emotion is scary, learning how to do it is key for Scorpio, since presenting an 'I don't care' veneer can only work for so long before it get's exhausting!");
        }
        else if( (m == 11 && day >= 22) || (m == 12 && day <= 21) ) //sagittarius
        { printf("Sagittarius can sometimes be far too blunt, and put their own needs above others. You don’t need to veer from your values, but sometimes, a white lie saves all. It can also be helpful to be part of the pack now and then. Sagittarius is so good at doing things independently, but sometimes it can be faster, smarter, and more fun to do things as part of a group.");
        }
    }
    else //exit
      {printf("uh oh");}    
    
    return 0;  
}  
