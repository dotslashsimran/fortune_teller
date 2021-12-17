#include <stdio.h>
#include <stdlib.h> 
int main()  
{  int yn;
 do
 { char name[20];
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
    if(num==1) //about me-bk
    {
        int ch;
    printf("1-CAPRICORN \n 2-AQUARIUS \n 3-PISCES \n 4-ARIES \n 5-TAURUS \n 6-GEMINI \n 7-CANCER \n 8-LEO \n 9-VIRGO \n 10-LIBRA \n 11-SCORPIO \n 12-SAGITTARIUS \n");
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
    else if(num==3) //lucky colour-devansh
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
        printf("under maintenance");
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
      {printf("uh oh");}  printf("\n ENTER 1 TO CONTINUE \n ENTER 0 TO QUIT \n");scanf("%d",&yn);
}while(yn==1);  
    
    return 0;  
}  
