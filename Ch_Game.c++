#include <bits/stdc++.h>
using namespace std;

#define RED "\033[31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[33m"
#define ORANGE "\033[38;5;208m"
#define BLUE "\033[1;34m"
#define LIGHT_BLUE "\033[38;5;39m"
#define LIME "\033[38;5;118m"
#define RESET "\033[0m"

string randElement()
{
    vector<string> elements = {"Fe", "Cu", "Au", "Ag", "Hg", "Pt", "Ti", "Cr", "Mo", "V"};
    srand(time(0));
    int rindex = rand() % elements.size();
    return elements[rindex];
}

string getHint(const string &element, int hint)
{
    if (element == "Fe")
    {
        switch (hint)
        {
        case 1:
            return "This element has the atomic number 26.";
        // هذا العنصر يملك العدد الذري 26 ويمتلئ إلكتروناته في المدارين 3d و4s.
        case 2:
            return "It is a transition metal commonly used in construction and manufacturing.";
        // معدن انتقالي يستخدم بشكل شائع في البناء والصناعة.
        case 3:
            return "Its electron configuration ends with 4s2 3d6.";
        // تكوينه الإلكتروني ينتهي بـ 3d6 4s2.
        case 4:
            return "It is magnetic and its common oxidation state is +2.";
        // مغناطيسي ويكون حالته الأكسدة الشائعة +2.
        case 5:
            return "It is essential for blood production in humans.";
            // ضروري لإنتاج الدم في جسم الإنسان.
        }
    }
    else if (element == "Cu")
    {
        switch (hint)
        {
        case 1:
            return "This element has the atomic number 29";
        // العدد الذري 29 ويمتلئ إلكتروناته في 3d10 و4s1.
        case 2:
            return "Known for its excellent electrical conductivity.";
        // معروف بموصلية كهربائية ممتازة.
        case 3:
            return "Its electron configuration ends with 4s1 3d10.";
        // تكوينه الإلكتروني ينتهي بـ 3d10 4s1.
        case 4:
            return "Its oxidation state is usually +1 or +2.";
        // حالته الأكسدة عادة +1 أو +2.
        case 5:
            return "It is used extensively in electrical wiring and plumbing.";
            // يُستخدم بشكل واسع في الأسلاك الكهربائية والسباكة.
        }
    }
    else if (element == "Au")
    {
        switch (hint)
        {
        case 1:
            return "This element has the atomic number 79.";
        // العدد الذري 79 وتكوينه الإلكتروني 5d10 6s1.
        case 2:
            return "It is a precious metal often used in jewelry.";
        // معدن ثمين يُستخدم في المجوهرات.
        case 3:
            return "Its electrons fill the 6s1 5d10 orbitals.";
        // إلكتروناته تملأ 5d10 و6s1.
        case 4:
            return "It is highly resistant to corrosion and tarnishing.";
        // مقاوم جدًا للتآكل والصدأ.
        case 5:
            return "It is often found in free elemental form in nature.";
            // يوجد غالبًا في شكله الطبيعي الحر.
        }
    }
    else if (element == "Ag")
    {
        switch (hint)
        {
        case 1:
            return "This element has the atomic number 47.";
        // العدد الذري 47 ويمتلئ إلكتروناته في 4d10 و5s1.
        case 2:
            return "It is the best conductor of electricity among metals.";
        // أفضل موصل كهربائي بين المعادن.
        case 3:
            return "Its electron configuration ends with 5s1 4d10.";
        // تكوينه الإلكتروني ينتهي بـ 4d10 5s1.
        case 4:
            return "It tarnishes to black when exposed to sulfur compounds.";
        // يتأكسد إلى الأسود عند تعرضه لمركبات الكبريت.
        case 5:
            return "It is used in jewelry";
            // يُستخدم في المجوهرات والأواني الفضية.
        }
    }
    else if (element == "Hg")
    {
        switch (hint)
        {
        case 1:
            return "This element has the atomic number 80.";
        // العدد الذري 80 وتكوين إلكتروناته 5d10 6s2.
        case 2:
            return "It is a liquid at room temperature.";
        // سائل عند درجة الغرفة.
        case 3:
            return "Its electron configuration ends with 6s2 5d10 .";
        // ينتهي تكوينه الإلكتروني بـ 5d10 6s2.
        case 4:
            return "It is toxic and used in thermometers historically.";
        // سام ويستخدم في الترمومترات تاريخيًا.
        case 5:
            return "It is the only metal that is liquid at standard conditions.";
            // المعدن الوحيد الذي يكون سائلًا في الظروف العادية.
        }
    }
    else if (element == "Pt")
    {
        switch (hint)
        {
        case 1:
            return "This element has the atomic number 78.";
        // العدد الذري 78 وتكوينه 5d9 6s1.
        case 2:
            return "It is a precious, corrosion-resistant metal used in catalytic converters.";
        // معدن ثمين مقاوم للتآكل يُستخدم في محولات الحفازات.
        case 3:
            return "Its electrons fill the 6s1 5d9 orbitals.";
        // إلكتروناته تملأ 5d9 و6s1.
        case 4:
            return "It is used as a catalyst in chemical reactions.";
        // يُستخدم كمحفز في التفاعلات الكيميائية.
        case 5:
            return "It is very rare and valuable.";
            // نادر جدًا وقيم.
        }
    }
    else if (element == "Ti")
    {
        switch (hint)
        {
        case 1:
            return "This element has the atomic number 22.";
        // العدد الذري 22 وتكوين إلكتروناته 3d2 4s2.
        case 2:
            return "It is a strong, lightweight metal used in aerospace applications.";
        // معدن قوي وخفيف يستخدم في الطيران.
        case 3:
            return "Its electron configuration ends with 4s2 3d2.";
        // ينتهي تكوينه الإلكتروني بـ 3d2 4s2.
        case 4:
            return "It is highly resistant to corrosion due to a native oxide layer.";
        // مقاوم جدًا للتآكل بسبب طبقة أكسيد طبيعية.
        case 5:
            return "It is used in medical implants and aircraft frames.";
            // يُستخدم في الزرعات الطبية وهياكل الطائرات.
        }
    }
    else if (element == "Cr")
    {
        switch (hint)
        {
        case 1:
            return "This element has the atomic number 24.";
        // العدد الذري 24 وتكوين إلكتروناته 3d5 4s1.
        case 2:
            return "It is known for its high corrosion resistance and shiny appearance.";
        // معروف بمقاومته للتآكل ومظهره اللامع.
        case 3:
            return "Its electron configuration ends with 4s1 3d5.";
        // ينتهي تكوينه الإلكتروني بـ 3d5 4s1.
        case 4:
            return "It is used in stainless steel and plating.";
        // يُستخدم في الصلب المقاوم للصدأ والطلاء.
        case 5:
            return "It can exist in multiple oxidation states, commonly +3 and +6.";
            // يمكن أن يكون في حالات أكسدة متعددة، عادة +3 و +6.
        }
    }
    else if (element == "Mo")
    {
        switch (hint)
        {
        case 1:
            return "This element has the atomic number 42.";
        // العدد الذري 42 وتكوين إلكتروناته 4d5 5s1.
        case 2:
            return "It is used in high-strength steel alloys.";
        // يُستخدم في سبائك الصلب عالية المقاومة.
        case 3:
            return "Its electron configuration ends with 5s1 4d5.";
        // ينتهي تكوينه الإلكتروني بـ 4d5 5s1.
        case 4:
            return "It has a high melting point among transition metals.";
        // لديه نقطة انصهار عالية بين المعادن الانتقالية.
        case 5:
            return "It is essential in some enzyme functions in biological systems.";
            // ضروري لوظائف الإنزيمات في الأنظمة البيولوجية.
        }
    }
    else if (element == "V")
    {
        switch (hint)
        {
        case 1:
            return "This element has the atomic number 23.";
        // العدد الذري 23 وتكوين إلكتروناته 3d3 4s2.
        case 2:
            return "It is used to produce strong steel alloys.";
        // يُستخدم في إنتاج سبائك الصلب القوية.
        case 3:
            return "Its electron configuration ends with 4s2 3d3.";
        // ينتهي تكوينه الإلكتروني بـ 3d3 4s2.
        case 4:
            return "It exhibits multiple oxidation states, +2, +3, +4, and +5.";
        // يظهر حالات أكسدة متعددة، +2، +3، +4، و+5.
        case 5:
            return "It is a transition metal with a bright silvery appearance.";
            // معدن انتقالي ذو مظهر فضي لامع.
        }
    }
    return 0;
}

int main()
{

    string element = randElement();

    int maxHints = 5;
    int currentHint = 1;

    cout << RED << "\n\n                         WELCOME TO THE CHEMISTRY GAME \n\n"
         << RESET;
    cout << LIME << "A random element from (group D) in the periodic table has been chosen\n\n"
         << RESET;
    cout << BLUE << "                   ############  " << RED << "GAME RULES" << BLUE << "  ##########\n";
    cout << RED << "1-" << LIGHT_BLUE << " You have only five hints to guess the element\n";
    cout << RED << "2-" << LIGHT_BLUE << " When you get the hint you choose either guess the element or move to the next hint\n";
    cout << RED << "3-" << LIGHT_BLUE << " If you guess the element and it was false you will move to the next hint automatically\n";
    cout << RED << "4-" << LIGHT_BLUE << " If you guess the element correctly you will win :)\n";
    cout << RED << "5-" << LIGHT_BLUE << " If you finished all the hints and you did not get the element right you will lose :(\n\n"
         << RESET;
    cout << ORANGE << "LET'S START THE GAME\n\n"
         << RESET;

    while (currentHint <= maxHints)
    {
        string guessElement;
        string answer;
        cout << YELLOW << "# Hint " << currentHint << " : ";
        cout << getHint(element, currentHint) << "\n"
             << RESET;
        cout << "Do you want to guess the element (yes/no)? : ";
        cin >> answer;
        if (answer == "yes")
        {
            cout << "Enter your guess: ";
            cin >> guessElement;
            if (guessElement == element)
            {
                cout << GREEN << "\nCongrats, you guessed the element correctly!\n\n"
                     << RESET;
                return 0;
            }
            else
            {
                cout << RED << "\nSorry, your guess is not correct!\n\n"
                     << RESET;
            }
        }
        else
        {
            cout << "\n";
        }
        currentHint++;
    }
    cout << "Sorry your hints are over:(\n";
    cout << "The element was " << GREEN << element << RESET << endl;

    return 0;
}
