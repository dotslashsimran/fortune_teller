#include <stdio.h>
#include <stdlib.h> 
int main()  
{  
    int yn;
    char name[100];
    printf("Enter you name: ");
    scanf("%[^\n]%*c",name);
        int m, day;
        printf("==============================================\n\n");
        printf("     Hi %s                     \n", name);
        printf("     Welcome to the fortune teller        \n"); 
        printf("     Enter your birth month(1-12):        \n"); 
        scanf("%d", &m);  
        printf("    Enter your birth day: \n");  
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
        do
    {
        int num;
        printf("Please pick a number to continue:\n\n");
        printf("1.About me\n");
        printf("2.Lucky numbers\n");
        printf("3.Lucky colour\n");
        printf("4.Love Compatibilty\n");
        printf("5.Fortunes\n");
        printf("6.Exit\n");
        scanf("%d", &num);
        if(num==1) //about me-bk
        {
            int ch;
            printf(" 1-CAPRICORN \n 2-AQUARIUS \n 3-PISCES \n 4-ARIES \n 5-TAURUS \n 6-GEMINI \n 7-CANCER \n 8-LEO \n 9-VIRGO \n 10-LIBRA \n 11-SCORPIO \n 12-SAGITTARIUS \n");
            scanf("%d",&ch);
            switch(ch)
            {
                case 1:printf("Capricorns are compassionate, ambitious, hard-working, optimistic and enthusiastic.They don’t let any obstacles get in their way or disrupt the psyche. If they want to do something they will achieve it no matter how hard it might be. Capricorns are easy-going and positive people who tend to look at the bright side of things.Since Capricorns rarely let the tough times get to them, they are often termed as cold or unemotional. But in reality, Capricorns are committed to and focused on their goals.");break;
                case 2:printf("This stubborn air sign is a great motivator.From excelling at business to being creatively driven, an Aquarius is a powerhouse of talent. They are intelligent, goal-oriented and ambitious. They are the go-getters and believe in working hard to achieve their dreams. Their kindness and gentle attitude add to their aura.An Aquarius often falls under the category of wise humans. He or she knows how to handle situations and that maintaining calm is the key to slving problems. They are often sweet and understanding, and it is very rare that you will find them angry.Often soft-spoken, an Aquarius will win over your heart by their grace and genuineness. They are hard workers but are often distracted by something or the other. Their dedication and passion will attract you towards them, and once you start liking there’s no turning back.");break;
                case 3:printf("Kind,creative,and a dreamer.This is how Pisces can be defined.If you have been with Pisces, you may know that, at times, they may become extremely mean and self-centered.However,they are not evil personalities.They stand with their loved ones,but only if the behaviour is reciprocated with them.Otherwise, they won’t mind becoming mute spectators to one’s problems.They are big-hearted and expect their family and friends to be the same.They are either the best person you have ever met or the worst you will ever meet, there’s nothing in between.They prefer to stay with people with who they resonate.They can be sweet talkers, too, if needed. Above all, they are dreamers and achievers. They seek the best in life, however, may not work hard for it. They sometimes want things easy in life.");break;
                case 4:printf("People belonging to the Aries zodiac sign are ambitious, determined and driven. They don’t believe in taking things lightly and are unstoppable when it comes to fulfilling their dreams and achieving their goals. They are risk-takers and don’t believe in playing safe.Aries-born people fear nothing and are bold and courageous.");break;
                case 5:printf("Taureans are patient and level-headed people, who have a calm and composed nature. They possess a positive outlook on life and believe in taking things slow. They are one of the most grounded zodiac signs and will happily make sacrifices for you if they care about you.Taureans have a special place in their heart for opulence and luxury. They love all things glamorous, grand and lavish, and are willing to work hard to earn them.");break;
                case 6:printf("Geminis are social butterflies. They love being surrounded by people and are friendly, easygoing and warm. They have an amicable personality and thus, can make friends very easily. They live a happening life that is filled with house parties, get-togethers and impromptu dances!Geminis don’t really have any hangups or airs and thus, gel well with most people.");break;
                case 7:printf("Cancerians are one of the most loving of all zodiac signs. They are compassionate, empathetic, nurturing, dependable and loyal. They feel a lot more than other people and thus, tend to easily get influenced by the vibes of the people around them. They are also highly observant and attentive beings. One of the many great qualities of the people this zodiac sign is that they love deeply and unconditionally.Apart from being sensitive and kind they are also witty and have a great sense of humour.");break;
                case 8:printf("Fierce, bold, charismatic, confident, king and queen. All these words and many more can be synonymous with a Leo. They are emotional, and good-hearted people. If you have been with a Leo, you would know that they are keepers.Most of the time, a Leo is misunderstood as being arrogant and rude, however, it is only after you get to know them that you know their true personality and worth. They are just being elegant and often keep away from poking their nose into somebody’s else’s business.For a Leo, it’s often hard to trust people because more often than not, they find themselves dejected and hurt.Since Leo is a Sun Sign, it is ruled by positive energies. Hence, the people with this sign are optimistic, hard workers, fueled up with motivation and go-getters. They want nothing but the best in life, and perfection remains their mantra.");break;
                case 9:printf("They are known to be perfectionists and clean freaks. They also have attention to detail are very particular about keeping things neat and tidy. They like keeping things organised and have a set routine that they follow every single day. They don’t like the idea of unpredictability or flexibility. They also try to impose their rules on others. If they like cleanliness, they will definitely force their friends to maintain the same in their abodes. They are also extremely critical beings who never seem to be pleased. They manage to find flaws in each and everything and thus, can be quite irritating to some people.");break;
                case 10:printf("Libra zodiac sign is the social butterfly and is the worshipper of beauty. They are highly attracted to beautiful things and they have quite a charming personality. Libra is an air element and some of its personality traits are idealistic, diplomatic, clever, fair, indecisive, non-confrontational and a bit unreliable.");break;
                case 11:printf("Scorpios are people who like to keep a low profile. They have a mysterious aura around them and tend to be secretive about their professional as well as personal affairs. They like observing people and their surroundings instead of actively participating in conversations.They are highly observant, attentive and alert people who are also sensitive, caring, kind and warm.");break;
                case 12:printf("They are known for having a lust for travel and adventure. They like intellectual and spiritual pursuits and are fueled by wanderlust. They live for travelling and are always more than ready to go on new adventures and expeditions.They have a thing for meeting new people and exploring new cultures and hate the idea of sitting at one place for a long amount of time. Another thing that they hate is routine and monotony.They are optimistic and have a great sense of humour.");break;
                default:printf("INVALID CHOICE");
            }
        }
        else if(num==2) //lucky numbers-devansh
        {
            if( (m == 12 && day >= 22) || (m == 1 && day <= 19) )
            {
                printf("Your lucky numbers are 3 and 9");
            }
            else if( (m == 1 && day >= 20) || (m == 2 && day <= 17) )
            {
                printf("Your lucky numbers are 7 and 2");
            }
            else if( (m == 2 && day >= 18) || (m == 3 && day <= 19) )
            {
                printf("Your lucky numbers are 3 and 7");
            }
            else if( (m == 3 && day >= 20) || (m == 4 && day <= 19) )
            {
                printf("Your lucky numbers are 9 and 4");
            }
            else if( (m == 4 && day >= 20) || (m == 5 && day <= 20) )
            {
                printf("Your lucky numbers are 6 and 3");
            }
            else if( (m == 5 && day >= 21) || (m == 6 && day <= 20) )
            { 
                printf("Your lucky numbers are 4 and 2");
            }
            else if( (m == 6 && day >= 21) || (m == 7 && day <= 22) ) 
            {
                printf("Your lucky numbers are 5 and 1");
            }
            else if( (m == 7 && day >= 23) || (m == 8 && day <= 22) )
            {
                printf("Your lucky numbers are 3 and 8");
            }
            else if( (m == 8 && day >= 23) || (m == 9 && day <= 22) )
            {
                printf("Your lucky numbers are 7 and 1");
            }
            else if( (m == 9 && day >= 23) || (m == 10 && day <= 22) )
            {
                printf("Your lucky numbers are 4 and 6");
            }
            else if( (m == 10 && day >= 23) || (m == 11 && day <= 21) )
            {
                printf("Your lucky numbers are 8 and 2");
            }
            else
            { 
                printf("Your lucky numbers are 2 and 7");
            }
        }
        else if(num==3) //lucky colour-devansh
        {
            if( (m == 12 && day >= 22) || (m == 1 && day <= 19) )
            { 
                printf("Your lucky colour is Dark Blue");
            }
            else if( (m == 1 && day >= 20) || (m == 2 && day <= 17) )
            { 
                printf("Your lucky colour is Sky Blue");
            }
            else if( (m == 2 && day >= 18) || (m == 3 && day <= 19) )
            {
                printf("Your lucky Colour is Sea Green");
            }
            else if( (m == 3 && day >= 20) || (m == 4 && day <= 19) )
            {
                printf("Your lucky colour is Red");
            }
            else if( (m == 4 && day >= 20) || (m == 5 && day <= 20) )
            {
                printf("Your lucky colour is Pink");
            }
            else if( (m == 5 && day >= 21) || (m == 6 && day <= 20) )
            {
                printf("Your lucky colour is Yellow");
            }
            else if( (m == 6 && day >= 21) || (m == 7 && day <= 22) ) 
            {
                printf("Your lucky colour is Violet");
            }
            else if( (m == 7 && day >= 23) || (m == 8 && day <= 22) )
            {
                printf("Your lucky colour is Gold");
            }
            else if( (m == 8 && day >= 23) || (m == 9 && day <= 22) )
            {  
                printf("Your lucky colour is Silver");
            }
            else if( (m == 9 && day >= 23) || (m == 10 && day <= 22) )
            {
                printf("Your lucky colour is Blue");
            }
            else if( (m == 10 && day >= 23) || (m == 11 && day <= 21) )
            {
                printf("Your lucky colour is Black");
            }
            else
            {
                printf("Your lucky colour is Orange");
            }
        }
        else if(num==4) //love compatibilty-sai
        {       int count;
                printf(" 1-CAPRICORN \n 2-AQUARIUS \n 3-PISCES \n 4-ARIES \n 5-TAURUS \n 6-GEMINI \n 7-CANCER \n 8-LEO \n 9-VIRGO \n 10-LIBRA \n 11-SCORPIO \n 12-SAGITTARIUS \n");
                printf("ENTER CHOICE\n");
                scanf("%d", &count);
            if( (m == 12 && day >= 22) || (m == 1 && day <= 19) )     
            {
                
                switch(count)
                {
                    case 1:
                    printf("PROS\n");
                    printf("Capricorn man and woman understand each other so well, that most of the time they do not even feel the need for any communication. Whatever needs to be communicated can easily be done by looking into each others' eyes.\n");
                    printf("CONS\n");
                    printf("In this two Capricorn compatibility, there is an inexplicable need for competition and one-upmanship, which mostly always plays the spoilsport and does not allow them to be compatible partners. Besides, there is that mistrust, and together these traits can be fatal for their relationship\n");
                    printf("CONCLUSION\n");
                    printf("Communication=80percent \n");
                    printf("Compatibility=82.5percent \n");
                    break;
       
                    case 2:
                    printf("PROS\n");
                    printf("The biggest plus of Capricorn and Aquarius relationship compatibility is that they both like to take things slow and are not interested in inflicting a whirlwind of emotions on each other. The mystery and charm of an Aquarian brings an unusual sense of calm to the goat's strained mind. Capricorn, on the other hand, helps add realism to the Aquarian's dreamy plans and gives him/her a practical roadmap to materialize them.\n");
                    printf("CONS\n");
                    printf("The goat prides itself over its tenacity and practicality, while trying to rule out every possibility of chaos and/or clutter in their future. The unpredictable attitude of the Aquarian stands right in the way of that very process, thereby making it difficult for the Capricorn to accept the eccentricity of his/her partner.\n");
                    printf("CONCLUSION\n");
                    printf("Communication=10percent \n");
                    printf("Compatibility=25percent \n");
                    break;
            
                    case 3:
                    printf("PROS\n");
                    printf("The opposite traits of Capricorn and Pisces zodiac signs end up filling the emotional voids in their respective lives instead of clashing to destroy the harmony between them. What Capricorn misses from the personality of Pisces and vice versa. This helps the pair create a beautiful, complete world for themselves where they add to each other's strengths and minimize most of the weaknesses.\n");
                    printf("CONS\n");
                    printf("The quiet and unassuming nature of the goat might feel the Piscean feel ignored at times. However, the water sign must become conscious of the fact that the Capricorn means no harm more often than not.\n");
                    printf("CONCLUSION\n");
                    printf("Communication=100percent \n");
                    printf("Compatibility=85percent \n");
                    break;
        
                    case 4:
                    printf("PROS\n");
                    printf("Their trust and faith is the only thing that makes their bond or compatibility stronger and relationship last longer. Both signs can comfortably share their darkest secrets with one another without feeling vulnerable or ashamed.\n");
                    printf("CONS\n");
                    printf("Their stubborn nature is something to be concerned about as both strong-headed partners won’t agree on surrendering to the other. Since both the signs like to take control in a relationship, they may find it harder to solve their disputes. Unnecessary tensions and conflicts might keep occurring from time to time. These stark differences determine how bumpy a ride they are going to have as they sail through, together.\n");
                    printf("CONCLUSION\n");
                    printf("Communication=20percent \n");
                    printf("Compatibility=15percent \n");
                    break;

                    case 5:
                    printf("PROS\n");
                    printf("The biggest advantage of this relationship is that Capricorn and Taurus have a lot in common with each other. They are practical, strong-willed, driven, and steadfast individuals. The quiet confidence of the Goat draws the Taurean, while the stubborn persistence of the Bull attracts the Capricorn.\n");
                    printf("CONS\n");
                    printf("The problem with this relationship is that both the signs are a bit too serious for their own good sometimes. This tends to make their relationship match mundane and even boring at times.The Capricorn is a bit too quiet and reticent even for the usually inexpressive Bull. The Taurean feels as if his/her partner is always wound up about one thing or the other and does not know how to relax once in a while.\n");
                    printf("CONCLUSION\n");
                    printf("Communication=60percent \n");
                    printf("Compatibility=80percent \n");
                    break;

                    case 6:
                    printf("PROS\n");
                    printf("Capricorns and Geminis are both individuals who love to work at something and make it the best possible experience for themselves. The Capricorn drive, couple with the Gemini dynamism, this relationship can be quite an interesting one. If worked on right, this here is a power couple in the making.\n");
                    printf("CONS\n");
                    printf("We have spoken about how the personality differences can work for the pair. Now let us see the possible difficulties. The Gemini and Capricorn zodiacs have a tendency to be attractive, charming and great liars. As such, chances of indiscretion are higher in Capricorn man Gemini woman and vice-versa couple. Jealousy and possessiveness are vices that both zodiacs are equally addicted to, as such, peace is a far cry in this pair.");
                    printf("CONCLUSION");
                    printf("Communication=25percent \n");
                    printf("Compatibility=25percent \n");
                    break;

                    case 7:
                    printf("PROS\n");
                    printf("All relationships are about sensitivity and understanding. Thanks to the Cancer, there will be no dearth of those in the relationship. The Capricorn will constantly work at bettering themselves to ensure that the already loyal Cancer has no reason to look outside the relationship. While Cancer is not materialistic, they will adapt to Capricorn's innocently materialistic ways, to start speaking their language.");
                    printf("CONS\n");
                    printf("All relationships are about sensitivity and understanding. Thanks to the Cancer, there will be no dearth of those in the relationship. The Capricorn will constantly work at bettering themselves to ensure that the already loyal Cancer has no reason to look outside the relationship. While Cancer is not materialistic, they will adapt to Capricorn's innocently materialistic ways, to start speaking their language.");
                    printf("CONCLUSION\n");
                    printf("Communication=45percent \n");
                    printf("Compatibility=50percent \n");
                    break;

                    case 8:
                    printf("PROS\n");
                    printf("Capricorn and Leo are both intrinsically different signs, but can find a way to keep each other hooked and happy for the long haul. They are enticed by the idea of power and if they manage to work towards one particular goal and put in immense amount of effort to achieve the same, they are likely to blow every other couple out of the water.\n");
                    printf("CONS\n");
                    printf("Leos are emotional beings who are constantly flipping between extreme moods. The goat, on the other hand, is a balanced and steady sign that does not believe in inconsistency. Leo's fiery temper and over-the-top excitement for trivial things might not bode well with the practical Capricorn.\n");
                    printf("CONCLUSION\n");
                    printf("Communication=25percent \n");
                    printf("Compatibility=25percent \n");
                    break;

                    case 9:
                    printf("PROS\n");
                    printf("The Virgo Capricorn relationship compatibility thrives on the mutual trust and understanding that they build from the ground up. They are both extremely loyal individuals and thus, are not likely resort to any form of cheating at any point in the relationship. This is what makes their equation tick from the very beginning. They have similar interests and drives, which will make it easier for them to find numerous things to do, as a couple.\n");
                    printf("CONS\n");
                    printf("The relationship between them is strong and steady, but will it fly at some point of time? Virgo and Capricorn are sometimes too cautious and end up missing the fun in life. Their relationship might become too mundane and static at times, which is never a sign of a blossoming bond. They are both very harsh on themselves and those around them. Thus, their union might end up putting more pressure on them individually, rather than taking their minds off their worries.\n");
                    printf("CONCLUSION\n");
                    printf("Communication=60percent \n");
                    printf("Compatibility=80percent \n");
                    break;

                    case 10:
                    printf("PROS\n");
                    printf("Both Libra Capricorn take the representation of themselves and their relationship in the society very seriously. Hence, they will work well together in public. Capricorn likes to get hold of material possessions in life, while Libra is attracted to the finer side of various objects. Thus, they can understand each other easily on that front as well.\n");
                    printf("CONS\n");
                    printf("While the signs focus too much on what they have and how they look to the world, they might forget to look at each other for a long time. This will create an emotional distance between them, which will only extend if not mended by both the parties involved. They might try to outsmart each other in the relationship, which poses a big threat to the high standards of belief that they have in each other.\n");
                    printf("CONCLUSION\n");
                    printf("Communication=20percent \n");
                    printf("Compatibility=15percent \n");
                    break;

                    case 11:
                    printf("PROS\n");
                    printf("The Goat is reticent and quiet, and takes a long amount of time to open up to someone. While this might be difficult to take for most partners, it works wonderfully with the Scorpion’s psyche. The intuitive power of Scorpio is so strong that he/she can understand the Capricorn even when the latter prefers to stay silent on most occasions.\n");
                    printf("CONS\n");
                    printf("Capricorn and Scorpio are both very serious signs and do not fool around in any relationship. Since they are both dedicated to making their equation work, they might end up cultivating an air of tension around themselves and around the relationship. This might lead to unnecessary friction between Capricorn man and Scorpio womanand vice-versa.\n");
                    printf("CONCLUSION\n");
                    printf("Communication=100percent \n");
                    printf("Compatibility=85percent \n");
                    break;

                    case 12:    
                    printf("PROS\n");
                    printf("The energy of the Sagittarius brings a sense of excitement to the Capricorn’s life. The goat is known to be too devoted to its ambition and is extremely hard on itself more often than not. The warm and gracious Sagittarius personality helps Capricorn unwind to a reasonable and required degree. The Archer also teaches the Goat to slow down from time to time to enjoy and appreciate the little things in life. On the other hand, the Capricorn helps assemble the distorted life and thoughts of the Sagittarius.\n");
                    printf("CONS\n");
                    printf("The Archer is carefree and loves to take the occasional risk from time to time. The Capricorn is disturbed by such tactless approach to life and cannot stand rushing into anything without adequate thought process. Sagittarius likes to be optimistic, while Capricorn tends to fall back on realistic thinking. However, the Goat thinks that the Archer is naïve, while the latter thinks that the Goat is pessimistic. This causes a constant clashing of beliefs between the two parties. The fire sign is social and people-loving, while the Earth sign is an introverted soul. This makes it difficult for them to find shared activities that would give the same amount of happiness and contentment to both of them.\n");
                    printf("CONCLUSION\n");
                    printf("Communication=10percent \n");
                    printf("Compatibility=25percent \n");
                    break;

                    default: 
                    printf("Invalid Keywords entered.");
                    break;
                }
                
            }
            else if( (m == 1 && day >= 20) || (m == 2 && day <= 17) ) 
            {
                
                 
                switch(count)
                {
                    case 1:
                    printf("PROS\n");
                    printf("The biggest plus of Capricorn and Aquarius relationship compatibility is that they both like to take things slow and are not interested in inflicting a whirlwind of emotions on each other. The mystery and charm of an Aquarian brings an unusual sense of calm to the goat's strained mind. Capricorn, on the other hand, helps add realism to the Aquarian's dreamy plans and gives him/her a practical roadmap to materialize them.\n");
                    printf("CONS\n");
                    printf("The goat prides itself over its tenacity and practicality, while trying to rule out every possibility of chaos and/or clutter in their future. The unpredictable attitude of the Aquarian stands right in the way of that very process, thereby making it difficult for the Capricorn to accept the eccentricity of his/her partner.\n");
                    printf("CONCLUSION\n");
                    printf("Communication=10percent \n");
                    printf("Compatibility=25percent \n");
                    break;

                    case 2:
                    printf("PROS\n");
                    printf("The positive aspects of two Aquarians relationship is the easy flow of conversation because they understand each other so well. Moreover, since they are very intelligent people and they have lofty thoughts, the things they talk about are generally not understood even by people in their surroundings. Their intellectual connect is absolute and oblivious to everything around them.\n");
                    printf("CONS\n");
                    printf("However, the Aquarius native is really strong, and they have big egos. So in an Aquarius compatibility it is easy for ego issues to crop and spoil things. Their egos can really be the reason for a great deal of unpleasantness in their relationship leading to bitter conflicts between their personalities. The best remedy for such a situation is for both of them to relax, sit back and allow each other enough intellectual freedom that they want.\n");
                    printf("CONCLUSION\n");
                    printf("Communication=80percent \n");
                    printf("Compatibility=82.5percent \n");
                    break;

                    case 3:
                    printf("PROS\n");
                    printf("The ruling planets of Aquarius and Pisces are Uranus and Neptune respectively. This creates a sense of exhilarating mystery in the relationship, making it an exciting ride for both the individuals involved. This couple will not fear to set big and mighty goals individually, as well as together.\n");
                    printf("CONS\n");
                    printf("The biggest struggle between these Pisces and Aquarius individuals would be the consistent emotional inconsistency of their equation. Pisces is all about feeling and expressing, while Aquarius tries to steer clear of any intense emotional passages. The emotions of a Piscean fluctuate in hot as well as cold, while the Aquarian believes in singular tepidity. The best chance to overcome this hurdle is to find a middle ground where the former learns to hold back a little bit and the latter tries to let go once in a while.\n");
                    printf("CONCLUSION\n");
                    printf("Communication=10percent \n");
                    printf("Compatibility=25percent \n");
                    break;

                    case 4:
                    printf("PROS\n");
                    printf("Since both Aquarius and Aries are extremely smart individuals, they will never run out of thought-provoking and mentally stimulating conversations. They enjoy every second of being with each other and there is not a single dull moment in between Aquarius and Aries’s relationship.\n");
                    printf("CONS\n");
                    printf("The frequent fights between Aquarius and Aries arise from their relatively different approach to life. While Aries is emotional and expressive, Aquarius is reticent and subtle. The Aries needs affection from time to time and the Water bearer’s refusal to express might drive a wedge between the two zodiac signs.\n");
                    printf("CONCLUSION\n");
                    printf("Communication=100percent \n");
                    printf("Compatibility=85percent \n");
                    break;

                    case 5:
                    printf("PROS\n");
                    printf("A Taurean’s calm temperament helps to resolve the apprehensions of an Aquarian. At the same time, an Aquarian’s rooted thoughts and expressions are what truly attracts a Taurean.Both being extremely loyal signs, will be devoted to each other and their zodiac match relationship. Both shall find it easier to trust, provided the Taurean remains truthful and the Aquarian does not keep secrets.Since both prefer to steer clear from unwanted squabbles, they shall be able to solve any issue at hand before things go out of control.\n");
                    printf("CONS\n");
                    printf("Taurus man and Taurus woman may find it a little tough to keep up with the exciting adventures of Aquarians. The Taurean may not be pleased with the water-bearer’s need to fly high even in uncharted waters, as they prefer to remain humble and grounded. Hence, the issues that crop up between the air and the earth signs are mainly due to these reasons.Their desires differ from each other too. A Taurean will always want to acquire materialistic things whereas, an Aquarian is more interested in holding onto personal consequences that are on an intellectual level. These two contrasting desires might act as a spoke between them creating tensions and misunderstandings.\n");
                    printf("CONCLUSION\n");
                    printf("Communication=20percent \n");
                    printf("Compatibility=15percent \n");
                    break;

                    case 6:
                    printf("PROS\n");
                    printf("The knowledge seeking Gemini is bound to be ethereally attracted to the knowledge bearing Aquarius. The Aquarius on the other hand, gets a great deal of comfort in sharing their sea of knowledge with an eager soul. For them to keep away from each other, seems almost too difficult.Not just a loving couple, the Aquarius man and Gemini woman and vice-versa will have a relationship that will translate to every walk of life. While most couples can't work together professionally, the Aquarius and Gemini can make a great professional team.\n");
                    printf("CONS\n");
                    printf("Both the signs tend to get habituated to people, in which case, they just go on with associations for the sake of the habit. While this doesn't hinder other aspects of their life, if does start blocking their knowledge flow, eventually making them frustrated and bitter. Needless to say, when air gets bitter, there is only going to be a storm!\n");
                    printf("CONCLUSION\n");
                    printf("Communication=60percent \n");
                    printf("Compatibility=80percent \n");
                    break;

                    case 7:
                    printf("PROS\n");
                    printf("The mutual need to please and care for their partner is one of the corner stones of Aquarius and Cancer love match. The Aquarius Cancer compatibility stands tall on the fact that these two will ensure that they do not put each other in an uncomfortable situation. All the while, making sure they are not losing their comfort as well.\n");
                    printf("CONS\n");
                    printf("Alright, so they take care of each other and are not averse to speaking their mind in the relationship. However, this is when all is going well. The insecure Cancer, if triggered, can face issues with the open to the universe attitude of the Aquarius. More so, the Aquarius, when faced with any restriction, may rebel very drastically to the Cancer.\n");
                    printf("CONCLUSION\n");
                    printf("Communication=25percent \n");
                    printf("Compatibility=25percent \n");
                    break;

                    case 8:
                    printf("PROS\n");
                    printf("The water-bearer is likely to complement the flame in order to let it shine in full glory. Likewise, even the air sign is bound to find inspiration from the Lion. This way, both signs seem to push each other towards greatness. Leos are built to motivate whereas the water bearers are full of ambitions. Both their qualities seem to piece perfectly together, making their union different and unique.\n");
                    printf("CONS\n");
                    printf("Leo man and woman are extremely generous lovers but they believe that love is a two-way street. If they feel that love is not returned in a similar manner, they are likely to get upset. The Lion’s continuous call for attention can be a little enduring and when their demands are not fulfilled, they tend to get even more flustered.\n");
                    printf("CONCLUSION\n");
                    printf("Communication=45percent \n");
                    printf("Compatibility=50percent \n");
                    break;

                    case 9:
                    printf("PROS\n");
                    printf("Both Virgo and Aquarius are highly intelligent and sharp individuals. The mental side of this relationship will be its greatest asset and its biggest strength. They will never run out of topics to talk about and their communication will always be enlightening and exhilarating for both the sides.The best part about Virgo and Aquarius relationship compatibility bond is that though they have certain similarities, the differences in their personalities will also add to their relationship. Both have strong ambition and will not stop at anything to fulfill their aspirations.\n");
                    printf("CONS\n");
                    printf("The unpredictability of the Aquarian is too much to take for the stable Virgo at times. The latter likes to have a control over his/her life, while the former thrives on surprises and impulsiveness. This will probably ignite the initial bout of sparks in their relationship.While Virgo believes in keeping it real, their behavior might seem pessimistic to the immensely idealistic Aquarius. This will lead to conflicts between Aquarius and Virgo, as Virgo will be frustrated with their partner's inability to gauge the reality.\n");
                    printf("CONCLUSION\n");
                    printf("Communication=25percent \n");
                    printf("Compatibility=25percent \n");
                    break;
    
                    case 10:
                    printf("PROS\n");
                    printf("When these two signs are attracted to each other on a romantic front, they can create a hell of a love story for themselves. Both Libra and Aquarius will give their all to starting and sustaining their relationship with each other, while investing time and effort in understanding and respecting each other’s perspective to different things in life.\n");
                    printf("CONS\n");
                    printf("Aquarius man and woman  is an upfront, direct, and strong sign. Hence, when Libra tends to waste too time on a particular decision, it can become quite unnerving for the water bearer.Also, the Libra’s reasonable wish of settling down in some point in life might also play negatively on the Aquarian’s mind, as the latter cannot have its independence threatened under any circumstances.Libra, on the other hand, does not understand the Aquarian’s constant need to rush through every decision in life.\n");
                    printf("CONCLUSION\n");
                    printf("Communication=60percent \n");
                    printf("Compatibility=80percent \n");
                    break;

                    case 11:
                    printf("PROS\n");
                    printf("Both Aquarius and Scorpio are extremely intellectual people with razor sharp focus. They are attracted to each other on the cerebral level thus, tend to have more than one intellectually stimulating conversation with each other from time to time.They have enough similarities to hit it off with each other. They are both rebels on certain fronts and thus, find it easy to relate to each other on some core beliefs.\n");
                    printf("CONS\n");
                    printf("The challenge that the water bearer and the Scorpion will face the most in their relationship is their inability to come to terms with each other’s emotional requirements. While the Aquarian prefers to stay closed off and guarded, the Scorpion requires expressiveness from time to time.This might create problems between Aquarians and Scorpions and hamper the progress of their relationship.\n");
                    printf("CONCLUSION\n");
                    printf("Communication=20percent \n");
                    printf("Compatibility=15percent \n");
                    break;

                    case 12:
                    printf("PROS\n");
                    printf("The best past about this equation is that since both Aquarius and Sagittarius are not afraid to say their mind, the communication between them is strong and real. They have the assurance that their partner will not judge them, making it easy for them to open up to each other and ensure that their conversations are free-flowing, unambiguous, and enriching. The intellectual side of the Water bearer mingles perfectly with the deep-thinking persona of the Sagittarius sign. They are both drawn to each other due to the same.\n");
                    printf("CONS\n");
                    printf("It is important for Aquarius and Sagittarius to know how to unearth the right combination so as to avoid harming their relationship with each other. Possessiveness is a problem that both of them will struggle from time to time. They have jealous natures that might cause friction in their bond and engender a sense of resentment between the two. Since both these signs are more impulsive than rational, they might end up making regrettable decisions in the spur of the moment that cause problems for their relationship in the future.\n");
                    printf("CONCLUSION\n");
                    printf("Communication=100percent \n");
                    printf("Compatibility=85percent \n");
                    break;
      
                    default: 
                    printf("Invalid Keywords entered.");
                    break;
                }
            }
            else if( (m == 2 && day >= 18) || (m == 3 && day <= 19) )
            {
                
                switch(count)
                {
                    case 1:
                    printf("PROS\n");
                    printf("The opposite traits of Capricorn and Pisces zodiac signs end up filling the emotional voids in their respective lives instead of clashing to destroy the harmony between them. What Capricorn misses from the personality of Pisces and vice versa. This helps the pair create a beautiful, complete world for themselves where they add to each other's strengths and minimize most of the weaknesses.\n");
                    printf("CONS\n");
                    printf("The quiet and unassuming nature of the goat might feel the Piscean feel ignored at times. However, the water sign must become conscious of the fact that the Capricorn means no harm more often than not.\n");
                    printf("CONCLUSION\n");
                    printf("Communication=100percent \n");
                    printf("Compatibility=85percent \n");
                    break;
        
                    case 2:
                    printf("PROS\n");
                    printf("The ruling planets of Aquarius and Pisces are Uranus and Neptune respectively. This creates a sense of exhilarating mystery in the relationship, making it an exciting ride for both the individuals involved. This couple will not fear to set big and mighty goals individually, as well as together.\n");
                    printf("CONS\n");
                    printf("The biggest struggle between these Pisces and Aquarius individuals would be the consistent emotional inconsistency of their equation. Pisces is all about feeling and expressing, while Aquarius tries to steer clear of any intense emotional passages. The emotions of a Piscean fluctuate in hot as well as cold, while the Aquarian believes in singular tepidity. The best chance to overcome this hurdle is to find a middle ground where the former learns to hold back a little bit and the latter tries to let go once in a while.\n");
                    printf("CONCLUSION\n");
                    printf("Communication=10percent \n");
                    printf("Compatibility=25percent \n");
                    break;

                    case 3:
                    printf("PROS\n");
                    printf("The positive points in a Pisces-Pisces relationship are that they are both dreamy people and when in love will share all their dreams with each other. This can be very inspiring for the other partner. They will not only encourage each other tacitly, but also verbally. And they will not only encourage each other but also push each other actively to achieve their respective goals.\n");
                    printf("CONS\n");
                    printf("The minus point in a Pisces and Pisces compatibility is that they can get stuck in a rut, performing the same things day in and day out. It can make them lazy, bored and thus their inborn creativity goes for a toss. This can easily lead them into a situation where there is nothing to share or talk about, unless they have a good group of friends with whom they can interact everyday, or unless they have shared hobbies about which they can talk everyday.\n");
                    printf("CONCLUSION\n");
                    printf("Communication=80percent \n");
                    printf("Compatibility=82.5percent \n");
                    break;
    
                    case 4:
                    printf("PROS\n");
                    printf("Pisces prefers surprises and doesn’t think much before taking up an unknown endeavor. The Aries is also a risk-taker and spontaneous in making decisions and that is understood well by the fish. The Piscean is well aware of the aims and dreams of Aries, so they will always stay in their support. While the Aries will be protective and possessive for their Piscean partner because of their own strong mentality. The Aries will try to protect the Piscean as they are aware of their sensitive and emotional behavior.\n");
                    printf("CONS\n");
                    printf("The biggest disadvantage of their love relationship is that both Pisces and Aries. Pisces sun sign have different ways of expressing their feelings. Pisces likes to deal with different feelings and emotions at different times while the Aries man and woman is quite specific and rigid about their emotions. Pisces don’t have a constant feeling for anyone and their emotionality towards various things will fluctuate from time to time. This is not at all good for their relationship as this can create misunderstandings between them which might create trust issues for both of them. Pisces might also get hurt due to the aggressive nature of Aries.\n");
                    printf("CONCLUSION\n");
                    printf("Communication=10percent \n");
                    printf("Compatibility=25percent \n");
                    break;

                    case 5:
                    printf("PROS\n");
                    printf("They both believe in waiting for their perfect match, rather than being with the wrong one. They will want to experience every level of love in their relationship. They both will put up equal efforts to establish a happy and successful relationship between them.\n");
                    printf("CONS\n");
                    printf("Taurus man and woman are very stubborn in nature which can be sometimes frustrating for Pisces. Taurus is short-tempered and this won’t be received well at the Pisces end as this will instill a feeling of fear and disappointment between them. Pisces may feel that Taurus is insensitive and unemotional while Taurus might get frustrated because of the constant need for emotional support by the Piscean.\n");
                    printf("CONCLUSION\n");
                    printf("Communication=10percent \n");
                    printf("Compatibility=25percent \n");
                    break;

                    case 6:
                    printf("PROS\n");
                    printf("Both the Fish and the Twins are mutable signs, which is why it is not difficult for them to adjust to the whims and fancies of each other. Pisces is an extremely caring individual and that does not go unnoticed by the Twins, who feels blessed to receive such unabashed attention from his/her lover. Gemini zodiac sign Gemini zodiac sign, on the other hand, inspires the Piscean with its sharp intellect and strong ambition. If the two signs find a way to build strong mutual understanding, they can learn a lot from each other and grow significantly in the entire process.\n");
                    printf("CONS\n");
                    printf("Every individual ruled by Gemini is unpredictable, and is guilty of duality in his/her personality. This is difficult to handle for the Piscean, who cannot understand the sudden mood swings that the Twins goes through, for no apparent reason. Gemini prefers to be emotionally aloof and standoffish, which is a big area of concern for the relationship. Pisces is a sign that feels and expresses immensely and the emotional unavailability of the third sign of the zodiac might put them off on more occasions than one. The latter, on the other hand, is driven by the idea of freedom and cannot stand being caged down to anything or anyone.\n");
                    printf("CONCLUSION\n");
                    printf("Communication=10percent \n");
                    printf("Compatibility=15percent \n");
                    break;

                    case 7:
                    printf("PROS\n");
                    printf("Pisces and Cancer are both very similar to each other. This could be a very major pro in the relationship. They are both dreamers, they both love staying in, they both are the kinds who are very selective of the ones they invest their emotions in. Both these water signs will have a great equation, finding a common ground, almost, as soon as a difference as occurred.\n");
                    printf("CONS\n");
                    printf("When dealing with water, we are all aware of the most important aspect. No matter how important water is to our survival, it is also capable of drowning us. This simple analogy holds true for this union as well. The Pisces Cancer compatibility can go sour with a simple shift. The great romance and glamour that rules their relationship, could drown them both. Pushing them into depression and anxiety.\n");
                    printf("CONCLUSION\n");
                    printf("Communication=60percent \n");
                    printf("Compatibility=80percent \n");
                    break;

                    case 8:
                    printf("PROS\n");
                    printf("The biggest advantage of their relationship is that both of them believe that love has got secret powers to fulfill their lives. Both of them will go to any extent to keep their partners happy and feel loved in their relationship. The Lion will appreciate the core qualities of the Pisces who has an unending warmth and compassion for all the living beings. While generous nature of Leo man and woman will help the Pisces to feel loved and secure.\n");
                    printf("CONS\n");
                    printf("They will have strong communication with each other but at times they will misunderstand each other which can create conflicts. They both will think that they are right but none of them will understand that they have struck the wrong chord. The lion needs to take care of their aggressive behavior while the Pisces need to control their idealism in order to not bother Leo.\n");
                    printf("CONCLUSION\n");
                    printf("Communication=25percent \n");
                    printf("Compatibility=25percent \n");
                    break;

                    case 9:
                    printf("PROS\n");
                    printf("The zodiac compatibility between Pisces and Virgo is extremely peaceful and harmonious. They both know what they want from the relationship, and will give each other the time to settle into the same. Virgo, with its practicality and knowledge, gives direction to the Piscean’s idealistic dreams. Pisces, on the other hand, helps the Virgo feel more and encourages him/her to express feelings without any inhibitions. The gentle and naïve side of the Fish is safeguarded by the Virgo, who strives to protect the Piscean’s innocence in life.\n");
                    printf("CONS\n");
                    printf("The dominating and perfection-seeking personality of the Virgo is too much to handle for the Pisces at times. The Fish prefers to operate in a dreamy world, and Virgo’s cold logic and sleek pragmatism threatens to plunge it into reality more often than not. This makes the Piscean bitter and unable to function at the best level. Virgo does not express emotions frequently, and that might stir feelings of insecurity in the sentimental Piscean. This might make the Fish feel ignored and under-appreciated in the relationship.\n");
                    printf("CONCLUSION\n");
                    printf("Communication=45percent \n");
                    printf("Compatibility=50percent \n");
                    break;

                    case 10:
                    printf("PROS\n");
                    printf("Libra is cardinal sign, while Pisces is a mutable. This is why, the Piscean can adjust to the whims and fancies of Libra’s personality, which in turn, helps the Libra feel secure. This way, they can both build their bond from the ground up.Pisces and Libra are both very kind to anyone and everyone around them. This is why, people look up to this pair and have a sense of respect towards them, as individuals and as a couple.\n");
                    printf("CONS\n");
                    printf("While they are both very understanding of each other, they will struggle to see eye to eye on many occasions. They are intrinsically different and have some very divergent core beliefs.The Piscean is a sensitive and emotional zodiac sign, while the Libra is relatively reticent. This can create a wedge between the two, more so as the latter’s inability to express his/her emotions openly can unnerve the Fish.\n");
                    printf("CONCLUSION\n");
                    printf("Communication=25percent \n");
                    printf("Compatibility=25percent \n");
                    break;

                    case 11:
                    printf("PROS\n");
                    printf("The erratic behaviour and complex personality of the Scorpion might be frustrating for most zodiac signs, but it does not deter the Piscean in the slightest. The fish is a gentle, kind, and patient sign that has the potential to break the walls around the Scorpion’s emotional side.On the other hand, the innocence of Pisces makes Scorpio feel protective about the Piscean. Hence, Scorpio makes sure to do everything in its power to make Pisces feel safeguarded and cherished, which in turn, brings out the best in the Fish.\n");
                    printf("CONS\n");
                    printf("The dominating persona of the Scorpion, though handled well by the Pisces man or Pisces woman, can cause problems in the relationship at times. While the Fish understands the overbearing nature of the Scorpion, it cannot accept it at all times. Hence, the Scorpion must practice relinquishing control from time to time so as to keep the relationship healthy.\n");
                    printf("CONCLUSION\n");
                    printf("Communication=60percent \n");
                    printf("Compatibility=80percent \n");
                    break;

                    case 12:
                    printf("PROS\n");
                    printf("The biggest similarity between these two signs Sagittarius and Pisces is that they have extremely creative minds and immensely intuitive personalities. They have some similar interests in terms of hobbies and other activities, which, in turn, can give them a serious chance to get to know and understand each other. The Fish and the Archer are both kind and compassionate individuals. They take pride in helping other people and thus, will always extend selfless support to each other in times of need.\n");
                    printf("CONS\n");
                    printf("Signs are that since both Pisces and Sagittarius tend to live in their dream worlds more than they do in the present, they might end up getting harsh reality checks from time to time. This will unnerve them and cause panic in their astrology couple compatibility. While Pisces is patient and Sagittarius is open-minded, they might not take this very well and fall into an emotional turmoil in such situations. It is unlikely that they will help each other out of such problems, considering they will be too busy trying to get bearings of their own self first. The emotional dependence of the Pisces might be caging for the Sagittarius, while the fiery temper of the Archer might not bode well with the gentle nature of the Fish.\n");       
                    printf("CONCLUSION\n");
                    printf("Communication=20percent \n");
                    printf("Compatibility=15percent \n");
                    break;

                    default: 
                    printf("Invalid Keywords entered.");
                    break;
                        
                        
                   
                        else
if ((m == 3 && day >= 20) || (m == 4 && day <= 19))
{
  switch (count)

    {
    case 1:
      printf ("PROS\n");
      printf
	("Their trust and faith is the only thing that makes their bond or compatibility stronger and relationship last longer. Both signs can comfortably share their darkest secrets with one another without feeling vulnerable or ashamed.\n");
      printf ("CONS\n");
      printf
	("Their stubborn nature is something to be concerned about as both strong-headed partners won't agree on surrendering to the other. Since both the signs like to take control in a relationship, they may find it harder to solve their disputes. Unnecessary tensions and conflicts might keep occurring from time to time. These stark differences determine how bumpy a ride they are going to have as they sail through, together.\n");
      printf ("CONCLUSION\n");
      printf ("Communication=20percent \n");
      printf ("Compatibility=15percent \n");
      break;

    case 2:
      printf ("PROS\n");
      printf
	("Since both Aquarius and Aries are extremely smart individuals, they will never run out of thought-provoking and mentally stimulating conversations. They enjoy every second of being with each other and there is not a single dull moment in between Aquarius and Aries relationship.\n");
      printf ("CONS\n");
      printf
	("The frequent fights between Aquarius and Aries arise from their relatively different approach to life. While Aries is emotional and expressive, Aquarius is reticent and subtle. The Aries needs affection from time to time and the Water bearers refusal to express might drive a wedge between the two zodiac signs.\n");
      printf ("CONCLUSION\n");
      printf ("Communication=100percent \n");
      printf ("Compatibility=85percent \n");
      break;

    case 3:
      printf ("PROS\n");
      printf
	("Pisces prefers surprises and doesn't think much before taking up an unknown endeavor. The Aries is also a risk-taker and spontaneous in making decisions and that is understood well by the fish. The Piscean is well aware of the aims and dreams of Aries, so they will always stay in their support. While the Aries will be protective and possessive for their Piscean partner because of their own strong mentality. The Aries will try to protect the Piscean as they are aware of their sensitive and emotional behavior.\n");
      printf ("CONS\n");
      printf
	("The biggest disadvantage of their love relationship is that both Pisces and Aries. Pisces sun sign have different ways of expressing their feelings. Pisces likes to deal with different feelings and emotions at different times while the Aries man and woman is quite specific and rigid about their emotions. Pisces don't have a constant feeling for anyone and their emotionality towards various things will fluctuate from time to time. This is not at all good for their relationship as this can create misunderstandings between them which might create trust issues for both of them. Pisces might also get hurt due to the aggressive nature of Aries.\n");
      printf ("CONCLUSION\n");
      printf ("Communication=10percent \n");
      printf ("Compatibility=25percent \n");
      break;

    case 4:
      printf ("PROS\n");
      printf
	("For Aries and Aries love compatibility to work, they will always need to work on compromise otherwise the two goats can end up with locked horns if the differences are not cut in the nip. Aries and Aries relationship can be a powerful one as they will be able to build an empire together and take on the world when they are with each other.\n");
      printf ("CONS\n");
      printf
	(" As much as fire is an amazing element of nature, it can never be controlled. It cooks our meals, keeps us warm, and powers everything. But by nature, fire does not WANT to be controlled, and neither do fire signs. In an Aries and Aries relationship compatibility there must be room for individuality, exploration and autonomy within safe boundaries. Making and keeping a commitment has to be handled delicately, so as not to lose the spark or smother the flame.\n");
      printf ("CONCLUSION\n");
      printf ("Communication=100percent \n");
      printf ("Compatibility=63percent \n");
      break;

    case 5:
      printf ("PROS\n");
      printf
	("Taurus will be attracted to the confidence and charm of the Ram. On the other hand, the Arian will be drawn by the quiet power and ceaseless ambition of the Taurean personality. If they manage to strike the right chord, this is a combination that can go the distance.\n");
      printf ("CONS\n");
      printf
	("Aries has inborn leadership qualities. However, that can turn into a controlling trait from time to time. The Taurean, who hates being ordered around by other people, will find this extremely hard to take. On the other hand, the Bulls stubbornness to change its point of view will frustrate the Arian endlessly. The Ram always wants to be right.\n");
      printf ("CONCLUSION\n");
      printf ("Communication=10percent \n");
      printf ("Compatibility=25percent \n");
      break;

    case 6:
      printf ("PROS\n");
      printf
	("The fact that Aries and Gemini have just one sign between them on the zodiac chart helps them understand each other on an almost visceral level. The ease with which Gemini zodiac natives handle all kinds of social situations is admired by Aries man and woman. On the other hand, the Ram's conviction and emotional resilience is extremely helpful to settle the Gemini's nerves, which are as fickle as his overall mindset.\n");
      printf ("CONS\n");
      printf
	("While Aries and Gemini are very good at starting things, they're just as bad at finishing something they've started. They require constant motivation to touch the finish line, and as both of them struggle in the final lap, it is tough for Aries man and Gemini woman and vice-versa to usher each other to complete anything they have taken on, be it individually or as a pair.\n");
      printf ("CONCLUSION\n");
      printf ("Communication=100percent \n");
      printf ("Compatibility=85percent \n");
      break;

    case 7:
      printf ("PROS\n");
      printf
	("The thing that works the best for Aries and Cancer love match is that both Aries man and Cancer woman and vice-versa are extremely devoted and loyal to their loved ones. They will do everything in their power to protect their family from harm and are not afraid to fight the world to bring a single smile to their faces. The domestic care that the crab provides in the relationship makes the Aries will secure and content.\n");
      printf ("CONS\n");
      printf
	("Both these zodiac signs are cardinal in nature, which means they find it difficult to cope to changing circumstances and do not like to compromise on their personality to adapt to their surroundings. This might be a real problem in their relationship, as neither Aries nor Cancer are comfortable with altering their beliefs or convictions.\n");
      printf ("CONCLUSION\n");
      printf ("Communication=20percent \n");
      printf ("Compatibility=15percent \n");
      break;

    case 8:
      printf ("PROS\n");
      printf
	("They motivate and support each other in life for they are well aware of each others ambitions and dreams in life. They let each other enjoy the spotlight as it comes their way. Since they are open about their feelings, they form a passionate, enthusiastic and secure pair.\n");
      printf ("CONS\n");
      printf
	("An Aries and Leo may reach a stage where they may turn against each other. They may witness heated arguments or say hateful things to each other. They might destroy their relationship beyond repair for they are highly temperamental and ego-centric.\n");
      printf ("CONCLUSION\n");
      printf ("Communication=60percent \n");
      printf ("Compatibility=80percent \n");
      break;

    case 9:
      printf ("PROS\n");
      printf
	("The Virgo and Aries relationship can be explosive, in a good way. Bringing fire and earth sign has mostly seen positive results. With both the signs being powerful, they can make a successful pair. While doting of their partners and being absolutely loyal is true to the Aries nature, the Virgo is gentle, caring and responsible for their partner.\n");
      printf ("CONS\n");
      printf
	("Aries man and Virgo woman and vice-versa are both signs that can't take things going against their will. Aries has a needs to have people with similar energy around them. Whereas, Virgo has an inherent need to have people do things when and how they deem fit. The energetic Aries can find the authoritarian Virgo tag bit demanding for their taste.\n");
      printf ("CONCLUSION\n");
      printf ("Communication=25percent \n");
      printf ("Compatibility=25percent \n");
      break;

    case 10:
      printf ("PROS\n");
      printf
	("Aries and Libra will always find an ethereal pull and attraction towards each other. What very few people know, is that this pull and attraction makes for a very successful relationship. Because they find themselves insanely bonded, they will find ways of changing themselves, to fit each other. In short, there is no difference grave enough to keep these two away from each other. Both signs are mildly romantic, and prefer to see the romance in the everyday of life.\n");
      printf ("CONS\n");
      printf
	("The balanced Libra, may kill the vibe for the enthusiastic Aries. All in all, even though these two signs will be madly in love and attracted to each other, they will not be right for the two individuals in the relationship. They both may give up on self-development because it is too tiring to explain to their partner why they need to learn something new. They may both stop doing things together, because the other has a different way of doing it, that they don't appreciate.\n");
      printf ("CONCLUSION\n");
      printf ("Communication=45percent \n");
      printf ("Compatibility=50percent \n");
      break;

    case 11:
      printf ("PROS\n");
      printf
	("The strong, tactical approach of the Scorpion helps Aries give direction to its sometimes wayward dreams. The former also teaches the latter how to take things slowly and think without acting in emotionally draining situations. On the other hand, the Arian brings a certain degree of warmth and excitement to the Scorpions life. The Ram teaches the Archer to let go of certain insecurities in life and encourages him or her to embrace positivity no matter what any particular situation stands for.\n");
      printf ("CONS\n");
      printf
	("The brashness and harsh words of the Arian can be too much to handle for the Scorpion, on some occasions. This can lead to fights between the Aries and Scorpio, and they are both not inclined towards compromise in such situations, which leads to an augmentation of their argument more often than not. The extroverted and social Aries is different from the aloof, and sometimes standoffish, Scorpion. They find it difficult to see eye to eye in certain situations because of their mutual differences.\n");
      printf ("CONCLUSION\n");
      printf ("Communication=25percent \n");
      printf ("Compatibility=25percent \n");
      break;

    case 12:
      printf ("PROS\n");
      printf
	("The physical as well as emotional intimacy that these signs share is second to none.  the best thing about the same is that Aries and Sagittarius do not hold grudges for too long and forgive easily. This helps them get over any argument with ease and avoid letting it hamper the growth of their bond. It is almost as if the two fire signs have enduring reserves of energy and will never run out of the same. However, if one of them does feel the gloom from time to time, the other is aware and understanding enough to lift his or her partner's spirits almost immediately.\n");
      printf ("CONS\n");
      printf
	("Both Aries and Sagittarius have an immense sense of pride and cannot back down from a fight. While these are good things more often than not, they might strain their relationship from time to time. When an argument does ensue from mutual differences, they will end up saying harsh words to each other and will fight ceaselessly without looking for a compromise.\n");
      printf ("CONCLUSION\n");
      printf ("Communication=60percent \n");
      printf ("Compatibility=80percent \n");
      break;

    default:
      printf ("Invalid Keywords entered.");
      break;

                }
            }
    
			
else if( (m == 4 && day >= 20) || (m == 5 && day <= 20) )  

{
  switch (count)

    {
case 1:
                    printf("PROS\n");
                    printf("The biggest advantage of this relationship is that Capricorn and Taurus have a lot in common with each other. They are practical, strong-willed, driven, and steadfast individuals. The quiet confidence of the Goat draws the Taurean, while the stubborn persistence of the Bull attracts the Capricorn.\n");
                    printf("CONS\n");
                    printf("The problem with this relationship is that both the signs are a bit too serious for their own good sometimes. This tends to make their relationship match mundane and even boring at times.The Capricorn is a bit too quiet and reticent even for the usually inexpressive Bull. The Taurean feels as if his/her partner is always wound up about one thing or the other and does not know how to relax once in a while.\n");
                    printf("CONCLUSION\n");
                    printf("Communication=60percent \n");
                    printf("Compatibility=80percent \n");
                    break;
                    
case 2:
                    printf("PROS\n");
                    printf("A Taurean’s calm temperament helps to resolve the apprehensions of an Aquarian. At the same time, an Aquarian’s rooted thoughts and expressions are what truly attracts a Taurean.Both being extremely loyal signs, will be devoted to each other and their zodiac match relationship. Both shall find it easier to trust, provided the Taurean remains truthful and the Aquarian does not keep secrets.Since both prefer to steer clear from unwanted squabbles, they shall be able to solve any issue at hand before things go out of control.\n");
                    printf("CONS\n");
                    printf("Taurus man and Taurus woman may find it a little tough to keep up with the exciting adventures of Aquarians. The Taurean may not be pleased with the water-bearer’s need to fly high even in uncharted waters, as they prefer to remain humble and grounded. Hence, the issues that crop up between the air and the earth signs are mainly due to these reasons.Their desires differ from each other too. A Taurean will always want to acquire materialistic things whereas, an Aquarian is more interested in holding onto personal consequences that are on an intellectual level. These two contrasting desires might act as a spoke between them creating tensions and misunderstandings.\n");
                    printf("CONCLUSION\n");
                    printf("Communication=20percent \n");
                    printf("Compatibility=15percent \n");
                    break; 
                    
case 3:
                    printf("PROS\n");
                    printf("They both believe in waiting for their perfect match, rather than being with the wrong one. They will want to experience every level of love in their relationship. They both will put up equal efforts to establish a happy and successful relationship between them.\n");
                    printf("CONS\n");
                    printf("Taurus man and woman are very stubborn in nature which can be sometimes frustrating for Pisces. Taurus is short-tempered and this won’t be received well at the Pisces end as this will instill a feeling of fear and disappointment between them. Pisces may feel that Taurus is insensitive and unemotional while Taurus might get frustrated because of the constant need for emotional support by the Piscean.\n");
                    printf("CONCLUSION\n");
                    printf("Communication=10percent \n");
                    printf("Compatibility=25percent \n");
                    break;

case 4:
                    printf("PROS\n");
                    printf("Taurus will be attracted to the confidence and charm of the Ram. On the other hand, the Arian will be drawn by the quiet power and ceaseless ambition of the Taurean personality. If they manage to strike the right chord, this is a combination that can go the distance.\n");
                    printf("CONS\n");
                    printf("Aries has inborn leadership qualities. However, that can turn into a controlling trait from time to time. The Taurean, who hates being ordered around by other people, will find this extremely hard to take. On the other hand, the Bulls stubbornness to change its point of view will frustrate the Arian endlessly. The Ram always wants to be right.\n");
                    printf("CONCLUSION\n");
                    printf("Communication=10percent \n");
                    printf("Compatibility=25percent \n");
                    break;
                    
case 5:
                    printf("PROS\n");
                    printf("One of the most positive aspects of this Taurus and Taurus love match is that they are not really lazy as people make them out to be. It is just that they conscientiously feel that wasting energy over something that has no quantifiable results is a waste of time. This conserving of energy contributes to the fact that when strength is really needed, they have enough of it to deal with the challenges.\n");
                    printf("CONS\n");
                    printf("Coming to the negative aspects of a two Taurus compatibility, it has been proven that they resist change until it becomes absolutely imperative to do so. They like to function in their comfort zone, and feel that if something is not broken, where is the need to fix it? However, perhaps the most disturbing aspect of a Taurus-Taurus association is their unwillingness to apologise or repent after they have made a mistake. They consider apologising to be a sign of weakness.\n");
                    printf("CONCLUSION\n");
                    printf("Communication=80percent\n");
                    printf("Compatibility=82.5percent \n");
                    break;
                    
case 6:
                    printf("PROS\n");
                    printf("The charm, confidence, and ceaseless wit of the Gemini attracts the shy Taurean. On the other hand, the trustworthy nature and mental toughness of Taurus makes the former feel secure in the relationship. The vivacity of Twins can help the Taurean ease up a little bit and raise his or her spirits on most occasions. Meanwhile, the practical and patient mind of this earth sign can help the air sign with his or her constantly fluttering frame of mind.\n");
                    printf("CONS\n");
                    printf("Taurus has a practical approach to everything and that quality might look boring to Gemini, who loves to jump into unexpected situations with spontaneity. The stubbornness of the Taurean, coupled with the Gemini's tendency to argue, can lead to serious fights between the Taurus man and Gemini woman and vice-versa.\n");
                    printf("CONCLUSION\n");
                    printf("Communication=10percent \n");
                    printf("Compatibility=25percent \n");
                    break;
                    
case 7:
                    printf("PROS\n");
                    printf("Cancer loves to build a home, and Taurus yearns to bring prosperity and beauty to that home. Thus, they form a functional dynamic around each other and are in sync at almost all times. Neither is afraid of committing to the other, but both will not rush into anything big unless they have spent the appropriate amount of time in developing their relationship. Cancer man and Cancer woman are gentle and extremely understanding towards the insecurities that are buried deep within the bull's heart.\n");
                    printf("CONS\n");
                    printf("Both the signs are so cautious that their relationship might stumble across a point where it dwells into stagnation and boredom. Cancer is impulsive at times, but that might not help the relationship unless that spontaneity is synchronous with the crazy side of the bull.\n");
                    printf("CONCLUSION\n");
                    printf("Communication=100percent \n");
                    printf("Compatibility=85percent \n");
                    break;
                    
case 8:
                    printf("PROS\n");
                    printf("Strong determination and decision making power are the common characteristics found in both of them. Leo loves to have the attention from the audience and on the contrary Taurus always finds a safe place among the near and dear ones.\n");
                    printf("CONS\n");
                    printf("Some problems may arise due to their personal dispositions and incompatibility. The Taureans being egotistical may need to step down a bit in front of the lions to sustain the relationship for long-term. The Leo with Lion as the symbol always wants to be at the centre of attention and that may hurt a Taureans' ego.\n");
                    printf("CONCLUSION\n");
                    printf("Communication=20percent \n");
                    printf("Compatibility=15percent \n");
                    break;
                    
case 9:
                    printf("PROS\n");
                    printf("There is a lot that these two earth signs have in common with each other. While one is ruled by the feminine Venus, the latter is ruled by the hottest planet, Mercury. Goes to show that there will be no dearth of warmth and caring in this relationship.\n");
                    printf("CONS\n");
                    printf("Even though both these signs are earth signs, they are different in the core of their nature. While Taurus is a fixed sign, Virgo is a mutable sign. As such, whenever the Virgo will want to make any changes to their lifestyle, or even routine, the Taurus will first try to negate it. Sure, if the Virgo talks them into it, there is a chance that they may agree. But the chances are slim.\n");
                    printf("CONCLUSION\n");
                    printf("Communication=60percent \n");
                    printf("Compatibility=80percent \n");
                    break;
                    
case 10:
                    printf("PROS\n");
                    printf("The Taurus Libra relationship will be a tumultuous one. Not everyone around them will understand it, but their romance will be the most beautiful one to them. This is the couple that will make sure that if anyone sees them fight, they also see them making it up to each other. Both vocal signs, this union is going to be a verbose one.\n");
                    printf("CONS\n");
                    printf("This is a rare kind of relationship where the strengths are the weaknesses. Aries and Libra are very different from each other. While they may think that they can help each other, that is exactly what this relationship can end up being for them- a project! They will both think that it is their responsibility to bail the other out of whatever problem they are in. This is bad.\n");
                    printf("CONCLUSION\n");
                    printf("Communication=25percent \n");
                    printf("Compatibility=25percent \n");
                    break;
                    
case 11:
                    printf("PROS\n");
                    printf("This is a relationship that survives and thrives of a strong foundation of mutual trust between the two partners. Taurus and Scorpio are both extremely committed lovers and will thus make each other feel secure and cherished in the relationship. They are amongst the strongest compatibilities of the zodiac because of their intense and unshakable emotional as well as physical connect with each other.\n");
                    printf("CONS\n");
                    printf("Both these signs are extremely stubborn and thus, when they find themselves on the opposite sides on an argument, it is difficult for them to find middle ground. They are extremely inflexible and cannot compromise in case of a strong and heated disagreement. There will be an omnipresent tussle for power in the relationship and it might seem like both the signs are trying to get the reins to each other.\n");
                    printf("CONCLUSION\n");
                    printf("Communication=percent \n");
                    printf("Compatibility=percent \n");
                    break;
                    
case 12:
                    printf("PROS\n");
                    printf("The ceaseless optimism exhibited by the Sagittarius will amaze the Taurus, but will also help him/her relax from time to time. The Bull will learn how to ease up and enjoy the little things in life due to the childlike enthusiasm and vivacity of the Sagittarius’s personality. Taurus will bring a semblance of calm and order to the wild and cluttered world of the Sagittarius. The Archer will get a road map to materialize their idealistic plans into realistic execution from his/her partner. While Sagittarius is louder and Taurus is relatively reticent, they are both incredibly passionate about life.\n");
                    printf("CONS\n");
                    printf("Both Taurus and Sagittarius are extremely stubborn and unyielding. They don’t see eye to eye on eight out of ten matters, and will constantly have contrasting opinions about everything. That would be okay, if they were both not so inflexible and unwilling to compromise their stand.\n");
                    printf("CONCLUSION\n");
                    printf("Communication=25percent \n");
                    printf("Compatibility=25percent \n");
                    break;
    }
    }
    }  
				
	else if(num==5) //fortunes-simran
        {
            if( (m == 12 && day >= 22) || (m == 1 && day <= 19) ) //capricon
            { 
                printf("Capricorns can be incredibly hard on themselves, and just as hard on other people. They can hold grudges and hold other people in their lives to impossible standards. Capricorns sometimes see one narrow way of doing something, and broadening their horizons and perspective can be incredibly helpful in giving them and others a break.");
            }
            else if( (m == 1 && day >= 20) || (m == 2 && day <= 17) ) //aquarius
            { 
                printf("Aquarians can sometimes seem as if they don't care about their individual relationships, or they are holding something else at a higher value. For example, an Aquarian may cancel a date at the last minute because a friend or family member is stuck and needs a ride. It's not personal, and it's not a bad thing. An Aquarian has a value system that's constantly prioritizing the people who need them the most, and sometimes, that puts the people they love in a lurch. Clear communication is necessary to avoid these issues.");
            }
            else if( (m == 2 && day >= 18) || (m == 3 && day <= 19) )  //pisces
            { 
                printf("Pisces signs can sometimes spend too much time in their heads, getting overly wrapped up in a problem and assuming there's no solution. Pisces are always one of the first signs to lend an ear to others, but when it comes to asking for help—especially emotional help—Pisces can sometimes wall themselves off, assuming that nobody knows what they are feeling and not even giving anyone a chance to try. Learning how to open up can be a huge lesson for Pisces. Of course, the fact remains that no one can read a Pisces mind. Pisces sometimes feels frustrated that they are seen as 'more complicated' than their peers, and that feeling can make them act or seem defensive. Pisces needs to learn to let down their guard, allow people to love them, and allow for mistakes to be made.");
            }
            else if( (m == 3 && day >= 20) || (m == 4 && day <= 19) ) //aries
            { 
                printf("The world according to an Aries makes so much sense that they have a hard time listening to, much less accepting, alternative viewpoints. Slowing down is also tough. A Ram's mind goes a million miles a minute, and slowing down for others can be excruciating. But when it comes to maintaining relationships, Aries must learn to adapt and embrace other ways of doing, being, and seeing.");
            }
            else if( (m == 4 && day >= 20) || (m == 5 && day <= 20) )  //taurus
            { 
                printf("Yes, they're hardworking, but they're also lazy. How is that even possible? Because Bulls are so driven by their own internal compass, they sometimes have trouble pivoting to fulfill someone else's demands, which can lead to tough times at work or school. Learning to consider others' viewpoints is a lifelong lesson for all Taureans.");
            }
            else if( (m == 5 && day >= 21) || (m == 6 && day <= 20) ) //gemini
            { 
                printf("That social chameleon rep can sometimes earn Gemini a reputation as two-faced. While a Gemini is all about truth, sometimes a Gemini is more likely to talk to others about a conflict instead of approaching the person who's actually causing it. The Twins have also been known to stir up gossip just to keep things exciting.");
            }
            else if( (m == 6 && day >= 21) || (m == 7 && day <= 22) ) //cancer
            { 
                printf("While Cancer easily and accurately reads situations when they're presented, he or she may not share those opinions with others. Speaking up is key, because turning inward with emotions means that those emotions may erupt unexpectedly. Crabs also expect others to know what they're thinking, which is another source of pent-up frustration. Learning to voice opinions, even if it leads to conflict, is a lifelong lesson for Cancer.");
            }
            else if( (m == 7 && day >= 23) || (m == 8 && day <= 22) ) //leo
            { 
                printf("Leos work hard for the money, and they want you to know it. Leo loves luxury, whether it's five-star hotels or designer labels, and isn't shy about splashing out cash for quality. But Leo isn't foolish. Although this sign appreciates spending money, they know how to think long-term, and there's a strategy behind their spending decisions. Leo's motto is 'You can't take it with you', and Lions will crunch the numbers to live in the best style they can afford—without going into debt.");
            }
            else if( (m == 8 && day >= 23) || (m == 9 && day <= 22) ) //virgo
            { 
                printf("Virgo's desire to have everything be perfect can manifest in frustration when things don't live up to those (sometimes unrealistic) expectations. Besides occasionally leading to fights with friends and partners, Virgo's focus on perfection can cause everything even uploading an Instagram photo to take forever. Learning to go with the flow and accept good enough. is a constant struggle.");
            }
            else if( (m == 9 && day >= 23) || (m == 10 && day <= 22) ) //libra
            { 
                printf("Libra is great at making everyone happy—but what good is that if Libras themselves don't feel fulfilled? While the Scales have a fine-tuned internal compass, they sometimes ignore what they want in favor of what makes everyone else happy—and this habit ends up backfiring in the long run");
            }
            else if( (m == 10 && day >= 23) || (m == 11 && day <= 21) ) //scorpio
            { 
                printf("Repeat after us: It's all right to cry. Scorpio tries to hard to seem tough that they sometimes cut off their vulnerable side entirely, seeming prickly, uncaring, and cold to outsiders. While expressing emotion is scary, learning how to do it is key for Scorpio, since presenting an 'I don't care' veneer can only work for so long before it get's exhausting!");
            }
            else if( (m == 11 && day >= 22) || (m == 12 && day <= 21) ) //sagittarius
            { 
                printf("Sagittarius can sometimes be far too blunt, and put their own needs above others. You don’t need to veer from your values, but sometimes, a white lie saves all. It can also be helpful to be part of the pack now and then. Sagittarius is so good at doing things independently, but sometimes it can be faster, smarter, and more fun to do things as part of a group.");
            }
        }
        else //exit
        {
            printf("uh oh");
        }  
        printf("\n ENTER 1 TO CONTINUE \n ENTER 0 TO QUIT \n");
        scanf("%d",&yn);
    }
    while(yn==1);  
    return 0;  
}
