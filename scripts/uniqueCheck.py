
for infile in ['0jet', '1jet', '2jet', 'inclusive']:
    seeds = []
    totalLines = 0
    with open(f'{infile}.txt') as f:
        for line in f:
            totalLines += 1
            if line not in seeds:
                seeds.append(line)
                
    print(f'File: {infile}')
    print(f'Total Lines:  {totalLines}')
    print(f'Unique Seeds: {len(seeds)}\n')

