import random
while True:
    question = input('Твоє питання :-) : ')
    if question == '0':
        break
    answers = ['Так', 'Ні', 'Не знаю', 'Буває так', 'Катюша відчепись!', 'Мабуть', 'Можливо', 'Я твій друг!']
    print(random.choice(answers), '\n')

