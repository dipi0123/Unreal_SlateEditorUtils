#include "SlateEditorUtils.h"
#include "Widgets/SCompoundWidget.h"
#include "Widgets/Text/STextBlock.h"
#include "Widgets/Input/SCheckBox.h"
#include "Widgets/Input/SButton.h"

/**
 * �ؽ�Ʈ ���̺��� �ִ� üũ�ڽ��� �����ϴ� �Լ�.
 * üũ�ڽ��� �ؽ�Ʈ�� ������ ��ġ�� UI ��Ҹ� ��ȯ�մϴ�.
 *
 * @param LabelText üũ�ڽ� ���� ǥ���� �ؽ�Ʈ.
 * @param OnChangedCallback üũ�ڽ� ���� ���� �� ȣ���� �ݹ� �Լ�.
 * @return üũ�ڽ��� �ؽ�Ʈ�� ���Ե� SHorizontalBox ������ ��ȯ.
 */
TSharedRef<SWidget> SlateEditorUtils::CreateCheckboxWithText(const FText& LabelText, FOnCheckStateChanged OnChangedCallback)
{
    return
        SNew(SHorizontalBox)

        + SHorizontalBox::Slot()
        .AutoWidth()
        [
            SNew(SCheckBox)
                .OnCheckStateChanged(OnChangedCallback)
        ]

        + SHorizontalBox::Slot()
        .AutoWidth()
        [
            SNew(STextBlock)
                .Text(LabelText)
        ];
}

/**
 * �ؽ�Ʈ�� ���Ե� ��ư�� �����ϴ� �Լ�.
 * ��ư Ŭ�� �� ȣ���� �ݹ� �Լ��� �Բ� �ؽ�Ʈ�� ������ �� �ֽ��ϴ�.
 *
 * @param ButtonText ��ư�� ǥ���� �ؽ�Ʈ.
 * @param OnClickedCallback ��ư Ŭ�� �� ȣ���� �ݹ� �Լ�.
 * @return �ؽ�Ʈ�� �ݹ��� ���Ե� ��ư ������ ��ȯ.
 */
TSharedRef<SWidget> SlateEditorUtils::CreateButtonWithText(const FText& ButtonText, FOnClicked OnClickedCallback)
{
    return
        SNew(SButton)
        .Text(ButtonText)
        .OnClicked(OnClickedCallback);
}
